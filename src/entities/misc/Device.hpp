#pragma once

#include "Nameable.hpp"
#include "Statusable.hpp"

namespace entities
{

class Device : public Nameable,
               public Statusable
{
public:
  Device(const std::string &name = "", Status status = Status::Undefined) : Nameable(name), Statusable(status) {}

private:
};

} // namespace entities