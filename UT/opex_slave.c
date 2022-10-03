/**
  * @file opex_slave.c
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for opex device
  *
  */

#include "opex_slave.h"

opex_slave_t REGS; 

uint8_t* DATA = (uint8_t*)&REGS.mData;


static void go_to_register(addr_t addr)
{   
    addr_t i;
    REGS.mCurrentReg = 0;
    REGS.mCursor =  addr; 

    for( i = 0; i < OPEX_REG_COUNT; i++)
    {
        if( addr < REGS.mRegs[i+1].mAddr)
        {
            REGS.mCurrentReg = &REGS.mRegs[i];     //Set current reg
        }
    }
}

static void slave_reg_init(slave_reg_t* reg, addr_t addr, addr_t size, uint8_t flags)
{
    reg->mAddr = addr;
    reg->mSize = size;
    reg->mFlags = flags;
}


/**
 * @brief initializes opex slave registers
 */
void io_slave_init( )
{

    /*gen-block-init-start*/

    slave_reg_init(&REGS.mRegs[0],0,4, SLAVE_REG_PERM_R ); //GPIO_IN
    slave_reg_init(&REGS.mRegs[1],4,4, SLAVE_REG_PERM_RW ); //GPIO_OUT
    slave_reg_init(&REGS.mRegs[2],8,4, SLAVE_REG_PERM_R ); //GPIO_DDR
    slave_reg_init(&REGS.mRegs[3],12,4, SLAVE_REG_PERM_R ); //IRQ_SRC
    slave_reg_init(&REGS.mRegs[4],16,2, SLAVE_REG_PERM_R ); //ADC_0_VAL
    slave_reg_init(&REGS.mRegs[5],18,2, SLAVE_REG_PERM_R ); //ADC_1_VAL
    slave_reg_init(&REGS.mRegs[6],20,2, SLAVE_REG_PERM_R ); //ADC_2_VAL
    slave_reg_init(&REGS.mRegs[7],22,2, SLAVE_REG_PERM_R ); //ADC_3_VAL
    slave_reg_init(&REGS.mRegs[8],24,2, SLAVE_REG_PERM_R ); //ADC_4_VAL
    slave_reg_init(&REGS.mRegs[9],26,2, SLAVE_REG_PERM_W ); //PWM_0_VAL
    slave_reg_init(&REGS.mRegs[10],28,2, SLAVE_REG_PERM_W ); //PWM_1_VAL
    slave_reg_init(&REGS.mRegs[11],30,2, SLAVE_REG_PERM_W ); //PWM_2_VAL
    slave_reg_init(&REGS.mRegs[12],32,2, SLAVE_REG_PERM_W ); //PWM_3_VAL
    slave_reg_init(&REGS.mRegs[13],34,2, SLAVE_REG_PERM_W ); //PWM_4_VAL
    slave_reg_init(&REGS.mRegs[14],36,2, SLAVE_REG_PERM_W ); //PWM_5_VAL
    slave_reg_init(&REGS.mRegs[15],38,1, SLAVE_REG_PERM_RW ); //GPIO_0_CFG
    slave_reg_init(&REGS.mRegs[16],39,1, SLAVE_REG_PERM_RW ); //GPIO_1_CFG
    slave_reg_init(&REGS.mRegs[17],40,1, SLAVE_REG_PERM_RW ); //GPIO_2_CFG
    slave_reg_init(&REGS.mRegs[18],41,1, SLAVE_REG_PERM_RW ); //GPIO_3_CFG
    slave_reg_init(&REGS.mRegs[19],42,1, SLAVE_REG_PERM_RW ); //GPIO_4_CFG
    slave_reg_init(&REGS.mRegs[20],43,1, SLAVE_REG_PERM_RW ); //GPIO_5_CFG
    slave_reg_init(&REGS.mRegs[21],44,1, SLAVE_REG_PERM_RW ); //GPIO_6_CFG
    slave_reg_init(&REGS.mRegs[22],45,1, SLAVE_REG_PERM_RW ); //GPIO_7_CFG
    slave_reg_init(&REGS.mRegs[23],46,1, SLAVE_REG_PERM_RW ); //GPIO_8_CFG
    slave_reg_init(&REGS.mRegs[24],47,1, SLAVE_REG_PERM_RW ); //GPIO_9_CFG
    slave_reg_init(&REGS.mRegs[25],48,1, SLAVE_REG_PERM_RW ); //GPIO_10_CFG
    slave_reg_init(&REGS.mRegs[26],49,1, SLAVE_REG_PERM_RW ); //GPIO_11_CFG
    slave_reg_init(&REGS.mRegs[27],50,1, SLAVE_REG_PERM_RW ); //GPIO_12_CFG
    slave_reg_init(&REGS.mRegs[28],51,1, SLAVE_REG_PERM_RW ); //GPIO_13_CFG
    slave_reg_init(&REGS.mRegs[29],52,1, SLAVE_REG_PERM_RW ); //GPIO_14_CFG
    slave_reg_init(&REGS.mRegs[30],53,1, SLAVE_REG_PERM_RW ); //GPIO_15_CFG
    slave_reg_init(&REGS.mRegs[31],54,1, SLAVE_REG_PERM_RW ); //GPIO_16_CFG
    slave_reg_init(&REGS.mRegs[32],55,1, SLAVE_REG_PERM_RW ); //GPIO_17_CFG
    slave_reg_init(&REGS.mRegs[33],56,1, SLAVE_REG_PERM_RW ); //GPIO_18_CFG
    slave_reg_init(&REGS.mRegs[34],57,1, SLAVE_REG_PERM_RW ); //GPIO_19_CFG
    slave_reg_init(&REGS.mRegs[35],58,1, SLAVE_REG_PERM_RW ); //GPIO_20_CFG
    slave_reg_init(&REGS.mRegs[36],59,1, SLAVE_REG_PERM_RW ); //GPIO_21_CFG
    slave_reg_init(&REGS.mRegs[37],60,1, SLAVE_REG_PERM_RW ); //GPIO_22_CFG
    slave_reg_init(&REGS.mRegs[38],61,1, SLAVE_REG_PERM_RW ); //GPIO_23_CFG
    slave_reg_init(&REGS.mRegs[39],62,1, SLAVE_REG_PERM_RW ); //GPIO_24_CFG
    slave_reg_init(&REGS.mRegs[40],63,1, SLAVE_REG_PERM_RW ); //GPIO_25_CFG
    slave_reg_init(&REGS.mRegs[41],64,2, SLAVE_REG_PERM_RW ); //IRQ_CFG
    slave_reg_init(&REGS.mRegs[42],66,2, SLAVE_REG_PERM_RW ); //ADC_0_CFG
    slave_reg_init(&REGS.mRegs[43],68,2, SLAVE_REG_PERM_RW ); //ADC_1_CFG
    slave_reg_init(&REGS.mRegs[44],70,2, SLAVE_REG_PERM_RW ); //ADC_2_CFG
    slave_reg_init(&REGS.mRegs[45],72,2, SLAVE_REG_PERM_RW ); //ADC_3_CFG
    slave_reg_init(&REGS.mRegs[46],74,2, SLAVE_REG_PERM_RW ); //ADC_4_CFG
    slave_reg_init(&REGS.mRegs[47],76,4, SLAVE_REG_PERM_RW ); //PWM_CONFIG
    slave_reg_init(&REGS.mRegs[48],80,1, SLAVE_REG_PERM_RW ); //WHO_AM_I
    REGS.mData.mWhoAmI = IO_WHO_AM_I_DEFAULT                                       ; 
    slave_reg_init(&REGS.mRegs[49],81,4, SLAVE_REG_PERM_RW ); //VERSION
    slave_reg_init(&REGS.mRegs[50],112,1, SLAVE_REG_PERM_RW ); //EEPROM_MEM

    /*gen-block-init-end*/

    REGS.mCurrentReg = 0;
    REGS.mCursor = 0;
    REGS.mAddrBytes = 0;
    REGS.mState = SLAVE_STATE_ADDRESS;
    REGS.mFlags = 0;
}


