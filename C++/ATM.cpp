#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
  
    private:
    string name;
    int accnumber;
    char type[10];
    int amount = 0;
    int tot = 0;
    int pin=1400;
  
    
    public:

    void setvalue()
    {
        cout << "Enter name :"<<endl;
        cin.ignore();
  
        getline(cin, name);
        
  
        cout << "Enter Account number :(8 digit number)"<<endl;
        cin >> accnumber;
        cout << "Enter Account type :(enter permanent or temporary)"<<endl;
        cin >> type;
        cout << "Enter Balance :"<<endl;
        cin >> tot;
    }
    
    
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Account No:" << accnumber << endl;
        cout << "Account type:" << type << endl;
        cout << "Balance:" << tot << endl;
        cout << "pin:"<<pin<<endl;
    }
  

    void deposit()
    {
        cout<<"Enter amount to be Deposited"<<endl;
        cin >> amount;
        
    }
  
    void showbal()
    {
        tot = tot + amount;
        cout << "Total balance is: "<< tot<<endl;
    }
  
    // Function to withdraw the amount in ATM
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw"<<endl;
        cin >> a;
        if (a<=tot)
        {
            avai_balance = tot - a;
            cout << "Available Balance is" << avai_balance<<endl;
        }
        else if (a>tot)
        {
            cout<<"insufficient balance :";
        }
        
    }
    void pinchange()
    {
        
        int newpin1, newpin2; //change it at initialization..
        cout<<"Change PIN\n"<<endl;
        cout<<"Please enter your new PIN\n";
        cin>>newpin1;
        cout<<"Please re-enter your new PIN\n"<<endl;
        cin>>newpin2;
        //ch=getch();
        if (newpin1 == newpin2)
        {
        pin = newpin1;
        cout<<"Successful! Your PIN has been changed\n"<<endl;
        }
    }
};
  

int a,pin=1400;
int count;
bool iftrue;
int main()
{
    
    Bank b;
  
    int choice;
  
    system ("color 4E");
        cout<<"::::::::::::::::::::::::::WELCOME TO BOD::::::::::::::::::::::::::::::"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"ENTER YOUR CARD (press ENTER):"<<endl;
        cin.get();
        
        cout<<"ENTER YOUR PIN :"<<endl;
        cin>>a;
        if (a==pin)
        {
        while (1)
        {
        cout<<"==================WELCOME====================="<<endl;
        cout<<"1.NEW USER"<<endl;
        cout<<"2.BALANCE ENQUIRY"<<endl;
        cout<<"3.DEPOSIT MONEY"<<endl;
        cout<<"4.SHOW TOTAL BALANCE"<<endl;
        cout<<"5.WITHDRAW MONEY"<<endl;
        cout<<"6.CHANGE PIN"<<endl;
        cout<<"7.CANCEL TRANSACTION"<<endl;
        
        
        cout<<"                     "<<endl;
        cout<<"what's your choice :"<<endl;
        cin>>choice;
  
        // Choices to select from
        switch (choice) {
        case 1:
            b.setvalue();
            continue;
        case 2:
            b.showdata();
            continue;
        case 3:
            b.deposit();
            continue;
        case 4:
            b.showbal();
            continue;
        case 5:
            b.withdrawl();
            continue;
        case 6:
            b.pinchange();
            continue;
        case 7:
            exit(1);
            break;
        default:
            cout << "Invalid choice"<<endl;
        }
        }while(iftrue != false);}
        
        else
        {
        count ++;
        if (count == 3)
        {
        iftrue = false;
        }
        else
        {
            cout<<"WRONG PIN :"<<endl;
        }
        
    }while(iftrue != false);
    return 0;
}