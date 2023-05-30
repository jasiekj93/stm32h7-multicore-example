#include "LedImpl.hpp"
#include <libh7/driver/common/SharedData.hpp>
#include <main.h>

using namespace h7::driver;
using namespace h7::driver::cm7;

static auto sharedPointer = (common::SharedData*)common::SHARED_ADDRESS;

LedImpl::LedImpl()
{
	instance = this;
}

void LedImpl::turnOn(Color color)
{
    sharedPointer->action = true;
    sharedPointer->color = (unsigned)color;
    __SEV();
}

void LedImpl::turnOff(Color color)
{
    sharedPointer->action = true;
    sharedPointer->color = (unsigned)color;
    __SEV();
}