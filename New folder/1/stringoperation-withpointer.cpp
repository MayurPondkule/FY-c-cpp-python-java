#include<iostream>
using namespace std;

int Length(char* str1)
{
     char *ptr1;
     int l=0;
     ptr1=str1;

     while(*ptr1!='\0')
     {
          l++;
          ptr1++;
     }
    
     return l;

}

void copy(char* str1)
{
     char* str2=new char[100];
     char *ptr1, *ptr2;
     int len=0;
     ptr1=str1;

     while(*ptr1!='\0')
     {
          len++;
          ptr1++;
     }

     int i=0;
     ptr1=str1;
     ptr2=str2;
	
     while(*ptr1!='\0')
     {
          *ptr2=*ptr1;
          ptr1++;
          ptr2++;
     }
     
     *ptr2='\0';
     cout<<"\nCopied String : "<<str2<<endl;
}

void Concat(char* str1)
{
     	char *ptr1,*ptr2;
          char* str2=new char[100];

          cout<<"\nEnter 2nd String: \n";
          cin>>str2;

          int len=0;
          ptr1=str1;
          ptr2=str2;

          while(*ptr1!='\0')
          {
               len++;
               ptr1++;
          }
		 
		while(*ptr2!='\0')
		{
		     *ptr1=*ptr2;
		 	ptr1++;ptr2++;
		}
		 
		*ptr1='\0';
		cout<<"\nConcatination : "<<str1<<endl;
}

int Compare(char *str1,char *str2)
{
	int k=1;
	while(*str1!=0 || *str2!=0)
	{
		if(*str1 != *str2)
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return 1;
	
}

void Reverse(char* str1)
{
     char *ptr1, *ptr2, temp, i=0;
	int len=0;

    while(str1[i]!='\0')
	{
		len++;
        i++;
	}

	ptr1=str1;
    ptr2=str1;

     for(int i=0;i<len-1;i++)
     {
        ptr2++;
     }

	for(i=0;i<len/2;i++)
	{
		temp=*ptr2;
		*ptr2=*ptr1;
		*ptr1=temp;
		ptr1++;ptr2--;
	}
	cout<<"\nReversed String : "<<str1<<endl;
}





int main()
{
     int choice;
     char* str1=new char[100];
	 char* str2=new char[100];
	 int ans;
     
do{
	cout<<"\n# # # # # # # # MENU  # # # # # # # # #\n";
	cout<<"\n1.Length\n2.Copy\n3.Concatination\n4.Compare\n5.Reverse\n0.Exit\n";
	cout<<"enter the choice:"<<endl;
	cin>>choice;
	 


  switch (choice)
     {
			 case 1 :
						 cout<<"Enter The String : \n ";
						 cin>>str1;
						 cout<<"\nLength Of The String : ";
						 cout<<Length(str1)<<endl;
					 break;
					 
			 case 2 :	 cout<<"Enter The String : \n ";
						 cin>>str1;
						 copy(str1);
					  break;
    

			 case 3	: 
						cout<<"Enter The 1st String : \n ";
						cin>>str1;
						Concat(str1);
	  				    break;

			 case 4 : 
					cout<<"\nEnter First String : \n";
					cin>>str1;
					cout<<"\nEnter Second String : \n";
					cin>>str2;
					ans = Compare(str1,str2);
					if(ans==1)
					{
						cout<<"\nSame Strings !!\n";
					}
					else
					{
						cout<<"\nDifferent Strings !!\n";
					}
					break;
					
			case 5 :cout<<"Enter The String : \n ";
					cin>>str1;
					Reverse(str1);
					break;

	
			 case 0 : break;


			 default :
     					 cout<<"\nEnter The Valid Choice : \n";
						 break;
     }
}while(choice!=0);

     return 0;
}