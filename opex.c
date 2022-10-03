/**
  * @file opex.c
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for opex device
  *
  */

#include "opex.h"



/**
 * @brief initializes device
 * @param dev ptr to opex device
 * @return status 
 */
static mrt_status_t io_init(opex_t* dev)
{   
    /* Initialize Register Descriptors */
    REG_INIT( dev->mGpioIn , IO_REG_GPIO_IN_ADDR , uint32_t, REG_PERM_R , 0x00000000  );
    REG_INIT( dev->mGpioOut , IO_REG_GPIO_OUT_ADDR , uint32_t, REG_PERM_RW , 0x00000000  );
    REG_INIT( dev->mGpioDdr , IO_REG_GPIO_DDR_ADDR , uint32_t, REG_PERM_R , 0x00000000  );
    REG_INIT( dev->mIrqSrc , IO_REG_IRQ_SRC_ADDR , uint32_t, REG_PERM_R , 0x00000000  );
    REG_INIT( dev->mAdc0Val , IO_REG_ADC_0_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc1Val , IO_REG_ADC_1_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc2Val , IO_REG_ADC_2_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc3Val , IO_REG_ADC_3_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mAdc4Val , IO_REG_ADC_4_VAL_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mPwm0Val , IO_REG_PWM_0_VAL_ADDR , uint16_t, REG_PERM_W , 0x0000  );
    REG_INIT( dev->mPwm1Val , IO_REG_PWM_1_VAL_ADDR , uint16_t, REG_PERM_W , 0x0000  );
    REG_INIT( dev->mPwm2Val , IO_REG_PWM_2_VAL_ADDR , uint16_t, REG_PERM_W , 0x0000  );
    REG_INIT( dev->mPwm3Val , IO_REG_PWM_3_VAL_ADDR , uint16_t, REG_PERM_W , 0x0000  );
    REG_INIT( dev->mPwm4Val , IO_REG_PWM_4_VAL_ADDR , uint16_t, REG_PERM_W , 0x0000  );
    REG_INIT( dev->mPwm5Val , IO_REG_PWM_5_VAL_ADDR , uint16_t, REG_PERM_W , 0x0000  );
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
    REG_INIT( dev->mGpio12Cfg , IO_REG_GPIO_12_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio13Cfg , IO_REG_GPIO_13_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio14Cfg , IO_REG_GPIO_14_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio15Cfg , IO_REG_GPIO_15_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio16Cfg , IO_REG_GPIO_16_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio17Cfg , IO_REG_GPIO_17_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio18Cfg , IO_REG_GPIO_18_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio19Cfg , IO_REG_GPIO_19_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio20Cfg , IO_REG_GPIO_20_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio21Cfg , IO_REG_GPIO_21_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio22Cfg , IO_REG_GPIO_22_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio23Cfg , IO_REG_GPIO_23_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio24Cfg , IO_REG_GPIO_24_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mGpio25Cfg , IO_REG_GPIO_25_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mIrqCfg , IO_REG_IRQ_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc0Cfg , IO_REG_ADC_0_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc1Cfg , IO_REG_ADC_1_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc2Cfg , IO_REG_ADC_2_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc3Cfg , IO_REG_ADC_3_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mAdc4Cfg , IO_REG_ADC_4_CFG_ADDR , uint16_t, REG_PERM_RW , 0x0000  );
    REG_INIT( dev->mPwmConfig , IO_REG_PWM_CONFIG_ADDR , uint32_t, REG_PERM_RW , 0x00000000  );
    REG_INIT( dev->mWhoAmI , IO_REG_WHO_AM_I_ADDR , uint8_t, REG_PERM_RW , 0xAB  );
    REG_INIT( dev->mVersion , IO_REG_VERSION_ADDR , uint32_t, REG_PERM_RW , 0x00000000  );
    REG_INIT( dev->mEepromMem , IO_REG_EEPROM_MEM_ADDR , uint8_t, REG_PERM_RW , 0x00  );


    /*user-block-init-start*/
    /*user-block-init-end*/

    return MRT_STATUS_OK;
}


