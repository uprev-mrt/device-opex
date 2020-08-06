/**
  * @file stm8_expander.c
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for stm8_expander device
  *
  */

#include "stm8_expander.h"



/**
 * @brief initializes device
 * @param dev ptr to stm8_expander device
 * @return status 
 */
static mrt_status_t io_init(stm8_expander_t* dev)
{   
    /* Initialize Register Descriptors */
    REG_INIT( dev->mGpioIn , IO_REG_GPIO_IN_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mGpioOut , IO_REG_GPIO_OUT_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc0Val , IO_REG_ADC_0_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc1Val , IO_REG_ADC_1_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc2Val , IO_REG_ADC_2_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc3Val , IO_REG_ADC_3_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc4Val , IO_REG_ADC_4_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mIrqSrc , IO_REG_IRQ_SRC_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mGpio0Cfg , IO_REG_GPIO_0_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio1Cfg , IO_REG_GPIO_1_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio2Cfg , IO_REG_GPIO_2_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio3Cfg , IO_REG_GPIO_3_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio4Cfg , IO_REG_GPIO_4_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio5Cfg , IO_REG_GPIO_5_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio6Cfg , IO_REG_GPIO_6_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio7Cfg , IO_REG_GPIO_7_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio8Cfg , IO_REG_GPIO_8_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio9Cfg , IO_REG_GPIO_9_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio10Cfg , IO_REG_GPIO_10_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio11Cfg , IO_REG_GPIO_11_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mAdc0Cfg , IO_REG_ADC_0_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc1Cfg , IO_REG_ADC_1_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc2Cfg , IO_REG_ADC_2_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc3Cfg , IO_REG_ADC_3_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc4Cfg , IO_REG_ADC_4_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mPwmConfig , IO_REG_PWM_CONFIG_ADDR , uint32_t, REG_PERM_RW , 0x00000000  );
    REG_INIT( dev->mWhoAmI , IO_REG_WHO_AM_I_ADDR , uint8_t, REG_PERM_RW , 0xAB  );
    REG_INIT( dev->mEepromMem , IO_REG_EEPROM_MEM_ADDR , uint8_t, REG_PERM_RW , 0x00  );


    /*user-block-init-start*/
    /*user-block-init-end*/

    return MRT_STATUS_OK;
}


mrt_status_t io_init_i2c(stm8_expander_t* dev, mrt_i2c_handle_t i2c)
{
    mrt_status_t status;

    status = init_i2c_register_device(&dev->mRegDev, i2c, STM8_EXPANDER_I2C_ADDRESS, STM8_EXPANDER_REG_ADDR_SIZE );

    io_init(dev);


    /*user-block-init-i2c-start*/
    /*user-block-init-i2c-end*/
    
    return status;
}
mrt_status_t io_init_spi(stm8_expander_t* dev, mrt_spi_handle_t spi, mrt_gpio_t chipSelect)
{
    mrt_status_t status;

    status = init_spi_register_device(&dev->mRegDev, spi, chipSelect, STM8_EXPANDER_REG_ADDR_SIZE );

    io_init(dev);

    /*user-block-spi-start*/
    /*user-block-spi-end*/

    return status;
}

mrt_status_t io_test(stm8_expander_t* dev)
{
    mrt_status_t status = MRT_STATUS_ERROR;
    /*user-block-test-start*/

    /*user-block-test-end*/
    return status;
}


/*user-block-bottom-start*/
/*user-block-bottom-end*/
