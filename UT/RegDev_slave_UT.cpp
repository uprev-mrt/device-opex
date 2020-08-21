#ifdef UNIT_TESTING_ENABLED

extern "C"{

#include "stm8_expander_slave.c"
}


#include <gtest/gtest.h>

void slave_dummy_write( uint8_t addr, uint8_t* data, int len)
{
    io_slave_put( addr);
    for(int i=0; i < len; i++)
    {
        io_slave_put( data[i]);
    }
    io_slave_end_transaction();
}

void slave_dummy_read(uint8_t addr, uint8_t* data, int len)
{
    io_slave_put( addr);
    for(int i=0; i < len; i++)
    {
         data[i] = io_slave_get();
    }
    io_slave_end_transaction();
}


TEST(RegDevice_slave, init )
{
  io_slave_init();

}


TEST(RegDevice_slave, write )
{
    uint16_t data = 0xABCD;
    uint16_t dataComp= 0;
    slave_dummy_write(IO_REG_GPIO_OUT_ADDR, (uint8_t*)&data, 2);

    ASSERT_EQ(REGS.mAddress ,IO_REG_GPIO_OUT_ADDR );
    ASSERT_EQ(REGS.mCursor ,IO_REG_GPIO_OUT_ADDR + 2);

    slave_dummy_read(IO_REG_GPIO_OUT_ADDR,(uint8_t*)&dataComp, 2 );

    ASSERT_EQ(data,dataComp);
}

TEST(RegDevice_slave, read )
{
    uint8_t id = 0;

    slave_dummy_read(IO_REG_WHO_AM_I_ADDR,&id, 1 );
    
    ASSERT_EQ(REGS.mAddress ,IO_REG_WHO_AM_I_ADDR );
    ASSERT_EQ(REGS.mCursor ,IO_REG_WHO_AM_I_ADDR + 1);


    ASSERT_EQ(id,IO_WHO_AM_I_DEFAULT);
}


#endif
