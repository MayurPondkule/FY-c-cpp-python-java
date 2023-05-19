#include <iostream>

using namespace std;
class student {

    private:
    char name;
    int roll_no;
    char division;
    float percentage;
    public:
    void getdetails(void);
    void putdetails(void);

};

void student::getdetails(void){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter roll no :";
    cin>>roll_no;
    cout<<"enter your divsion :";
    cin>>division;
    cout<<"enter your HSC percentage:";
    cin>>percentage;



}
void student::putdetails(void){
    cout<<"student details:\n";
    cout<<"name:"<<name<<",roll number:"<<roll_no<<"division"<<division<<", percentage"<<percentage;
    }
int main(){
     student std;
    std.getdetails();
    std.putdetails();
    return 0;

}