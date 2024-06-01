#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void showTimeDate();
void mainMenu();
void heading();
void password();
void depositeMoney();
void checkBalance();
void withdrawMoney();
void mobileRecharge();

float totalBalance = 5000;
int amount, withdrawAmount, countineuTransection = 1;

struct user
{
    char phone[50], account[50], password[50];
};

int main()
{
    password();
}

// Main Menu Function Declare here
void mainMenu()
{
    system("cls");
    showTimeDate();

    int option;

    printf("\n \t\t\t\t ============================* Main Menu *======================\n");
    printf("\n\n\t\t\t\t1. Deposite Money\n");
    printf("\n\t\t\t\t2. Chek Balance\n");
    printf("\n\t\t\t\t3. Withdraw Money\n");
    printf("\n\t\t\t\t4. Mobile Rechager\n");
    printf("\n\t\t\t\t5. Help for Information\n");
    printf("\n\t\t\t\t6. Exit\n");

    printf("\n\n\t\t\t\t  ============================**========================\n\n");
    printf("\t\t\t\tPlease choose your option: ");
    scanf("%d", &option);

    // check user input option number & show her choose
    if (option == 1)
    {
        depositeMoney();
    }
    else if (option == 2)
    {
        checkBalance();
    }
    else if (option == 3)
    {
        withdrawMoney();
    }
    else if (option == 4)
    {
        mobileRecharge();
    }
    else if (option == 5)
    {
        // help();
    }
    else if (option == 6)
    {
        // exitProject();
    }
    else
    {
        printf("\n\n \t\tYour choice is worng!! \n \t\tPlease try agin....");
        mainMenu();
    }
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

    printf("\n\n \t\t\t ==============* Welcome to our simple ATM Machine Project *==============\n\n");
}

// depositeMoney function declare here for add money to card
void depositeMoney()
{
    system("cls");
    showTimeDate();

    printf("\n \t\t\t\t ============================* Deposit Money *======================\n\n");

    printf("\n\t\t\t\tPlease enter amount: ");
    scanf("%d", &amount);
    totalBalance += amount;

    printf("\n\t\t\t\tYou have deposite Tk: %d.\n\t\t\t\tYour new balacne is: %f\n", amount, totalBalance);

    printf("\n\n\t\t\t\tPress any ke....");
    fflush(stdin);
    getchar();
    mainMenu();
}

// declare here checkBalance function for see balance
void checkBalance()
{
    system("cls");
    showTimeDate();

    printf("\n \t\t\t\t ============================* Your Balance *======================\n\n");
    printf("\n\t\t\t\tYour total balance: %f", totalBalance);

    printf("\n\n\t\t\t\tPress any ke....");
    fflush(stdin);
    getchar();
    mainMenu();
}

// declare here withdraw function for withdraw money user
void withdrawMoney()
{
    system("cls");
    showTimeDate();

    printf("\n \t\t\t\t ============================* Withdraw Money *======================\n\n");

    printf("\n\n\t\t\t Please enter amount for withdraw: ");
    scanf("%d", &withdrawAmount);
    if (totalBalance < withdrawAmount)
    {
        printf("\n\n\t\t\tSorry!! insuficiant balance..");
    }
    else
    {
        totalBalance -= withdrawAmount;
        printf("\n\t\t\t You have withdraw Money: %d", withdrawAmount);
    }

    printf("\n\n\t\t\t\tPress any ke....");
    fflush(stdin);
    getchar();
    mainMenu();
}

