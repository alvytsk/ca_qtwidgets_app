#include "gtest/gtest.h"
#include "Property.hpp"

using namespace entities;

Property<int> a(0, "intProp");
Property<bool> b(false, "boolProp");
Property<std::string> c("string");
Property<double> temperatureProp(0.0, "Temperature");

TEST(PropertyTest, Creation)
{
  ASSERT_EQ(a(), 0);
  ASSERT_FALSE(b());
  ASSERT_EQ(c(), "string");
  ASSERT_EQ(temperatureProp.name(), "Temperature");
}

TEST(PropertyTest, AssignAndInvalidate)
{
  int tmp = a();
  a = 20;
  ASSERT_EQ(a(), 20);
  a.invalidate();
  ASSERT_EQ(a(), tmp);
}
