#include <iostream>
#include "entities/misc/Device.hpp"
#include "entities/misc/Property.hpp"

using namespace std;
using namespace entities;

int main(void)
{
  // cout << "Hello world!" << endl;

  Device *dev = new Device("Device 1");
  std::cout << dev->name() << " \nStatus: " << statusToString(dev->status()) << std::endl;
  delete dev;

  Property<int> prop(10);
  cout << prop;

  return 0;
}