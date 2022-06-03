#include <cstdio>
#include <iostream>

using namespace std;

char usb_dict[9999];

void init()
{
    usb_dict[0x4] = 'a';
    usb_dict[0x5] = 'b';
    usb_dict[0x6] = 'c';
    usb_dict[0x7] = 'd';
    usb_dict[0x8] = 'e';
    usb_dict[0x9] = 'f';
    usb_dict[0xA] = 'g';
    usb_dict[0xB] = 'h';
    usb_dict[0xC] = 'i';
    usb_dict[0xD] = 'j';
    usb_dict[0xE] = 'k';
    usb_dict[0xF] = 'l';
    usb_dict[0x10] = 'm';
    usb_dict[0x11] = 'n';
    usb_dict[0x12] = 'o';
    usb_dict[0x13] = 'p';
    usb_dict[0x14] = 'q';
    usb_dict[0x15] = 'r';
    usb_dict[0x16] = 's';
    usb_dict[0x17] = 't';
    usb_dict[0x18] = 'u';
    usb_dict[0x19] = 'v';
    usb_dict[0x1A] = 'w';
    usb_dict[0x1B] = 'x';
    usb_dict[0x1C] = 'y';
    usb_dict[0x1D] = 'z';
    usb_dict[0x1E] = '1';
    usb_dict[0x1F] = '2';
    usb_dict[0x20] = '3';
    usb_dict[0x21] = '4';
    usb_dict[0x22] = '5';
    usb_dict[0x23] = '6';
    usb_dict[0x24] = '7';
    usb_dict[0x25] = '8';
    usb_dict[0x26] = '9';
    usb_dict[0x27] = '0';
    usb_dict[0x2C] = ' ';
    usb_dict[0x2D] = '-';
    usb_dict[0x2E] = '=';
}

int main()
{
    int t;
    init();
    while (scanf("%x", &t) != EOF)
    {
        cout << usb_dict[t];
    }
    return 0;
}