#include "Debug_Log.h"
#include "stm32wlxx_hal_def.h"
#include "stm32wle5xx.h"
// int fputc(int ch, FILE *f)
// {
//     HAL_UART_Transmit(LPUART1, (uint8_t *)&ch, 1, HAL_MAX_DELAY);
//     return ch;
// }