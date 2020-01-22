#pragma oncce

namespace entities
{

template <typename T>
class Property
{
public:
  Property(T const &value) : m_value(value) {}

  virtual void set(T const &value)
  {
    if (m_value != value)
    {
      m_value = value;
    }
  }

  virtual T const &get() { return m_value; }

private:
  T m_value;
};

} // namespace entities