#include "Init.hpp"
#include <main.h>
#include <gpio.h>

#ifndef HSEM_ID_0
#define HSEM_ID_0 (0U) /* HW semaphore 0*/
#endif

void h7::driver::cm7::init()
{
    int32_t timeout;
    /* USER CODE END Boot_Mode_Sequence_0 */

    /* USER CODE BEGIN Boot_Mode_Sequence_1 */
    /* Wait until CPU2 boots and enters in stop mode or timeout*/
    timeout = 0xFFFF;
    while((__HAL_RCC_GET_FLAG(RCC_FLAG_D2CKRDY) != RESET) && (timeout-- > 0));
    if ( timeout < 0 )
    {
    Error_Handler();
    }
    /* USER CODE END Boot_Mode_Sequence_1 */
    /* MCU Configuration--------------------------------------------------------*/

    /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
    HAL_Init();

    /* USER CODE BEGIN Init */

    /* USER CODE END Init */

    /* Configure the system clock */
    SystemClock_Config();
    /* USER CODE BEGIN Boot_Mode_Sequence_2 */
    /* When system initialization is finished, Cortex-M7 will release Cortex-M4 by means of
    HSEM notification */
    /*HW semaphore Clock enable*/
    __HAL_RCC_HSEM_CLK_ENABLE();
    /*Take HSEM */
    HAL_HSEM_FastTake(HSEM_ID_0);
    /*Release HSEM in order to notify the CPU2(CM4)*/
    HAL_HSEM_Release(HSEM_ID_0,0);
    /* wait until CPU2 wakes up from stop mode */
    timeout = 0xFFFF;
    while((__HAL_RCC_GET_FLAG(RCC_FLAG_D2CKRDY) == RESET) && (timeout-- > 0));
    if ( timeout < 0 )
    {
    Error_Handler();
    }
    /* USER CODE END Boot_Mode_Sequence_2 */

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */
}