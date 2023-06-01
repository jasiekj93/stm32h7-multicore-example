#include "SystemImpl.hpp"
#include <main.h>

using namespace h7::driver::cm4;

SystemImpl::SystemImpl()
{
	instance = this;
}

void SystemImpl::delay(unsigned ms)
{
    HAL_Delay(ms);
}

void SystemImpl::sleep()
{
    HAL_PWR_EnterSLEEPMode(PWR_MAINREGULATOR_ON, PWR_SLEEPENTRY_WFE); 
}
