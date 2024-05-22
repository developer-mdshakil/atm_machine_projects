#include <stdio.h>
#include <windows.h>
#include <time.h>

int main()
{
    system("color 3F");
    int pin = 1234, option, enterPin, amount = 1;
    float balance = 5000;
    int countineuTransection = 1;

    time_t now;
    time(&now);
    printf("\n\n");
    printf("\t\t\t\t\t       %s", ctime(&now));
    printf("\n\n \t\t\t ==============*Wel come to our simple ATM Machine Project*==============\n\n");

    while (pin != enterPin)
    {
        printf("\n\t\t\t Please enter your pin: ");
        scanf("%d", &enterPin);

        if (enterPin != pin)
        {
            Beep(610, 500); // c library used for worng password its alrm to
            printf("\n\n \t\t\t Invalid Pin!!\n");
        }
    }
}