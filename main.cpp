#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LED2(LED2);

    while (true) {
        LD2 = B1_USER;
    }
}
