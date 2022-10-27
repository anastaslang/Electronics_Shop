#include <iostream>
#pragma once
#include "Device.h"
class Player : public Device
{
public:
  Player(int batteryLife, int totalTracks);
  void ShowSpec();
private:
    int _totalTracks;
};