mrt_status_t io_init_i2c(opex_t* dev, mrt_i2c_handle_t i2c)
{
    mrt_status_t status;

    status = init_i2c_register_device(&dev->mRegDev, i2c, OPEX_I2C_ADDRESS, OPEX_REG_ADDR_SIZE );

    io_init(dev);


    /*user-block-init-i2c-start*/
    /*user-block-init-i2c-end*/
    
    return status;
}
mrt_status_t io_init_spi(opex_t* dev, mrt_spi_handle_t spi, mrt_gpio_t chipSelect)
{
    mrt_status_t status;

    status = init_spi_register_device(&dev->mRegDev, spi, chipSelect, OPEX_REG_ADDR_SIZE );

    io_init(dev);

    /*user-block-spi-start*/
    /*user-block-spi-end*/

    return status;
}

mrt_status_t io_test(opex_t* dev)
{
    mrt_status_t status = MRT_STATUS_ERROR;
    /*user-block-test-start*/

    /*user-block-test-end*/
    return status;
}


/*user-block-bottom-start*/

mrt_status_t io_cfg_gpio(opex_t* dev, uint8_t gpio, io_gpio_cfg_t* cfg)
{

    mrt_reg_t* reg = &dev->mGpio0Cfg;

    switch (gpio)
    {
        case 0: 
			reg = &dev->mGpio0Cfg;
			break;
        case 1: 
			reg = &dev->mGpio1Cfg;
			break;
        case 2: 
			reg = &dev->mGpio2Cfg;
			break;
        case 3: 
			reg = &dev->mGpio3Cfg;
			break;
        case 4: 
			reg = &dev->mGpio4Cfg;
			break;
        case 5: 
			reg = &dev->mGpio5Cfg;
			break;
        case 6: 
			reg = &dev->mGpio6Cfg;
			break;
        case 7: 
			reg = &dev->mGpio7Cfg;
			break;
        case 8: 
			reg = &dev->mGpio8Cfg;
			break;
        case 9: 
			reg = &dev->mGpio9Cfg;
			break;
        case 10: 
			reg = &dev->mGpio10Cfg;
			break;
        case 11: 
			reg = &dev->mGpio11Cfg;
			break;
        case 12: 
			reg = &dev->mGpio12Cfg;
			break;
        case 13: 
			reg = &dev->mGpio13Cfg;
			break;
        case 14: 
			reg = &dev->mGpio14Cfg;
			break;
        case 15: 
			reg = &dev->mGpio15Cfg;
			break;
        case 16: 
			reg = &dev->mGpio16Cfg;
			break;
        case 17: 
			reg = &dev->mGpio17Cfg;
			break;
        case 18: 
			reg = &dev->mGpio18Cfg;
			break;
        case 19: 
			reg = &dev->mGpio19Cfg;
			break;
        case 20: 
			reg = &dev->mGpio20Cfg;
			break;
        case 21: 
			reg = &dev->mGpio21Cfg;
			break;
        case 22: 
			reg = &dev->mGpio22Cfg;
			break;
        case 23: 
			reg = &dev->mGpio23Cfg;
			break;
        case 24: 
			reg = &dev->mGpio24Cfg;
			break;
        case 25: 
			reg = &dev->mGpio25Cfg;
			break;
    }


   return io_write_reg(dev, reg, &cfg->mReg); 
}

mrt_status_t io_set_gpio(opex_t* dev, uint8_t gpio, uint8_t val)
{

    uint32_t prevVal = dev->mGpioOut.mCache; //Output should only change when we set it, so cache should always be valid

    if(val)
    {
        prevVal |= 1 << gpio;
    }
    else 
    {
        prevVal &= ~(1 << gpio);
    }

    return io_write_reg(dev, &dev->mGpioOut, &prevVal); 
}

uint8_t io_get_gpio(opex_t* dev, uint8_t gpio, uint8_t val)
{
    uint32_t val = io_read_reg(dev, &dev->mGpioIn);

    return (1 >> gpio) & 1;
}
/*user-block-bottom-end*/