/**
 * @brief feed byte into fifo
 * @param dev ptr to opex device
 * @param data byte to feed 
 */
void io_slave_put( uint8_t data )
{
    switch (REGS.mState)
    {
        case SLAVE_STATE_ADDRESS:
            REGS.mAddress = (REGS.mAddress << 8) | data;
            REGS.mAddrBytes++;
            if(REGS.mAddrBytes == OPEX_REG_ADDR_SIZE)
            {
                go_to_register(REGS.mAddress);
                REGS.mState = SLAVE_STATE_DATA;
            }
            break;
        case SLAVE_STATE_DATA:
             if(REGS.mCurrentReg->mFlags & SLAVE_REG_PERM_W)
            {
                DATA[REGS.mCursor] = data;
                REGS.mCurrentReg->mFlags |= SLAVE_REG_ACESS_W;
                REGS.mCursor++;
                if(REGS.mCursor == REGS.mCurrentReg->mAddr + REGS.mCurrentReg->mSize)
                {
                    REGS.mCurrentReg->mFlags |= SLAVE_REG_ACESS_W_COMPLETE;  //mark that register write is complete
                    REGS.mFlags |= SLAVE_REG_ACESS_W;                        //Mark that a register has been written
                    io_slave_handle_write( REGS.mCurrentReg);
                    go_to_register(REGS.mCursor);

                }
            }
        default:

            break;
    }
}

