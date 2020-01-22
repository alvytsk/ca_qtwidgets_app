#include <iostream>
#include "entities/misc/Device.hpp"

using namespace std;
using namespace entities;

int main(void)
{
  // cout << "Hello world!" << endl;

  Device *dev = new Device("Device 1");
  std::cout << dev->name() << " \nStatus: " << dev->status() << std::endl;
  delete dev;

  return 0;
}