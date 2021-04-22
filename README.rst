
stm8_expander
=============

- Generated with `MrT Device Utility <https://github.com/uprev-mrt/mrtutils/wiki/mrt-device>`_
- Bus:  I2C, SPI
- RegMap: `Register Map <Regmap.html>`_
- Datasheet: `https://www.st.com/resou... <https://www.st.com/resource/en/datasheet/stm8s003f3.pdf>`_
- DigiKey: `497-18052-2-ND <https://www.digikey.com/products/en?KeyWords=497-18052-2-ND>`_
- I2C Address: 0x42


Description
-----------

Driver for STM8 running custom GPIO expander firmware

.. *user-block-description-start*

.. *user-block-description-end*





Register Map
------------

=================     ================     ================     ================     ================     ================
Name                    Address             Type                  Access              Default               Description
=================     ================     ================     ================     ================     ================
GPIO_IN_               0x00                 uint16               R                    0x0000               Input values for gpio 0-15
GPIO_OUT_              0x02                 uint16               RW                   0x0000               Output values for gpio 0-15
ADC_0_VAL_             0x04                 uint16               R                    0x0000               Output of ADC 0      
ADC_1_VAL_             0x06                 uint16               R                    0x0000               Output of ADC 1      
ADC_2_VAL_             0x08                 uint16               R                    0x0000               Output of ADC 2      
ADC_3_VAL_             0x0A                 uint16               R                    0x0000               Output of ADC 3      
ADC_4_VAL_             0x0C                 uint16               R                    0x0000               Output of ADC 4      
IRQ_SRC_               0x0E                 uint16               R                    0x0000               latching Interrupt source mask
GPIO_0_CFG_            0x10                 uint8                RW                   0x00                 Configuration for GPIO 0
GPIO_1_CFG_            0x11                 uint8                RW                   0x00                 Configuration for GPIO 1
GPIO_2_CFG_            0x12                 uint8                RW                   0x00                 Configuration for GPIO 2
GPIO_3_CFG_            0x13                 uint8                RW                   0x00                 Configuration for GPIO 3
GPIO_4_CFG_            0x14                 uint8                RW                   0x00                 Configuration for GPIO 4
GPIO_5_CFG_            0x15                 uint8                RW                   0x00                 Configuration for GPIO 5
GPIO_6_CFG_            0x16                 uint8                RW                   0x00                 Configuration for GPIO 6
GPIO_7_CFG_            0x17                 uint8                RW                   0x00                 Configuration for GPIO 7
GPIO_8_CFG_            0x18                 uint8                RW                   0x00                 Configuration for GPIO 8
GPIO_9_CFG_            0x19                 uint8                RW                   0x00                 Configuration for GPIO 9
GPIO_10_CFG_           0x1A                 uint8                RW                   0x00                 Configuration for GPIO 10
GPIO_11_CFG_           0x1B                 uint8                RW                   0x00                 Configuration for GPIO 11
ADC_0_CFG_             0x1C                 uint16               RW                   0x0000               Configuration for ADC 0
ADC_1_CFG_             0x1E                 uint16               RW                   0x0000               Configuration for ADC 1
ADC_2_CFG_             0x20                 uint16               RW                   0x0000               Configuration for ADC 2
ADC_3_CFG_             0x22                 uint16               RW                   0x0000               Configuration for ADC 3
ADC_4_CFG_             0x24                 uint16               RW                   0x0000               Configuration for ADC 4
PWM_CONFIG_            0x26                 uint32               RW                   0x00000000           Configuration for PWM
WHO_AM_I_              0x2A                 uint8                RW                   0xAB                 Device ID            
EEPROM_MEM_            0x2B                 uint8                RW                   0x00                 Start address of EEPROM memory on stm8. User can read/write up to 128 bytes starting at this address
=================     ================     ================     ================     ================     ================





Registers
=========





----------

.. _GPIO_IN:

GPIO_IN
-------

:Address: **[0x00]**

Input values for gpio 0-15

.. *user-block-gpio_in-start*

