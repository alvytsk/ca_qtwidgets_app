#pragma once

namespace entities
{

class Statusable
{
public:
  Statusable(bool status) : m_status(status)
  {
  }

  bool const &status() { return m_status; }
  void setStatus(bool status)
  {
    if (m_status != status)
      m_status = status;
  }

private:
  bool m_status{false};
};

} // namespace entities