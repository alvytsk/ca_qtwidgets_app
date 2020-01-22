#include "gtest/gtest.h"
#include "Property.hpp"

using namespace entities;

TEST(Property, Creation)
{
  Property<int> a(0);
  ASSERT_EQ(a.get(), 0);

  Property<bool> b(false);
  ASSERT_FALSE(b.get());

  Property<std::string> c("string");
  ASSERT_EQ(c.get(), "string");
}
