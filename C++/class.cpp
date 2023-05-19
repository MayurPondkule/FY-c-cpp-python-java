#include <iostream>
#include <string>

using namespace std;

class data
{
    public:
string name;
int salary;


void printdetail(){
    cout<<"name of our first data is "<<name<<" and his salary is "<<salary<<" doller";


}
};

int main()
{

    data har;
    har.name = "mayur";
    har.salary = 100;
    har.printdetail();
    //cout<<"name of our first data is "<<har.name<<" and his salary is "<<har.salary<<" doller";


    return 0;
}