.. *user-block-gpio_in-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |15     |14     |13     |12     |11     |10     |9      |8      |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                                                                                                                               |
+------------+-------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:GPIO_IN: Input values for gpio 0-15



----------

.. _GPIO_OUT:

GPIO_OUT
--------

:Address: **[0x02]**

Output values for gpio 0-15

.. *user-block-gpio_out-start*

.. *user-block-gpio_out-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |15      |14      |13      |12      |11      |10      |9       |8       |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+
| **Field**  |                                                                                                                                               |
+------------+-----------------------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:GPIO_OUT: Output values for gpio 0-15



----------

.. _ADC_0_VAL:

ADC_0_VAL
---------

:Address: **[0x04]**

Output of ADC 0

.. *user-block-adc_0_val-start*

.. *user-block-adc_0_val-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |15       |14       |13       |12       |11       |10       |9        |8        |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:ADC_0_VAL: Output of ADC 0



----------

.. _ADC_1_VAL:

ADC_1_VAL
---------

:Address: **[0x06]**

Output of ADC 1

.. *user-block-adc_1_val-start*

.. *user-block-adc_1_val-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |15       |14       |13       |12       |11       |10       |9        |8        |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:ADC_1_VAL: Output of ADC 1



----------

.. _ADC_2_VAL:

ADC_2_VAL
---------

:Address: **[0x08]**

Output of ADC 2

.. *user-block-adc_2_val-start*

.. *user-block-adc_2_val-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |15       |14       |13       |12       |11       |10       |9        |8        |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:ADC_2_VAL: Output of ADC 2



----------

.. _ADC_3_VAL:

ADC_3_VAL
---------

:Address: **[0x0A]**

Output of ADC 3

.. *user-block-adc_3_val-start*

.. *user-block-adc_3_val-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |15       |14       |13       |12       |11       |10       |9        |8        |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:ADC_3_VAL: Output of ADC 3



----------

.. _ADC_4_VAL:

ADC_4_VAL
---------

:Address: **[0x0C]**

Output of ADC 4

.. *user-block-adc_4_val-start*

.. *user-block-adc_4_val-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |15       |14       |13       |12       |11       |10       |9        |8        |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:ADC_4_VAL: Output of ADC 4



----------

.. _IRQ_SRC:

IRQ_SRC
-------

:Address: **[0x0E]**

latching Interrupt source mask

.. *user-block-irq_src-start*

.. *user-block-irq_src-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |15     |14     |13     |12     |11     |10     |9      |8      |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                                                                                                                               |
+------------+-------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:IRQ_SRC: latching Interrupt source mask



----------

.. _GPIO_0_CFG:

GPIO_0_CFG
----------

:Address: **[0x10]**

Configuration for GPIO 0

.. *user-block-gpio_0_cfg-start*

.. *user-block-gpio_0_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_1_CFG:

GPIO_1_CFG
----------

:Address: **[0x11]**

Configuration for GPIO 1

.. *user-block-gpio_1_cfg-start*

.. *user-block-gpio_1_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_2_CFG:

GPIO_2_CFG
----------

:Address: **[0x12]**

Configuration for GPIO 2

.. *user-block-gpio_2_cfg-start*

.. *user-block-gpio_2_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_3_CFG:

GPIO_3_CFG
----------

:Address: **[0x13]**

Configuration for GPIO 3

.. *user-block-gpio_3_cfg-start*

.. *user-block-gpio_3_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_4_CFG:

GPIO_4_CFG
----------

:Address: **[0x14]**

Configuration for GPIO 4

.. *user-block-gpio_4_cfg-start*

.. *user-block-gpio_4_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_5_CFG:

GPIO_5_CFG
----------

:Address: **[0x15]**

Configuration for GPIO 5

.. *user-block-gpio_5_cfg-start*

.. *user-block-gpio_5_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_6_CFG:

GPIO_6_CFG
----------

:Address: **[0x16]**

Configuration for GPIO 6

.. *user-block-gpio_6_cfg-start*

.. *user-block-gpio_6_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_7_CFG:

GPIO_7_CFG
----------

:Address: **[0x17]**

Configuration for GPIO 7