uint8_t io_slave_get(void)
{
     if(REGS.mCurrentReg->mFlags & SLAVE_REG_PERM_R)
     {
        REGS.mCurrentReg->mFlags |= SLAVE_REG_ACESS_R;   //Mark as Read
        REGS.mFlags |= SLAVE_REG_ACESS_R;
        return DATA[REGS.mCursor++];                   //Return data
     }
    
     return 0;
}

void io_slave_end_transaction(void)
{
    REGS.mState = SLAVE_STATE_ADDRESS;
    REGS.mAddrBytes = 0;
}



void io_slave_handle_write( slave_reg_t* reg)
{

    switch(reg->mAddr)
    {
        case IO_REG_GPIO_OUT_ADDR                                      :
            break;
        case IO_REG_PWM_0_VAL_ADDR                                     :
            break;
        case IO_REG_PWM_1_VAL_ADDR                                     :
            break;
        case IO_REG_PWM_2_VAL_ADDR                                     :
            break;
        case IO_REG_PWM_3_VAL_ADDR                                     :
            break;
        case IO_REG_PWM_4_VAL_ADDR                                     :
            break;
        case IO_REG_PWM_5_VAL_ADDR                                     :
            break;
        case IO_REG_GPIO_0_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_1_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_2_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_3_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_4_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_5_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_6_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_7_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_8_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_9_CFG_ADDR                                    :
            break;
        case IO_REG_GPIO_10_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_11_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_12_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_13_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_14_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_15_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_16_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_17_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_18_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_19_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_20_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_21_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_22_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_23_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_24_CFG_ADDR                                   :
            break;
        case IO_REG_GPIO_25_CFG_ADDR                                   :
            break;
        case IO_REG_IRQ_CFG_ADDR                                       :
            break;
        case IO_REG_ADC_0_CFG_ADDR                                     :
            break;
        case IO_REG_ADC_1_CFG_ADDR                                     :
            break;
        case IO_REG_ADC_2_CFG_ADDR                                     :
            break;
        case IO_REG_ADC_3_CFG_ADDR                                     :
            break;
        case IO_REG_ADC_4_CFG_ADDR                                     :
            break;
        case IO_REG_PWM_CONFIG_ADDR                                    :
            break;
        case IO_REG_WHO_AM_I_ADDR                                      :
            break;
        case IO_REG_VERSION_ADDR                                       :
            break;
        case IO_REG_EEPROM_MEM_ADDR                                    :
            break;
    }

}