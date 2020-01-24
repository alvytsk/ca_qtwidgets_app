#include "gtest/gtest.h"
#include "Property.hpp"

using namespace entities;

Property<int> a(0);
Property<bool> b(false);
Property<std::string> c("string");
Property<double> temperatureProp(0, "Temperature");

TEST(PropertyTest, Creation)
{
  ASSERT_EQ(a.get(), 0);
  ASSERT_FALSE(b.get());
  ASSERT_EQ(c.get(), "string");
  ASSERT_EQ(temperatureProp.name(), "Temperature");
}

TEST(PropertyTest, Assign)
{
  a = 20;
  ASSERT_EQ(a.get(), 20);
}
