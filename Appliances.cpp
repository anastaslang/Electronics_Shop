#include <iostream>
#include "Appliances.h"
using namespace std;
Appliances::Appliances(int weight) : _weight(weight)
{
}
void Appliances::ShowSpec()
{
    std::cout << "Weight: " << _weight << std::endl;
}
