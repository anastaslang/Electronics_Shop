#include <iostream>
#include "Notebook.h"
using namespace std;
Notebook::Notebook(int batteryLife, int weight) : Device(batteryLife), Appliances(weight)
{
}
void Notebook::ShowSpec()
{
    std::cout << "Battery Life: " << _batteryLife << "Weight: " << _weight << std::endl;
}