.. *user-block-gpio_7_cfg-start*

.. *user-block-gpio_7_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_8_CFG:

GPIO_8_CFG
----------

:Address: **[0x18]**

Configuration for GPIO 8

.. *user-block-gpio_8_cfg-start*

.. *user-block-gpio_8_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_9_CFG:

GPIO_9_CFG
----------

:Address: **[0x19]**

Configuration for GPIO 9

.. *user-block-gpio_9_cfg-start*

.. *user-block-gpio_9_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_10_CFG:

GPIO_10_CFG
-----------

:Address: **[0x1A]**

Configuration for GPIO 10

.. *user-block-gpio_10_cfg-start*

.. *user-block-gpio_10_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _GPIO_11_CFG:

GPIO_11_CFG
-----------

:Address: **[0x1B]**

Configuration for GPIO 11

.. *user-block-gpio_11_cfg-start*

.. *user-block-gpio_11_cfg-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |PP |IRQ    |ALT        |EN     |
+------------+---+-------+-----------+-------+

Flags
~~~~~

:DIR: Pin Direction
:PP: Enables Push/Pull, Otherwise pin is OpenDrain/floating
:ALT: Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)
:EN: Enables GPIO

Fields
~~~~~~

:IRQ: Interrupt selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _ADC_0_CFG:

ADC_0_CFG
---------

:Address: **[0x1C]**

Configuration for ADC 0

.. *user-block-adc_0_cfg-start*

.. *user-block-adc_0_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |15      |14      |13      |12      |11      |10      |9       |8       |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+
| **Field**  |                                                                                                  |IRQ                       |EN               |
+------------+--------------------------------------------------------------------------------------------------+--------------------------+-----------------+

Flags
~~~~~

:EN: Enables ADC Channel

Fields
~~~~~~

:Treshold: IRQ threshold for ADC channel


:IRQ: Interrupt setting for ADC channel

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _ADC_1_CFG:

ADC_1_CFG
---------

:Address: **[0x1E]**

Configuration for ADC 1

.. *user-block-adc_1_cfg-start*

.. *user-block-adc_1_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |15      |14      |13      |12      |11      |10      |9       |8       |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+
| **Field**  |                                                                                                  |IRQ                       |EN               |
+------------+--------------------------------------------------------------------------------------------------+--------------------------+-----------------+

Flags
~~~~~

:EN: Enables ADC Channel

Fields
~~~~~~

:Treshold: IRQ threshold for ADC channel


:IRQ: Interrupt setting for ADC channel

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _ADC_2_CFG:

ADC_2_CFG
---------

:Address: **[0x20]**

Configuration for ADC 2

.. *user-block-adc_2_cfg-start*

.. *user-block-adc_2_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |15      |14      |13      |12      |11      |10      |9       |8       |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+
| **Field**  |                                                                                                  |IRQ                       |EN               |
+------------+--------------------------------------------------------------------------------------------------+--------------------------+-----------------+

Flags
~~~~~

:EN: Enables ADC Channel

Fields
~~~~~~

:Treshold: IRQ threshold for ADC channel


:IRQ: Interrupt setting for ADC channel

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _ADC_3_CFG:

ADC_3_CFG
---------

:Address: **[0x22]**

Configuration for ADC 3

.. *user-block-adc_3_cfg-start*

.. *user-block-adc_3_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |15      |14      |13      |12      |11      |10      |9       |8       |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+
| **Field**  |                                                                                                  |IRQ                       |EN               |
+------------+--------------------------------------------------------------------------------------------------+--------------------------+-----------------+

Flags
~~~~~

:EN: Enables ADC Channel

Fields
~~~~~~

:Treshold: IRQ threshold for ADC channel


:IRQ: Interrupt setting for ADC channel

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _ADC_4_CFG:

ADC_4_CFG
---------

:Address: **[0x24]**

Configuration for ADC 4

.. *user-block-adc_4_cfg-start*

.. *user-block-adc_4_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |15      |14      |13      |12      |11      |10      |9       |8       |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+
| **Field**  |                                                                                                  |IRQ                       |EN               |
+------------+--------------------------------------------------------------------------------------------------+--------------------------+-----------------+

