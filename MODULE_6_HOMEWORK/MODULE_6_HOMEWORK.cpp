#include <iostream>
#include "Fridge.h"
#include "Headphones.h"
#include "MP3Player.h"
#include "OfficePrinter.h"
#include "PortableSpeaker.h"

using namespace ElectronicsShop;

int main()
{
    IElectronics* electronics[8];
    electronics[0] = new Fridge(68, "LG GA - B459CLWL", 309, true, 234, 107, 36);
    electronics[1] = new Fridge(33, "Liebherr T 1404", 177, false, 107, 0, 41);
    electronics[2] = new Headphones(true, 96, 0, "20 Hz - 20 kHz", "JBL", "Tune175BT");
    electronics[3] = new Headphones(false, 105, 1000, "4 Hz - 40 kHz", "SONY", "WH-1000XM4");
    electronics[4] = new MP3Player(12, 0, "4 Hz - 40 kHz", "DIGMA", "T5", 16, "MP3, WMA, OGG, APE, FLAC, WAV, AAC");
    electronics[5] = new OfficePrinter("Pantum", "P2207", "Black", "Laser", "Two-color printing(black and white)", "A4");
    electronics[6] = new OfficePrinter("Epson", "EcoTank L1210", "Black", "Inkjet printer", "Colored", "A4");
    electronics[7] = new PortableSpeaker(12 ,20, "", "JBL", "FLIP 5", "Black", "USB Type-C");

    bool open = true;
    char choice;

    while (open) {

        std::cout << "Choose an item:\n 1 - Fridge with Freezer\n2 - Fridge without Freezer\n3 - Wireless Headphones\n4 - Wired Headphones\n"
            << "5 - MP3 Player\n6 - Laser Printer\n7 - Inkjet Printer\n8 - Portable Speaker\n0 - Quit";

        std::cin >> choice;
        system("cls");

        switch (choice) {
        case '1': {
            electronics[0]->ShowSpec();
            break;
        }
        case '2': {
            electronics[1]->ShowSpec();
            break;
        }
        case '3': {
            electronics[2]->ShowSpec();
            break;
        }
        case '4': {
            electronics[3]->ShowSpec();
            break;
        }
        case '5': {
            electronics[4]->ShowSpec();
            break;
        }
        case '6': {
            electronics[5]->ShowSpec();
            break;
        }
        case '7': {
            electronics[6]->ShowSpec();
            break;
        }
        case '8': {
            electronics[7]->ShowSpec();
            break;
        }
        case '0': {
            open = false;
            break;
        }
        default: {
            std::cout << "Wrong data. Try again!" << std::endl;
        }
        }
        system("pause");
        system("cls");
    }

    delete electronics[0];
    delete electronics[1];
    delete electronics[2];
    delete electronics[3];
    delete electronics[4];
    delete electronics[5];
    delete electronics[6];
    delete electronics[7];

    return 0;
}