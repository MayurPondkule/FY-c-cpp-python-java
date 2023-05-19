#include<iostream>
#include<string.h>
using namespace std;

int main(){
    
    string str1,str2;
    cout<<"enter the string1 :"<<endl;
    cin>>str1;
    cout<<"enter the string2 :"<<endl;
    cin>>str2;
    cout<<endl;
    
    cout<<"length of the string 1 is "<<str1.length()<<endl;
    cout<<"length of the string 2 is "<<str2.length()<<endl;
    cout<<endl;
    
    string s2;
    s2=str1;
    cout<<"string after copy is "<<s2<<endl;
    cout<<endl;
    
    
    string strc;
    strc=str1+str2;
    cout<<"after concatination is string become - "<<strc<<endl;
    cout<<endl;
    
    
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
        cout<<"string are not equal ";
    }
    
    cout<<endl;
    
    cout<<"reverse of the string:"<<endl;
    for(int i= str1.length() -1 ;i>=0 ;i--){
        cout<<str1[i];
    }
   
    return 0;
    
}