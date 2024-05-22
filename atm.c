#include <stdio.h>
#include <windows.h>
#include <time.h>

void showTimeDate();
void mainMenu();
void heading();
void password();

int main()
{
    password();
}

// Main Menu Function Declare here
void mainMenu()
{
    system("cls");
    showTimeDate();

    int option, amount = 1;
    float balance = 5000;
    int countineuTransection = 1;

    printf("\n \t\t\t\t ============================*Main Menu*======================\n");
    printf("\n\n\t\t\t\t1. Deposite Money\n");
    printf("\n\t\t\t\t2. Chek Balance\n");
    printf("\n\t\t\t\t3. Withdraw Money\n");
    printf("\n\t\t\t\t4. Mobile Rechager\n");
    printf("\n\t\t\t\t5. Change Pin\n");

    printf("\n\n\t\t\t\t  ============================**========================\n\n");
    printf("\t\t\t\tPlease choose your option: ");
    scanf("%d", &option);

    // check user input option number &
}
// declare here time set function automatic
void showTimeDate()
{
    time_t now;
    time(&now);
    printf("\n\n");
    printf("\t\t\t\t\t       %s", ctime(&now));
}

// this is heading function for first project heading
void heading()

{
    system("cls");
    system("color 3F");

    showTimeDate();

    printf("\n\n \t\t\t ==============*Wel come to our simple ATM Machine Project*==============\n\n");
}

// declae here password function for check valid password
void password()
{
    heading();
    int pin = 1234, option, enterPin, count = 0;

    while (pin != enterPin)
    {
        printf("\n\t\t\t Please enter your pin: ");
        scanf("%d", &enterPin);

        if (enterPin != pin)
        {
            Beep(610, 500); // c library used for worng password its alrm to
            printf("\n\n \t\t\t Invalid Pin!!\n");
        }
        count++;
        if (count == 3 && pin != enterPin)
        {
            exit(0);
        }
    }
    mainMenu();
}