#include "gtest/gtest.h"
#include "Property.hpp"

using namespace entities;

Property<int> a(0);
Property<bool> b(false);
Property<std::string> c("string");

TEST(Property, Creation)
{
  ASSERT_EQ(a.get(), 0);
  ASSERT_FALSE(b.get());
  ASSERT_EQ(c.get(), "string");
}

TEST(Property, Assign)
{
  a = 20;
  ASSERT_EQ(a.get(), 20);
}
