#pragma once

#include "Nameable.hpp"

namespace entities
{

class Device : public Nameable
{
public:
  Device(const std::string &name) : Nameable(name) {}

  bool status() { return m_status; }
  void setStatus(bool status) { m_status = status; }

private:
  bool m_status{false};
};

} // namespace entities