#include "gtest/gtest.h"
#include "Device.hpp"

// std::unique_ptr<entities::Device> dev(new entities::Device("Name 1"));

class DeviceTest : public ::testing::Test
{
protected:
  entities::Device *dev;

  void SetUp()
  {
    dev = new entities::Device("Name 1");
  }
  void TearDown()
  {
    delete dev;
  }
};

TEST_F(DeviceTest, Name)
{
  ASSERT_EQ(dev->name(), "Name 1");
}

TEST_F(DeviceTest, Status)
{
  ASSERT_EQ(dev->status(), Status::Undefined);

  dev->setStatus(Status::NonFatalFailure);
  ASSERT_EQ(dev->status(), Status::NonFatalFailure);

  dev->setStatus(Status::Normal);
  ASSERT_EQ(dev->status(), Status::Normal);
}
