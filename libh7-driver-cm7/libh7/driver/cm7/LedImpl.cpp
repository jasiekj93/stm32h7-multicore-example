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
    if(color == Color::YELLOW)
    {
        // sharedPointer->action = true;
        // sharedPointer->color = (unsigned)color;
        __SEV();
    }
    else
        HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET);
}

void LedImpl::turnOff(Color color)
{
    if(color == Color::YELLOW)
    {
        sharedPointer->action = false;
        // sharedPointer->color = (unsigned)color;
        __SEV();
    }
    else
        HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);
}