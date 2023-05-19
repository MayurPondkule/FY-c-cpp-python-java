#include<iostream>
using namespace std;

const int MAX = 100;


 

int main(){

    int a[3][3], i,j,k=0,c=0;
    cout<<"Enter elements of Matrix.....\n";
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {
                c++;
            }
        }
    }
    int sparced[i][j];
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {
                sparced[k][0] = i;
                sparced[k][1] = j;
                sparced[k][2] = a[i][j];
                k++;
            }
        }
        
    }


    

    cout<<"representation of ssparced  Matrix\n";
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<sparced[i][j];
        }
        cout<<"\n";
    }


    //fast tranpose
    int max =  sparced[0][1];

    for ( i = 0; i < j; i++)
    {
        if (sparced[i][1] < sparced[i+1][1])
        {
            max = sparced[i+1][1];
        }
    }
    // printf("%d\n",max);
    cout<<"\n";
    int n = 0;
    int fastTranpose[100][3];
    for ( i = 0; i <= max; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if (sparced[j][1] == i)
            {
                fastTranpose[n][0] = sparced[j][1];
                fastTranpose[n][1] = sparced[j][0];
                fastTranpose[n][2] = sparced[j][2];
                n++;
            }
        } 
    }
    cout<<"representation of sparced  Matrix transpose\n";
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<fastTranpose[i][j];
        }
        cout<<"\n";
    }

    // simple tranpose
    cout<<"\n";
    cout<<"simple Transpose\n";
    int transpose[3][3];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            transpose[j][i] = a[i][j];     
        } 
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<transpose[i][j];
        }
        cout<<"\n";
    }  
}
    
    

    
