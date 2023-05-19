#include <iostream>
using namespace std;

class student
{
private:
    char name[30];
    int rollNo;
    char Div;
    float perc;

public:
    void get(void);
    void put(void);
};

{
    cout << "Enter name: ";
    cin >> name;
    cout << " Enter roll number : ";
    cin >> rollNo;
    cout << " Enter Division : ";
    cin >> Div;
    cout << " Enter Percentage : ";
    cin >> perc;
}
void student::put(void)
{
    cout << "Student details:\n";

    cout << "Name:" << name << ", Roll Number:" << rollNo << ", Division :" << Div << ",  Percentage:" << perc << endl;
}
int main()
{
    student std[7];

    cout << "Enter total number of students: ";

    cin >> n;

    for (i = 0; i < n; i++)
    {

        cout << "Enter details of student " << i + 1 << ":\n";
        std[i].get();
    }
    cout << endl;

    for (i = 0; i < n; i++)
    {
        cout << "Details of student " << (i + 1) << ":\n";
        std[i].put();
    }
    return 0;
}
