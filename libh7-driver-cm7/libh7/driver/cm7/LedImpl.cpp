#include "LedImpl.hpp"
#include <libh7/driver/common/SharedData.hpp>
#include <main.h>

using namespace h7::driver;
using namespace h7::driver::cm7;

common::SharedData common::ledInfo;

LedImpl::LedImpl()
{
	instance = this;
}

void LedImpl::turnOn(Color color)
{
    common::ledInfo.action = true;
    common::ledInfo.color = (unsigned)color;
    __SEV();
}

void LedImpl::turnOff(Color color)
{
    common::ledInfo.action = false;
    common::ledInfo.color = (unsigned)color;
    __SEV();
}