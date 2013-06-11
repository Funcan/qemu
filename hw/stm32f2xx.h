#include "stm32.h"

enum {
    STM32F2XX_PERIPH_UNDEFINED = -1,
    STM32F2XX_RCC = 0,
    STM32F2XX_GPIOA,
    STM32F2XX_GPIOB,
    STM32F2XX_GPIOC,
    STM32F2XX_GPIOD,
    STM32F2XX_GPIOE,
    STM32F2XX_GPIOF,
    STM32F2XX_GPIOG,
    STM32F2XX_GPIOH,
    STM32F2XX_GPIOI,
    STM32F2XX_SYSCFG,
    STM32F2XX_UART1,
    STM32F2XX_UART2,
    STM32F2XX_UART3,
    STM32F2XX_UART4,
    STM32F2XX_UART5,
    STM32F2XX_UART6,
    STM32F2XX_ADC1,
    STM32F2XX_ADC2,
    STM32F2XX_ADC3,
    STM32F2XX_DAC,
    STM32F2XX_TIM1,
    STM32F2XX_TIM2,
    STM32F2XX_TIM3,
    STM32F2XX_TIM4,
    STM32F2XX_TIM5,
    STM32F2XX_TIM6,
    STM32F2XX_TIM7,
    STM32F2XX_TIM8,
    STM32F2XX_TIM9,
    STM32F2XX_TIM10,
    STM32F2XX_TIM11,
    STM32F2XX_BKP,
    STM32F2XX_PWR,
    STM32F2XX_I2C1,
    STM32F2XX_I2C2,
    STM32F2XX_I2S2,
    STM32F2XX_I2S3,
    STM32F2XX_WWDG,
    STM32F2XX_CAN1,
    STM32F2XX_CAN2,
    STM32F2XX_CAN,
    STM32F2XX_USB,
    STM32F2XX_SPI1,
    STM32F2XX_SPI2,
    STM32F2XX_SPI3,
    STM32F2XX_EXTI,
    STM32F2XX_SDIO,
    STM32F2XX_FSMC,
    STM32F2XX_PERIPH_COUNT,
};

#define STM32F2XX_GPIO_COUNT (STM32F2XX_GPIOI - STM32F2XX_GPIOA + 1)
#define STM32F2XX_SPI_COUNT 3

struct stm32f2xx {
    DeviceState *spi_dev[STM32F2XX_SPI_COUNT];
};
