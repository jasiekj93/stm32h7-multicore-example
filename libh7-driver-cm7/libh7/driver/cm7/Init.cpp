#include "Init.hpp"
#include <main.h>
#include <gpio.h>

#ifndef HSEM_ID_0
#define HSEM_ID_0 (0U) /* HW semaphore 0*/
#endif

void h7::driver::cm7::init()
{
    HAL_Init();
  MX_GPIO_Init();
}