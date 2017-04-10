//Autogenerated file
//MCU name: STM32F101ZF
//MCU  xml: STM32F101Z(F-G)Tx.xml
//GPIO remap/alternate function xml: GPIO-STM32F103xF_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type port_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_11},
  { GPIOA, GPIO_PIN_12},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_2 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOB, GPIO_PIN_8 },
  { GPIOB, GPIO_PIN_9 },
  { GPIOB, GPIO_PIN_10},
  { GPIOB, GPIO_PIN_11},
  { GPIOB, GPIO_PIN_12},
  { GPIOB, GPIO_PIN_13},
  { GPIOB, GPIO_PIN_14},
  { GPIOB, GPIO_PIN_15},
  { GPIOC, GPIO_PIN_0 },
  { GPIOC, GPIO_PIN_1 },
  { GPIOC, GPIO_PIN_2 },
  { GPIOC, GPIO_PIN_3 },
  { GPIOC, GPIO_PIN_4 },
  { GPIOC, GPIO_PIN_5 },
  { GPIOC, GPIO_PIN_6 },
  { GPIOC, GPIO_PIN_7 },
  { GPIOC, GPIO_PIN_8 },
  { GPIOC, GPIO_PIN_9 },
  { GPIOC, GPIO_PIN_10},
  { GPIOC, GPIO_PIN_11},
  { GPIOC, GPIO_PIN_12},
  { GPIOC, GPIO_PIN_13},
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
  { GPIOD, GPIO_PIN_0 },
  { GPIOD, GPIO_PIN_1 },
  { GPIOD, GPIO_PIN_2 },
  { GPIOD, GPIO_PIN_3 },
  { GPIOD, GPIO_PIN_4 },
  { GPIOD, GPIO_PIN_5 },
  { GPIOD, GPIO_PIN_6 },
  { GPIOD, GPIO_PIN_7 },
  { GPIOD, GPIO_PIN_8 },
  { GPIOD, GPIO_PIN_9 },
  { GPIOD, GPIO_PIN_10},
  { GPIOD, GPIO_PIN_11},
  { GPIOD, GPIO_PIN_12},
  { GPIOD, GPIO_PIN_13},
  { GPIOD, GPIO_PIN_14},
  { GPIOD, GPIO_PIN_15},
  { GPIOE, GPIO_PIN_0 },
  { GPIOE, GPIO_PIN_1 },
  { GPIOE, GPIO_PIN_2 },
  { GPIOE, GPIO_PIN_3 },
  { GPIOE, GPIO_PIN_4 },
  { GPIOE, GPIO_PIN_5 },
  { GPIOE, GPIO_PIN_6 },
  { GPIOE, GPIO_PIN_7 },
  { GPIOE, GPIO_PIN_8 },
  { GPIOE, GPIO_PIN_9 },
  { GPIOE, GPIO_PIN_10},
  { GPIOE, GPIO_PIN_11},
  { GPIOE, GPIO_PIN_12},
  { GPIOE, GPIO_PIN_13},
  { GPIOE, GPIO_PIN_14},
  { GPIOE, GPIO_PIN_15},
  { GPIOF, GPIO_PIN_0 },
  { GPIOF, GPIO_PIN_1 },
  { GPIOF, GPIO_PIN_2 },
  { GPIOF, GPIO_PIN_3 },
  { GPIOF, GPIO_PIN_4 },
  { GPIOF, GPIO_PIN_5 },
  { GPIOF, GPIO_PIN_6 },
  { GPIOF, GPIO_PIN_7 },
  { GPIOF, GPIO_PIN_8 },
  { GPIOF, GPIO_PIN_9 },
  { GPIOF, GPIO_PIN_10},
  { GPIOF, GPIO_PIN_11},
  { GPIOF, GPIO_PIN_12},
  { GPIOF, GPIO_PIN_13},
  { GPIOF, GPIO_PIN_14},
  { GPIOF, GPIO_PIN_15},
  { GPIOG, GPIO_PIN_0 },
  { GPIOG, GPIO_PIN_1 },
  { GPIOG, GPIO_PIN_2 },
  { GPIOG, GPIO_PIN_3 },
  { GPIOG, GPIO_PIN_4 },
  { GPIOG, GPIO_PIN_5 },
  { GPIOG, GPIO_PIN_6 },
  { GPIOG, GPIO_PIN_7 },
  { GPIOG, GPIO_PIN_8 },
  { GPIOG, GPIO_PIN_9 },
  { GPIOG, GPIO_PIN_10},
  { GPIOG, GPIO_PIN_11},
  { GPIOG, GPIO_PIN_12},
  { GPIOG, GPIO_PIN_13},
  { GPIOG, GPIO_PIN_14},
  { GPIOG, GPIO_PIN_15},
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB2 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB8 ,
   PB9 ,
   PB10,
   PB11,
   PB12,
   PB13,
   PB14,
   PB15,
   PC0 ,
   PC1 ,
   PC2 ,
   PC3 ,
   PC4 ,
   PC5 ,
   PC6 ,
   PC7 ,
   PC8 ,
   PC9 ,
   PC10,
   PC11,
   PC12,
   PC13,
   PC14,
   PC15,
   PD0 ,
   PD1 ,
   PD2 ,
   PD3 ,
   PD4 ,
   PD5 ,
   PD6 ,
   PD7 ,
   PD8 ,
   PD9 ,
   PD10,
   PD11,
   PD12,
   PD13,
   PD14,
   PD15,
   PE0 ,
   PE1 ,
   PE2 ,
   PE3 ,
   PE4 ,
   PE5 ,
   PE6 ,
   PE7 ,
   PE8 ,
   PE9 ,
   PE10,
   PE11,
   PE12,
   PE13,
   PE14,
   PE15,
   PF0 ,
   PF1 ,
   PF2 ,
   PF3 ,
   PF4 ,
   PF5 ,
   PF6 ,
   PF7 ,
   PF8 ,
   PF9 ,
   PF10,
   PF11,
   PF12,
   PF13,
   PF14,
   PF15,
   PG0 ,
   PG1 ,
   PG2 ,
   PG3 ,
   PG4 ,
   PG5 ,
   PG6 ,
   PG7 ,
   PG8 ,
   PG9 ,
   PG10,
   PG11,
   PG12,
   PG13,
   PG14,
   PG15,
