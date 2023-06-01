#include "SystemImpl.hpp"
#include <main.h>
#include <stm32h7xx_it.h>

using namespace h7::driver::cm7;

static void sevHandlerImpl()
{

}

SystemImpl::SystemImpl()
{
	instance = this;
    sevHandler = &sevHandlerImpl;
}

void SystemImpl::delay(unsigned ms)
{
    HAL_Delay(ms);
}
