#pragma once

#include "misc/Nameable.hpp"

namespace entities
{

class Device1 : public Nameable
{
public:
  Device1(const std::string &name);

  bool status() { return _status; }
  void setStatus(bool status) { _status = status; }

private:
  bool _status{false};
};

} // namespace entities