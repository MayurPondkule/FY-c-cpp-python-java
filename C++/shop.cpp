#include <iostream>
using namespace std;

int main()
{
    int pastries, cakes, cupcakes, amount, bill, customer, i;
    cout << "Enter the no of customers\n";
    cin >> customer;
    for (i = 0; i < customer; i++)
    {
        cout << "\nenter the no. of pastries that you want to buy=\n";
        cin >> pastries;

        cout << "Enter the no. of cakes you want to buy=\n";
        cin >> cakes;

        cout << "enter the no. of cupcakes that you want to buy=\n";
        cin >> cupcakes;

        amount = (pastries * 500) + (cakes * 1000) + (cupcakes * 200);
        if (amount > 200)
        {

            if (amount > 500)
            {
                if (amount > 1000)
                {
                    bill = (amount - (0.5 * amount));
                    cout << "your total bill is =\n";
                    cout << bill;
                }

                else
                {
                    bill = (amount - (0.3 * amount));
                    cout << "your total bill is =\n";
                    cout << bill;
                }
            }
            else
            {
                bill = (amount - (0.1 * amount));
                cout << "your total bill is =\n";
                cout <<  bill;
            }
        }
        else
        {
            cout << "Sorry you will not get any discount\n";
            cout << "thanks for shopping\n";
        }
    }
    return 0;
}