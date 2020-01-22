#include "gtest/gtest.h"
#include "Device.hpp"

std::unique_ptr<entities::Device> dev(new entities::Device("Name 1"));

TEST(Device, Name)
{
  ASSERT_EQ(dev->name(), "Name 1");
}

TEST(Device, Status)
{
  dev->setStatus(false);
  ASSERT_FALSE(dev->status());

  dev->setStatus(true);
  ASSERT_TRUE(dev->status());
}
