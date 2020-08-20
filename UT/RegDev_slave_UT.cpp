#ifdef UNIT_TESTING_ENABLED

extern "C"{

#include "stm8_expander_slave.c"
}


#include <gtest/gtest.h>


TEST(RegDevice_slave, init )
{
  io_slave_init();

}


TEST(RegDevice_slave, write )
{
    io_slave_put( IO_REG_GPIO_OUT_ADDR);
    io_slave_put(0xAB);
    io_slave_put(0xCD);

    ASSERT_EQ(REGS.mAddress ,IO_REG_GPIO_OUT_ADDR);
    ASSERT_EQ(REGS.mCursor ,IO_REG_GPIO_OUT_ADDR);

    uint8_t data = io_slave_get();

    ASSERT_EQ(data,0xAB);
}

TEST(RegDevice_slave, read )
{
    io_slave_put( IO_REG_WHO_AM_I_ADDR);

    ASSERT_EQ(REGS.mAddress ,IO_REG_WHO_AM_I_ADDR);
    ASSERT_EQ(REGS.mCursor ,IO_REG_WHO_AM_I_ADDR);

    uint8_t id = io_slave_get();

    ASSERT_EQ(id,IO_WHO_AM_I_DEFAULT);
}


#endif