Flags
~~~~~

:EN: Enables ADC Channel

Fields
~~~~~~

:Treshold: IRQ threshold for ADC channel


:IRQ: Interrupt setting for ADC channel

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
NONE                        b00                     No interrupt
RISING                      b01                     Trigger on Rising
FALLING                     b10                     Trigger on falling
ANY                         b11                     Trigger on any
=====================     ================     ================================================================




----------

.. _PWM_CONFIG:

PWM_CONFIG
----------

:Address: **[0x26]**

Configuration for PWM

.. *user-block-pwm_config-start*

.. *user-block-pwm_config-end*

+------------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+
|Bit         |31        |30        |29        |28        |27        |26        |25        |24        |23        |22        |21        |20        |19        |18        |17        |16        |15        |14        |13        |12        |11        |10        |9         |8         |7         |6         |5         |4         |3         |2         |1         |0         |
+============+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+==========+
| **Field**  |                                                                                                                                                                    |Prescaler                                                                              |CH7_Enable|CH6_Enable|CH5_Enable|CH4_Enable|CH3_Enable|CH2_Enable|CH1_Enable|CH0_Enable           |
+------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------+---------------------------------------------------------------------------------------+----------+----------+----------+----------+----------+----------+----------+---------------------+

Flags
~~~~~

:CH0_Enable: Enables PWM channel 0
:CH1_Enable: Enables PWM channel 1
:CH2_Enable: Enables PWM channel 2
:CH3_Enable: Enables PWM channel 3
:CH4_Enable: Enables PWM channel 4
:CH5_Enable: Enables PWM channel 5
:CH6_Enable: Enables PWM channel 6
:CH7_Enable: Enables PWM channel 7

Fields
~~~~~~

:Period: Period for PWM signals


:Prescaler: Prescaler for PWM, using 16Mhz clock

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
PRESCALER_1                 b0000                   divide clock by 1 (16Mhz)
PRESCALER_2                 b0001                   divide clock by 2 (8Mhz)
PRESCALER_4                 b0010                   divide clock by 4  (4Mhz)
PRESCALER_8                 b0011                   divide clock by 8  (2Mhz)
PRESCALER_16                b0100                   divide clock by 16  (1Mhz)
PRESCALER_32                b0101                   divide clock by 32  (500Khz)
PRESCALER_64                b0110                   divide clock by 64  (250Khz)
PRESCALER_128               b0111                   divide clock by 128 (125Khz)
PRESCALER_256               b1000                   divide clock by 256 (62.5 Khz)
PRESCALER_512               b1001                   divide clock by 512  (31.25 Khz)
PRESCALER_1024              b1010                   divide clock by 1024 (1.5625 KHz)
PRESCALER_2048              b1011                   divide clock by 2048  ()
PRESCALER_4096              b1100                   divide clock by 4096  ()
PRESCALER_8192              b1101                   divide clock by 8192  ()
PRESCALER_16384             b1110                   divide clock by 16384 ()
PRESCALER_32768             b1111                   divide clock by 32768 ()
=====================     ================     ================================================================




----------

.. _WHO_AM_I:

WHO_AM_I
--------

:Address: **[0x2A]**
:Default: **[0xAB]**

Device ID

.. *user-block-who_am_i-start*

.. *user-block-who_am_i-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |                                                                       |
+------------+-----------------------------------------------------------------------+


Fields
~~~~~~

:WHO_AM_I: Device ID



----------

.. _EEPROM_MEM:

EEPROM_MEM
----------

:Address: **[0x2B]**

Start address of EEPROM memory on stm8. User can read/write up to 128 bytes starting at this address

.. *user-block-eeprom_mem-start*

.. *user-block-eeprom_mem-end*

+------------+----------+----------+----------+----------+----------+----------+----------+----------+
|Bit         |7         |6         |5         |4         |3         |2         |1         |0         |
+============+==========+==========+==========+==========+==========+==========+==========+==========+
| **Field**  |EEPROM_MEM                                                                             |
+------------+---------------------------------------------------------------------------------------+


