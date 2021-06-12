#include<bits/stdc++.h>
#include<conio.h>
#include<iostream>

using namespace std;
class Bank
{
          char name[100];
          char add[100];
          char y;
          int balance=0;
    public:
         void Open_Account();
         void Deposit_Cash();
         void Withdraw_Cash();
         void Display_Account();
};

void Bank::Open_Account()
{
        cout<<" WELCOME TO MPS BANK "<<endl;
        cout<<"Please fill the form with to open an account"<<endl;
        cout<< "Enter full Name  :: ";
        cin.ignore();
        cin.getline(name,100);
        cout<<"\n Enter Address :: ";
        cin.ignore();
        cin.getline(add,100);
        cout<<"\n What type of account would you like to open" "\n" "Saving Account (s) or Current Accout (c) \n";
        cin>> y;
        cout<<"Enter amount to deposit ";
        cout<< "\n Minimum amount to deposit is 3000"<<endl;
        cin>> balance;

         if(balance<1000)
            {
           cout<<"Oops !! Low amount"<<endl;
            }
         else
            {
           cout<<"Congrats !! Account created"<<endl;
            }

}
void Bank::Display_Account()
{
    cout<<" WELCOME TO MPS BANK "<<endl;
    cout<<"Details "<<endl;
    cout<<"Full Name::\t"<<name;

    cout<<"\n Address:: \t"<<add;
    cout<<"\n Type of account :: \t"<<y;
    cout<<"\n Initial amount deposited ::"<< balance;
}
void Bank::Deposit_Cash()
{
        char q;
        int a;
        cout<<"Enter amount you would like to deposit :: ";
        cin>>a ;
        balance+=a;
        cout<<"\n TOTAL AMOUNT DEPOSITED :: \t"<<balance;
}

void Bank::Withdraw_Cash()
{
       float amount,b;
       cout<< "\n Withdrawal: ";
       cout<< "\n Enter amount to be Withdrawan :: ";
       cin>>amount;
       balance-=amount;

              if(balance<0)
                {
                cout<<"Transaction unsuccessfull due to insufficient balance !!"<<endl;
                }
              else if(balance<=100&&balance>0)
                {
                cout<<"Transaction successful!!"<<endl;
                cout<<"Low balance!!!"<<endl;
                cout<<"Available balance  "<<balance<<endl;
                }
              else
                {
                cout<<"Transaction successful!!"<<endl<<"Available balance  "<<balance<<endl;
                }
}

int main()
{
    int ch;
    Bank obj;
    char n,x;
  do
  {
        cout<<"\n WELCOME TO MPS BANK ";
        cout<<"\n1. Open Account \n";
        cout<<"2. Deposit Cash \n";
        cout<<"3. Withdraw Cash \n";
        cout<<"4. Display Account \n";
        cout<<"5. Exit\n";
        cout<<"Select any option to proceed further \n";
        cin>>ch;
        system("cls");
 switch(ch)
 {
    case 1:
            cout<<"1. Open Account \n";
            obj.Open_Account();
        break;

    case 2:
            cout<<"2. Deposit Cash \n";
            obj.Deposit_Cash();
        break;
    case 3:
            cout<<"3. Withdraw Cash \n";
            obj.Withdraw_Cash() ;
        break;
    case 4:
            cout<<"4. Display Account \n";
            obj.Display_Account();
        break;
    case 5:
                if(ch==5)
                {
                exit(1);
                }

default:
        cout<<"ERROR - PLEASE TRY AGAIN !!! \n";
        }

    cout<<"\n Would you like to select next option?:: y \n";
    cout<<"\n To exit press :: N ";
        x=getch();
        if(x=='n'||x=='N')
        exit(0);

       }
       while(x=='y'||x=='Y');
getch();
return 0;

}
