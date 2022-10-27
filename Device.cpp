#include <iostream>
#include "Device.h"
using namespace std;
Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}
void Device::ShowSpec()
{
    std::cout << "Battery Life: " << _batteryLife << std::endl;
}
