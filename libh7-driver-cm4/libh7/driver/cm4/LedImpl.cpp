#include "LedImpl.hpp"
#include <main.h>
#include <gpio.h>

using namespace h7::driver;
using namespace h7::driver::cm4;

static GPIO_TypeDef * ports[] = { LD1_GPIO_Port, LD2_GPIO_Port, LD3_GPIO_Port };
static uint16_t pins[] = { LD1_Pin, LD2_Pin, LD3_Pin };

LedImpl::LedImpl()
{
	instance = this;
}

void LedImpl::turnOn(Color color)
{
    HAL_GPIO_WritePin(ports[(int)color], pins[(int)color], GPIO_PIN_SET);
}

void LedImpl::turnOff(Color color)
{
    HAL_GPIO_WritePin(ports[(int)color], pins[(int)color], GPIO_PIN_RESET);
}