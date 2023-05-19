#include<iostream>
// #include<conio.h>


using namespace std;

struct stud {
    char name[40];
    int prn;
    int rollno;
};

int main(){
    int n; 
    stud s[n];
    char ch;
    cout<<"Enter the number of students"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Data of Student "<<i + 1<<endl;
        cout<<"Enter the name of student";
        cin>>s[i].name;
        cout<<"Enter the PRN no of student";
        cin>>s[i].prn;
        cout<<"Enter the rollno of student";
        cin>>s[i].rollno;
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        cout<<"The Student details "<<i<<endl;
        cout<<"Student Name :"<<s[i].name<<endl; 
        cout<<"Student prn no :"<<s[i].prn<<endl;;
        cout<<"Student roll no :"<<s[i].rollno<<endl;;
        cout<<"\n"; 
    }
    
    cout<<"Deletion of student data"<<endl;
    int pos;
    int i;
    cout<<"Enter the position of the student"<<endl;
    cin>>pos;
    i=pos+1;
    while(i<=n-1)
    {
        s[i-1]=s[i];
    }
    n--;
    
     cout<<"The Student details after deletion "<<endl;
     for(int i=0;i<n;i++){
        cout<<"Student Name :"<<s[i].name<<endl; 
        cout<<"Student prn no :"<<s[i].prn<<endl;;
        cout<<"Student roll no :"<<s[i].rollno<<endl;;
        cout<<"\n"; 
    }
    

    do 
    {
      cout<<"Enter the roll no of the student to search"<<endl;
      int roll;
      cin>>roll;
      int flag = 0;
       for(int i=0;i<n;i++)
       {
            if(s[i].rollno == roll){
                flag = 1;
                cout<<"Student data :"<<endl;
                cout<<"Student Name :"<<s[i].name<<endl;
                cout<<"Student prn no :"<<s[i].prn<<endl;;
                cout<<"Student roll no :"<<s[i].rollno<<endl;;
                cout<<"\n";
                break;
            }
       }
        if(!flag)
		{
			cout<<"\nSorry..!!..No such Student exists..!!\n"<<endl;;
			cout<<"Exiting.....Press a key...\n"<<endl;;
            break;
        }
        cout<<"Want to display more ? (y/n).. ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');

    
    return 0;
}
