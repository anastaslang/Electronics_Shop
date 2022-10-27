#include <iostream>
#include "Player.h"
using namespace std;
Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
{
}
void Player::ShowSpec()
{
    std::cout << "Battery Life: " << _batteryLife << std::endl;
    std::cout << "Total tracks: " << _totalTracks << std::endl;
}
