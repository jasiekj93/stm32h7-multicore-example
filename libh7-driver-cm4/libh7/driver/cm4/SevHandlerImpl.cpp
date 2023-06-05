#include "SevHandlerImpl.hpp"
#include <stm32h7xx_it.h>
#include <libh7/driver/common/SharedData.hpp>
#include <atomic>

using namespace h7;
using namespace h7::driver;
using namespace h7::driver::cm4;

static volatile std::atomic_flag flag;
static hardware::cm4::Request request;
static bool isChanged;

common::SharedData common::ledInfo;

static void sevCallbackImpl()
{
    if(std::atomic_flag_test_and_set(&flag))
        return;

    request.color = (hardware::cm4::Request::Color)common::ledInfo.color;
    request.action = common::ledInfo.action;
    isChanged = true;
    std::atomic_flag_clear(&flag);
}

SevHandlerImpl::SevHandlerImpl()
{
	instance = this;
    sevCallback = &sevCallbackImpl;
    std::atomic_flag_clear(&flag);
}

hardware::cm4::Request* h7::driver::cm4::SevHandlerImpl::getRequest()
{
    while(std::atomic_flag_test_and_set(&flag) == true)
        ;

    hardware::cm4::Request* result = nullptr;

    if(isChanged)
    {
        result = &request;
        isChanged = false;
    }

    std::atomic_flag_clear(&flag);

    return result;
}
