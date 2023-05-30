#include "SystemImpl.hpp"
#include <main.h>

using namespace h7::driver::cm7;

SystemImpl::SystemImpl()
{
	instance = this;
}

void SystemImpl::delay(unsigned ms)
{
    HAL_Delay(ms);
}