// declare here mobileRechager function for mobile reachger
void mobileRecharge()
{
    system("cls");
    showTimeDate();
    int n, rechagerAmount, number;

    printf("\n \t\t\t\t ============================* Mobile Rechager *======================\n\n");

    printf("\n\n\t\t\t\t1. GrameenPhone\n");
    printf("\n\t\t\t\t2. Robi\n");
    printf("\n\t\t\t\t3. Airtel\n");
    printf("\n\t\t\t\t4. Banglalingk\n");
    printf("\n\t\t\t\t5. Teletalk\n");
    printf("\n\t\t\t\t6. Exit\n");

    printf("\n\n\t\t\t\t  ============================**========================\n\n");

    printf("\t\t\t\tPlease choose your SIM: ");
    scanf("%d", &n);

    system("cls");
    showTimeDate();
    switch (n)
    {
    case 1:
        if (rechagerAmount < 20)
        {
            printf("\n\t\t\t\tSorry Insuficiant Balance!!\n\n");
            Beep(500, 900);
        }
        else if (totalBalance > rechagerAmount)
        {
            printf("\n\n\t\t\t\tPlease enter your number: ");
            scanf("%d", &number);

            printf("\n\t\t\t\tPlease give your rechager amount: ");
            scanf("%d", &rechagerAmount);

            printf("\t\t\t\tYou have successfully Grameenphone Mobile Recharge\n\n");
            printf("\n\n\t\t\t\tThank You!!!\n\n");
            totalBalance -= rechagerAmount;

            printf("\n\n\t\t\t\tPress any ke....");
            fflush(stdin);
            getchar();
            mainMenu();
        }
        break;
    case 2:
        if (rechagerAmount < 20)
        {
            printf("\n\t\t\t\tSorry Insuficiant Balance!!\n\n");
            Beep(500, 900);
        }
        else if (totalBalance > rechagerAmount)
        {
            printf("\n\n\t\t\t\tPlease enter your number: ");
            scanf("%d", &number);

            printf("\n\t\t\t\tPlease give your rechager amount: ");
            scanf("%d", &rechagerAmount);

            printf("\t\t\t\tYou have successfully Robi Mobile Recharge\n\n");
            printf("\n\n\t\t\t\tThank You!!!\n\n");
            totalBalance -= rechagerAmount;

            printf("\n\n\t\t\t\tPress any ke....");
            fflush(stdin);
            getchar();
            mainMenu();
        }
        break;
    case 3:
        if (rechagerAmount < 20)
        {
            printf("\n\t\t\t\tSorry Insuficiant Balance!!\n\n");
            Beep(500, 900);
        }
        else if (totalBalance > rechagerAmount)
        {
            printf("\n\n\t\t\t\tPlease enter your number: ");
            scanf("%d", &number);

            printf("\n\t\t\t\tPlease give your rechager amount: ");
            scanf("%d", &rechagerAmount);

            printf("\t\t\t\tYou have successfully Airtel Mobile Recharge\n\n");
            printf("\n\n\t\t\t\tThank You!!!\n\n");
            totalBalance -= rechagerAmount;

            printf("\n\n\t\t\t\tPress any ke....");
            fflush(stdin);
            getchar();
            mainMenu();
        }
        break;
    case 4:
        if (rechagerAmount < 20)
        {
            printf("\n\t\t\t\tSorry Insuficiant Balance!!\n\n");
            Beep(500, 900);
        }
        else if (totalBalance > rechagerAmount)
        {
            printf("\n\n\t\t\t\tPlease enter your number: ");
            scanf("%d", &number);

            printf("\n\t\t\t\tPlease give your rechager amount: ");
            scanf("%d", &rechagerAmount);

            printf("\t\t\t\tYou have successfully Banglalingk Mobile Recharge\n\n");
            printf("\n\n\t\t\t\tThank You!!!\n\n");
            totalBalance -= rechagerAmount;

            printf("\n\n\t\t\t\tPress any ke....");
            fflush(stdin);
            getchar();
            mainMenu();
        }
        break;
    case 5:
        if (rechagerAmount < 20)
        {
            printf("\n\t\t\t\tSorry Insuficiant Balance!!\n\n");
            Beep(500, 900);
        }
        else if (totalBalance > rechagerAmount)
        {
            printf("\n\n\t\t\t\tPlease enter your number: ");
            scanf("%d", &number);

            printf("\n\t\t\t\tPlease give your rechager amount: ");
            scanf("%d", &rechagerAmount);

            printf("\t\t\t\tYou have successfully Teletalk Mobile Recharge\n\n");
            printf("\n\n\t\t\t\tThank You!!!\n\n");
            totalBalance -= rechagerAmount;

            printf("\n\n\t\t\t\tPress any ke....");
            fflush(stdin);
            getchar();
            mainMenu();
        }
        break;
    case 6:
        printf("\n\n\t\t\t\tPress any ke....");
        fflush(stdin);
        getchar();
        mainMenu();
        break;
    }
}

// declae here password function for check valid password
void password()
{
    heading();
    struct user usr;
    FILE *fp;
    char filename[50], phone[50], pasrw[50];
    int option;
    printf("\t\t\tWhat do you want?\n");
    printf("\n\t\t\t1. Register an account\n");
    printf("\t\t\t1.Login to an account\n");
    printf("\n\n\t\t\tChoose your option: ");
    scanf("%d", &option);
    if (option == 1)
    {
        system("cls");
        showTimeDate();
        printf("\n\t\t\tEnter your account number: ");
        scanf("%s", usr.account);
        printf("\n\t\t\tEnter your phone number: ");
        scanf("%s", usr.phone);
        printf("\n\t\t\tEnter your new password: ");
        scanf("%s", usr.password);
        strcpy(filename, usr.phone);
        fp = fopen(strcat(filename, ".dat"), "w");
        fwrite(&usr, sizeof(struct user), 1, fp);
        if (fwrite != 0)
        {
            Beep(500, 900);
            printf("\n\t\t\tAccount successfuly registered\n");
            mainMenu();
        }
        else
        {
            printf("\n\t\t\tsomething went wrong please try again...\n");
        }
        fclose(fp);
    }
    if (option == 2)
    {
        system("cls");
        showTimeDate();
        printf("\n\t\t\tEnter your phone number: ");
        scanf("%s", &phone);
        printf("\n\t\t\tEnter your new password: ");
        scanf("%s", &pasrw);
        strcpy(filename, phone);
        fp = fopen(strcat(filename, ".dat"), "r");
        fread(&usr, sizeof(struct user), 1, fp);
        fclose(fp);
        if (strcmp(pasrw, usr.password))
        {
            Beep(500, 900);
            mainMenu();
        }
        else
        {
            Beep(900, 600);
            printf("\n\t\t\tInvalid password!\n\n");
        }
    }
}