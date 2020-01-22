#pragma oncce

//based on http://schneegans.github.io/tutorials/2015/09/21/properties

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

  //A& operator=(const A& value);
  virtual Property<T> &operator=(T const &newValue)
  {
    set(newValue);
    return *this;
  }

private:
  T m_value;
};

} // namespace entities