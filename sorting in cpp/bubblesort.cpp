#include <iostream>
using namespace std;

int binarySearch(int a[],int x,int low,int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] == x)
      return mid;

    if (a[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
   int n;
   cout<<"enter no of elements in array"<<endl; 
   cin>>n;
   int a[n];
   for(int k=0;k<n;k++){
       cin>>a[k]; 
   }
 
   int i, j,temp,pass=0;

   cout<<endl;
   for(i = 0; i<n; i++) {
       for(j = i+1; j<n; j++) {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<n; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;

int x;
cout<<"enter element to search: ";
cin>>x; 
int result = binarySearch(a, x, 0, n - 1);
  if (result == -1)
      cout<<"Not found"<<endl; 
  else
      cout<<"Element is found at index: "<<result<<endl; 

    return 0;
}