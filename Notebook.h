#include <iostream>
#pragma once
#include "Device.h"
#include "Appliances.h"
class Notebook final: public Device, Appliances
{
public:
  Notebook(int batteryLife, int weight);
  void ShowSpec() override;
};
