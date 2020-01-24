#pragma once

#include "Nameable.hpp"

//based on http://schneegans.github.io/tutorials/2015/09/21/properties

namespace entities
{

template <typename T>
class Property : public Nameable
{
public:
  Property(T const &value, std::string name = "") : Nameable(name), m_value(value) {}

  virtual void set(T const &value)
  {
    if (m_value != value)
    {
      m_value = value;
    }
  }

  virtual T const &get() { return m_value; }

  //A& operator=(const A& value);
  virtual Property<T> &operator=(T const &rhs /*Right Hand Side*/)
  {
    set(rhs);
    return *this;
  }

  //The friend declaration here firstly declares a non-member function, and
  //makes it friend of the class, meaning it can access the private and protected
  //members of the class Property<T>
  friend std::ostream &operator<<(std::ostream &os, const Property<T> &prop)
  {
    os << "Property [ value = " << prop.m_value << " ]" << std::endl;
    return os;
  }

private:
  T m_value;
};

} // namespace entities