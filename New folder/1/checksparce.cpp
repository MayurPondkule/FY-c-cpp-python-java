// // CPP code to check if a matrix is
// // sparse.
// #include <iostream>
// using namespace std;
// int matrix[3][3];
 
// const int MAX = 100;
 
// bool isSparse(int array[][MAX], int m, int n)
// {
//     int counter = 0;
 
//     // Count number of zeros in the matrix
//     for (int i = 0; i < m; ++i)
//         for (int j = 0; j < n; ++j)
//             if (array[i][j] == 0)
//                 ++counter;
 
//     return (counter > ((m * n) / 2));
// }
 
// // Driver Function
// int main()
// {
//     // asigning values, I suppose this is done allready.

//     for(int x=0;x<3;x++)
//     {
//         for(int y=0;y<3;y++)
//         {
//             matrix[x][y]=1;
//         }
//     }

//     // showing the matrix on the screen

//     for(int x=0;x<3;x++)  // loop 3 times for three lines
//     {
//         for(int y=0;y<3;y++)  // loop for the three elements on the line
//         {
//             cout<<matrix[x][y];  // display the current element out of the array
//         }
//     cout<<endl;  // when the inner loop is done, go to a new line
//     }
    
//     int array[][MAX] = { { 1, 2, 3 },
//                         { 0, 0, 4 },
//                         { 6, 0, 0 } };
 
//     int m = 3,
//         n = 3;
//     if (isSparse(array, m, n))
//         cout << "Yes";
//     else
//         cout << "No";
// }
















#include<iostream>
using namespace std;
int main () {
   int a[10][10] = { {2, 0, 0} , {0, 3, 8} , {0, 9, 0} };
   int i, j, count = 0;
   int r = 3, c = 3;
   for (i = 0; i < r; ++i) {
      for (j = 0; j < c; ++j) {
         if (a[i][j] == 0)
         count++;
      }
   }
   cout<<"The matrix is:"<<endl;
   for (i = 0; i < r; ++i) {
      for (j = 0; j < c; ++j) {
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
   cout<<"There are "<<count<<" zeros in the matrix"<<endl;
   if (count > ((r * c)/ 2))
   cout<<"This is a sparse matrix"<<endl;
   else
   cout<<"This is not a sparse matrix"<<endl;
   return 0;
}