#include <iostream>
#include "entities/Device1.hpp"

using namespace std;
using namespace entities;

int main(void)
{
  // cout << "Hello world!" << endl;

  Device1 *dev = new Device1("Device 1");
  std::cout << dev->name() << " \nStatus: " << dev->status() << std::endl;

  return 0;
}