#include <iostream>
#include <string>

using namespace std;
int main()
{

    string str2 = "mayur";

    string str1;
    cout << "***enter spell***" << endl;
    cin >> str1;

    if (str1 == str2)
        cout << "your spell is correct";

    else
        cout << "SORRY!!! your spell is not correct";

    return 0;
}