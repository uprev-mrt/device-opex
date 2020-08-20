/**
  * @file stm8_expander_slave.c
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for stm8_expander device
  *
  */

#include "stm8_expander_slave.h"

stm8_expander_slave_t REGS; 

uint8_t* DATA = (uint8_t*)&REGS.mData;


static void go_to_register(addr_t addr)
{   
    addr_t i;
    REGS.mCurrentReg = 0;
    REGS.mCursor =  addr; 

    for( i = 0; i < STM8_EXPANDER_REG_COUNT; i++)
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
 * @brief initializes stm8_expander slave registers
 * @param fifoDepth size of rxFifo to use
 */
void io_slave_init( )
{
    slave_reg_init(&REGS.mRegs[0],2,2, SLAVE_REG_PERM_R ); //GPIO_IN
    slave_reg_init(&REGS.mRegs[1],4,2, SLAVE_REG_PERM_RW ); //GPIO_OUT
    slave_reg_init(&REGS.mRegs[2],6,2, SLAVE_REG_PERM_R ); //ADC_0_VAL
    slave_reg_init(&REGS.mRegs[3],8,2, SLAVE_REG_PERM_R ); //ADC_1_VAL
    slave_reg_init(&REGS.mRegs[4],10,2, SLAVE_REG_PERM_R ); //ADC_2_VAL
    slave_reg_init(&REGS.mRegs[5],12,2, SLAVE_REG_PERM_R ); //ADC_3_VAL
    slave_reg_init(&REGS.mRegs[6],14,2, SLAVE_REG_PERM_R ); //ADC_4_VAL
    slave_reg_init(&REGS.mRegs[7],16,2, SLAVE_REG_PERM_R ); //IRQ_SRC
    slave_reg_init(&REGS.mRegs[8],17,1, SLAVE_REG_PERM_RW ); //GPIO_0_CFG
    slave_reg_init(&REGS.mRegs[9],18,1, SLAVE_REG_PERM_RW ); //GPIO_1_CFG
    slave_reg_init(&REGS.mRegs[10],19,1, SLAVE_REG_PERM_RW ); //GPIO_2_CFG
    slave_reg_init(&REGS.mRegs[11],20,1, SLAVE_REG_PERM_RW ); //GPIO_3_CFG
    slave_reg_init(&REGS.mRegs[12],21,1, SLAVE_REG_PERM_RW ); //GPIO_4_CFG
    slave_reg_init(&REGS.mRegs[13],22,1, SLAVE_REG_PERM_RW ); //GPIO_5_CFG
    slave_reg_init(&REGS.mRegs[14],23,1, SLAVE_REG_PERM_RW ); //GPIO_6_CFG
    slave_reg_init(&REGS.mRegs[15],24,1, SLAVE_REG_PERM_RW ); //GPIO_7_CFG
    slave_reg_init(&REGS.mRegs[16],25,1, SLAVE_REG_PERM_RW ); //GPIO_8_CFG
    slave_reg_init(&REGS.mRegs[17],26,1, SLAVE_REG_PERM_RW ); //GPIO_9_CFG
    slave_reg_init(&REGS.mRegs[18],27,1, SLAVE_REG_PERM_RW ); //GPIO_10_CFG
    slave_reg_init(&REGS.mRegs[19],28,1, SLAVE_REG_PERM_RW ); //GPIO_11_CFG
    slave_reg_init(&REGS.mRegs[20],30,2, SLAVE_REG_PERM_RW ); //ADC_0_CFG
    slave_reg_init(&REGS.mRegs[21],32,2, SLAVE_REG_PERM_RW ); //ADC_1_CFG
    slave_reg_init(&REGS.mRegs[22],34,2, SLAVE_REG_PERM_RW ); //ADC_2_CFG
    slave_reg_init(&REGS.mRegs[23],36,2, SLAVE_REG_PERM_RW ); //ADC_3_CFG
    slave_reg_init(&REGS.mRegs[24],38,2, SLAVE_REG_PERM_RW ); //ADC_4_CFG
    slave_reg_init(&REGS.mRegs[25],42,4, SLAVE_REG_PERM_RW ); //PWM_CONFIG
    slave_reg_init(&REGS.mRegs[26],43,1, SLAVE_REG_PERM_RW ); //WHO_AM_I
    REGS.mData.mWhoAmI = IO_WHO_AM_I_DEFAULT                                       ; 
    slave_reg_init(&REGS.mRegs[27],44,1, SLAVE_REG_PERM_RW ); //EEPROM_MEM

    REGS.mCurrentReg = 0;
    REGS.mCursor = 0;
    REGS.mAddrBytes = 0;
    REGS.mState = SLAVE_STATE_ADDRESS;
    REGS.mFlags = 0;
}

/**
 * @brief feed byte into fifo
 * @param dev ptr to stm8_expander device
 * @param data byte to feed 
 */
void io_slave_put( uint8_t data )
{
    switch (REGS.mState)
    {
        case SLAVE_STATE_ADDRESS:
            REGS.mAddress = (REGS.mAddress << 8) | data;
            REGS.mAddrBytes++;
            if(REGS.mAddrBytes == STM8_EXPANDER_REG_ADDR_SIZE)
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
                REGS.mFlags |= SLAVE_REG_ACESS_W;
                REGS.mCursor++;
                if(REGS.mCursor == REGS.mCurrentReg->mAddr + REGS.mCurrentReg->mSize)
                {
                    REGS.mCurrentReg += sizeof(slave_reg_t);
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


/*user-block-bottom-start*/
/*user-block-bottom-end*/
