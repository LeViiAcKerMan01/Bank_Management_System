// BANK MANAGEMENT SYSTEM

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Bank{

    char name[100];
    char address[100];
    char y;
    int balance = 0;

    public:
       
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};

void Bank :: open_account()
{
    cout<<"Enter your full name : ";
    cin.ignore();
    cin.getline(name, 100);
    cout<<"Enter your address : ";
    cin.ignore();
    cin.getline(address, 100);
    cout<<"Type Of Account : \n 1) Saving Account(s) \n 2) Current(c) ";
    cin >> y;
    cout<<"Enter amount for deposit : ";
    cin >> balance;
    cout<<"Your account has been created! \n";
}

void Bank :: deposit_money()
{
    cout<<"Enter the amount of deposit : ";
    int a;
    cin >> a;
    balance += a;
    cout<<"Total amount deposited : "<<balance;
}

void Bank :: display_account()
{
    cout<<"Your full name : "<<name<<endl;
    cout<<"Your Address : \t "<<address<<endl;
    cout<<"Type of acoount : \t "<<y<<endl;
    cout<<"Amount deposited : \t "<<balance<<endl;
}

void Bank :: withdraw_money()
{
    float amount;
    cout<<"\n withdraw : ";
    cout<<"Enter amount to Withdraw : ";
    cin >> amount;
    balance -= amount;
    cout<<"Total amount left : "<<balance;
}


int main()
{
    int ch, x;
    Bank obj;

    do
    {
    cout<<"1) Open Account \n";
    cout<<"2) Deposit Money \n";
    cout<<"3) Withdraw Money \n";
    cout<<"4) Display Account \n";
    cout<<"5) Exit \n";
    cout<<"Select the option from above \n";
    cin >> ch;

    switch(ch){

        case 1: 
        cout<<"1) Open Account \n";
        obj.open_account();
        break;

        case 2:
        cout<<"2) Deposit Money \n";
        obj.deposit_money();
        break;

        case 3:
        cout<<"3) Withdraw Money \n";
        obj.withdraw_money();
        break;

        case 4:
        cout<<"4) Display Account \n";
        obj.display_account();
        break;

        case 5:
        if(ch == 5){

            exit(1);
        }

        default:
        cout<<"Input is Invalid! Try Again \n";
    }

    cout<<"\n Do you want to select next option then press : Y \n";
    cout<<"If you want to exit : N";
    x = getch();
    if(x == 'N' || x == 'n')
    exit(0);
    }
    while(x == 'y' || x == 'Y');
    
    getch();
    return 0;
}