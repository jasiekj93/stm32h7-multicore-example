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
static auto sharedPointer = (common::SharedData*)common::SHARED_ADDRESS;

static void sevCallbackImpl()
{
    if(std::atomic_flag_test_and_set(&flag))
        return;

    request.color = (hardware::cm4::Request::Color)sharedPointer->color;
    request.action = sharedPointer->action;
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
