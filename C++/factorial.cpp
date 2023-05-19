#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n > 1){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}
int main()
{
    int n;
    cout << "enter positive number for factorial:" << endl;
    cin >> n;

    cout << "factorial of " << n << " = " << factorial(n);

    return 0;
}