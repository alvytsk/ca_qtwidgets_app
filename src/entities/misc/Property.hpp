#pragma once

#include "Nameable.hpp"

//based on http://schneegans.github.io/tutorials/2015/09/21/properties

namespace entities
{

template <typename T>
class Property : public Nameable
{
public:
  Property(T const &value, std::string name = "") : Nameable(name)
  {
    m_value = m_defaultValue = value;
  }

  void set(T const &value)
  {
    if (m_value != value)
    {
      m_value = value;
    }
  }

  T const &get() { return m_value; }

  void invalidate()
  {
    m_value = m_defaultValue;
  }

  //A& operator=(const A& value);
  Property<T> &operator=(T const &rhs /*Right Hand Side*/)
  {
    set(rhs);
    return *this;
  }

  T operator()() const
  {
    return m_value;
  }

  //The friend declaration here firstly declares a non-member function, and
  //makes it friend of the class, meaning it can access the private and protected
  //members of the class Property<T>
  friend std::ostream &operator<<(std::ostream &os, const Property<T> &prop)
  {
    os << "Property " << prop.name() << " [ value = " << prop() << ", default = " << prop.m_defaultValue << " ]" << std::endl;
    return os;
  }

private:
  T m_value;
  T m_defaultValue;
};

} // namespace entities