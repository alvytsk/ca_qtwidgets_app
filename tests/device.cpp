
// provides unit testing infrastructure
#include "gtest/gtest.h"

// provides add_integers, subtract_integers
#include "Device.hpp"

std::unique_ptr<entities::Device> dev(new entities::Device("Name 1"));

TEST(Device, Name)
{
  ASSERT_EQ(dev->name(), "Name 1");
}

TEST(Device, Status)
{
  ASSERT_FALSE(dev->status());
}
