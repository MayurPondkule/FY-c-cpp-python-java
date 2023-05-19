#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout<<"Press 1 for area for circle.\n";
    cout<<"Press 2 for area of rectangle.\n";
    cout<<"Press 3 for area of square.\n";
    cout<<"Press 4 for area of triangle.\n";
    
    int x;
    double r,Area,length,breadth,side,a,b,c,s;
    cout<<"Select the option from following : ";
    cin>>x;
    
    switch (x){
        case 1 :{ 
        cout<<"Enter the radius = ";
        cin>>r;
        Area=3.14*r*r;
        cout<<"Area of the circle with radius "<<r<<" is = "<<Area;
        break;
        }
        case 2:{
            cout<<"Enter the length and breadth = ";
            cin>>length,breadth;
            Area=length*breadth;
            cout<<"Area of the rectangle with length "<<length<<" and breadth "<<breadth<<" is ="<<Area;
            break;
        }
        case 3:{
            cout<<"Enter the side of square = ";
            cin>>side;
            Area=side*side;
            cout<<"Area of the square with side "<<side<<" is = "<<Area;
            break;
        }
        case 4:{
            cout<<"Enter the sides of traingle = ";
            cin>>a,b,c;
            s=(a+b+c)/3;
            Area=sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"Area of triangle with sides "<<a<<b<<c<<" are ="<<Area;
            break;
        }

        
    

    }
    
    return 0;
    
}