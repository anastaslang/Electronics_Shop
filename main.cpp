#include <iostream>
#include "IElectronics.h"
#include "Appliances.h"
#include "Device.h"
#include "Player.h"
#include "Notebook.h"

using namespace std;
int main()
{
    IElectronics * technical[2];

    technical[0] = new Player(4, 150);
    technical[1] = new Notebook(20, 2);

    bool open = true;
    while (open)
    {
        std::cout << "Выберите продукт : 1 - Плеер, 2 - Ноутбук, 0 - чтобы выйти" << std::endl;
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            technical[0] -> ShowSpec();
            break;

        case 2:
            technical[1] -> ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            std::cout << "Выберите продукт от 1 до 2 или 0, чтобы выйти" << std::endl;
            break;
        }
    }
    delete technical[0];
    delete technical[1];


    return 0;
}
