#pragma once

#include "misc/Nameable.hpp"

namespace entities
{

class Device1 : public Nameable
{
public:
  Device1(const std::string &name);

  bool status() { return m_status; }
  void setStatus(bool status) { m_status = status; }

private:
  bool m_status{false};
};

} // namespace entities