#include<iostream>
#include<string.h>
using namespace std;

class str{
    string str1,str2,s2,strc;

public:
void length(){
    
    cout<<"enter the string :"<<endl;
    cin>>str1;
    cout<<"length of the string  is "<<str1.length()<<endl;

    }

void copy(){
    cout<<"enter the string :"<<endl; 
    cin>>str1;   
    s2=str1;
    cout<<"string after copy is "<<s2<<endl;
    
    }


void concat(){
    cout<<"enter the string 1 :"<<endl;
    cin>>str1;
    cout<<"enter the string 2 :"<<endl;
    cin>>str2;
    strc=str1+str2;
    cout<<"after concatination is string become - "<<strc<<endl;
    
}




void compare(){
    cout<<"enter the string 1 :"<<endl;
    cin>>str1;
    cout<<"enter the string 2 :"<<endl;
    cin>>str2;
    cout<<"comparing string"<<endl;
    if(str1.length()==str2.length()){
        cout<<"string are of equal length";
        
    }
    else{
        cout<<"string are not of equal length";
    }
    
    cout<<endl;
    
    if(str1==str2){
        cout<<"string are equal ";
        
    }
    else{
        cout<<"string are not equal";
    }

    
    
}

void reverse(){
    cout<<"enter the string  :"<<endl;
    cin>>str1;
    cout<<"reverse of the string"<<endl;
    for(int i= str1.length() -1 ;i>=0 ;i--){
        cout<<str1[i];
    }
}
    


};

int main(){

    int choice;
    str s;
    char ans;
    do{
    cout<<"\n# # # # # # # # MENU  # # # # # # # # #\n";
	cout<<"\n1.Length\n2.Copy\n3.Concatination\n4.Compare\n5.Reverse\n0.Exit\n";
    cout<<"enter your choice:"<<endl;
	cin>>choice;


    switch(choice){
    case 1:s.length();
    break;
    
    case 2:s.copy();
    break;

    case 3:s.concat();
    break;

    case 4:s.compare();
    break;

    case 5:s.reverse();
    break;



    
    default:
    cout<<"wrong selection..!";
    break;
    }

cout<<endl;
    
    }while (choice!=0);
    
    return 0;

}
    
    
    
    
    

