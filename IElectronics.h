#include <iostream>
#pragma once
using namespace std;
class IElectronics
{
public:
    virtual void ShowSpec() = 0;
    virtual ~IElectronics() = default;
};
