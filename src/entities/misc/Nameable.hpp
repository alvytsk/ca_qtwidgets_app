#pragma once

#include <string>

class Nameable
{
public:
  Nameable(const std::string &name)
      : m_name(name)
  {
  }

  std::string name() const
  {
    return m_name;
  }

private:
  const std::string m_name;
};