NUM_PINS,
};
*/
static void AF_NO_REMAP (void) { }
static void AF__HAL_AFIO_REMAP_CAN1_2(void) { __HAL_AFIO_REMAP_CAN1_2(); }
static void AF__HAL_AFIO_REMAP_CAN1_3(void) { __HAL_AFIO_REMAP_CAN1_3(); }
static void AF__HAL_AFIO_REMAP_CAN_DISABLE(void) { __HAL_AFIO_REMAP_CAN_DISABLE(); }
static void AF__HAL_AFIO_REMAP_I2C1_DISABLE(void) { __HAL_AFIO_REMAP_I2C1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_I2C1_ENABLE(void) { __HAL_AFIO_REMAP_I2C1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_I2S3_DISABLE(void) { __HAL_AFIO_REMAP_I2S3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_DISABLE(void) { __HAL_AFIO_REMAP_SPI1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_ENABLE(void) { __HAL_AFIO_REMAP_SPI1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_SPI3_DISABLE(void) { __HAL_AFIO_REMAP_SPI3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI3_ENABLE(void) { __HAL_AFIO_REMAP_SPI3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM10_DISABLE(void) { __HAL_AFIO_REMAP_TIM10_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM10_ENABLE(void) { __HAL_AFIO_REMAP_TIM10_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM11_DISABLE(void) { __HAL_AFIO_REMAP_TIM11_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM11_ENABLE(void) { __HAL_AFIO_REMAP_TIM11_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM13_DISABLE(void) { __HAL_AFIO_REMAP_TIM13_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM13_ENABLE(void) { __HAL_AFIO_REMAP_TIM13_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM14_DISABLE(void) { __HAL_AFIO_REMAP_TIM14_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM14_ENABLE(void) { __HAL_AFIO_REMAP_TIM14_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_DISABLE(void) { __HAL_AFIO_REMAP_TIM1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_ENABLE(void) { __HAL_AFIO_REMAP_TIM1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_PARTIAL(void) { __HAL_AFIO_REMAP_TIM1_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_TIM2_DISABLE(void) { __HAL_AFIO_REMAP_TIM2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_1(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_1(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_2(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_2(); }
static void AF__HAL_AFIO_REMAP_TIM3_DISABLE(void) { __HAL_AFIO_REMAP_TIM3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_ENABLE(void) { __HAL_AFIO_REMAP_TIM3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_PARTIAL(void) { __HAL_AFIO_REMAP_TIM3_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_TIM4_DISABLE(void) { __HAL_AFIO_REMAP_TIM4_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM4_ENABLE(void) { __HAL_AFIO_REMAP_TIM4_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM9_DISABLE(void) { __HAL_AFIO_REMAP_TIM9_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM9_ENABLE(void) { __HAL_AFIO_REMAP_TIM9_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART1_DISABLE(void) { __HAL_AFIO_REMAP_USART1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART1_ENABLE(void) { __HAL_AFIO_REMAP_USART1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_DISABLE(void) { __HAL_AFIO_REMAP_USART2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_ENABLE(void) { __HAL_AFIO_REMAP_USART2_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_DISABLE(void) { __HAL_AFIO_REMAP_USART3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_ENABLE(void) { __HAL_AFIO_REMAP_USART3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_PARTIAL(void) { __HAL_AFIO_REMAP_USART3_PARTIAL(); }

const alternate_pin_type alternate_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_I2C1_DISABLE}, 
    { I2C1  , GPIOB, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_I2C1_ENABLE}, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , AF_NO_REMAP    }, 
}; 

const alternate_pin_type alternate_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_I2C1_DISABLE}, 
    { I2C1  , GPIOB, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_I2C1_ENABLE}, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , AF_NO_REMAP    }, 
}; 

const alternate_pin_type alternate_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , AF_NO_REMAP    }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_SPI3_DISABLE}, 
    { SPI3  , GPIOC, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_SPI3_ENABLE}, 
}; 

const alternate_pin_type alternate_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , AF_NO_REMAP    }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI3_DISABLE}, 
    { SPI3  , GPIOC, GPIO_PIN_12 , AF__HAL_AFIO_REMAP_SPI3_ENABLE}, 
}; 

const alternate_pin_type alternate_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_13 , AF_NO_REMAP    }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_SPI3_DISABLE}, 
    { SPI3  , GPIOC, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_SPI3_ENABLE}, 
}; 

const alternate_pin_type alternate_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART1_DISABLE}, 
    { USART1, GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_USART1_ENABLE}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_USART2_DISABLE}, 
    { USART2, GPIOD, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_USART2_ENABLE}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_USART3_DISABLE}, 
    { USART3, GPIOC, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_USART3_PARTIAL}, 
    { USART3, GPIOD, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_USART3_ENABLE}, 
}; 

const alternate_pin_type alternate_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_USART1_DISABLE}, 
    { USART1, GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_USART1_ENABLE}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , AF__HAL_AFIO_REMAP_USART2_DISABLE}, 
    { USART2, GPIOD, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_USART2_ENABLE}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART3_DISABLE}, 
    { USART3, GPIOC, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART3_PARTIAL}, 
    { USART3, GPIOD, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_USART3_ENABLE}, 
}; 
