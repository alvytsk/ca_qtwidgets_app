#pragma once

#include "Status.hpp"

namespace entities
{

class Statusable
{
public:
  Statusable(Status status) : m_status(status)
  {
  }

  Status const &status() { return m_status; }
  void setStatus(Status status)
  {
    if (m_status != status)
      m_status = status;
  }

private:
  Status m_status{Status::Undefined};
};

} // namespace entities