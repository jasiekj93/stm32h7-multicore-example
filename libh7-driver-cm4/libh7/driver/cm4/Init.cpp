#include "Init.hpp"
#include <main.h>
#include <gpio.h>
#include <stm32h7xx_hal_msp.h>

#ifndef HSEM_ID_0
#define HSEM_ID_0 (0U) /* HW semaphore 0*/
#endif

void h7::driver::cm4::init()
{
    HAL_Init();

  /* Configure the system clock to 400 MHz */
  SystemClock_Config();

  /* Enable CPU1 (CM7) boot regardless of option byte values */
  HAL_RCCEx_EnableBootCore(RCC_BOOT_C1);

    /* USER CODE END Boot_Mode_Sequence_2 */

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

  /* USER CODE END Init */

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  HAL_MspInit();
}