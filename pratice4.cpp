// #include<iostream>
// using namespace std;
// void printArray(int arr[][4],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     // create an 2d array
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int row = 3;
//     int col = 4;
//     printArray(arr,row,col);

// }

// column wise acess of array elements
//  #include<iostream>
// using namespace std;
// void printArray(int arr[][4],int row,int col){
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     // create an 2d array
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int row = 3;
//     int col = 4;
//     printArray(arr,row,col);

// }

// taking inputs in 2d array
//  #include<iostream>
// using namespace std;
// void printArray(int arr[3][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){

//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     // create an 2d array
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cout<<"enter the input for row index:"<<i<<"column index:"<<j<<endl;
//         cin>>arr[i][j];
//     }
//     }
//   printArray(arr,row,col);
// }

// searching of elements in array...//
// #include<iostream>
// using namespace std;
// bool findTarget(int arr[3][4],int row,int col,int target){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==target){
//                 // if found, return true
//                 return true;
//             }
//         }
//     }
//     // not found
//     return false;
// }
// int main(){
//     // create an 2d array
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,1,11}};
//     int row = 3;
//     int col = 4;
//     int target = 110;
//     cout<<"found or not:"<<findTarget(arr,row,col,target)<<endl;
// }

// find maximum number in an array
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int findMax(int arr[3][4], int row, int col)
// {
//     int maxAns = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] > maxAns)
//             {
//                 maxAns = arr[i][j];
//             }
//         }
//     }
//     return maxAns;
// }
// int main()
// {
//     // create an 2d array
//     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 1, 11}};
//     int row = 3;
//     int col = 4;
//     cout << "printing the max no.: " << findMax(arr, col, row) << endl;
//     return 0;
// }


// swapining of array.
// #include<iostream>
// using namespace std;
// void RightShift(int arr[], int size){
//     int temp=arr[size-1];
//     for(int i=size-1; i>=1; i--){
//         swap(arr[i],arr[i-1]);
//         int temp=arr[0];

//     }
// }
// int main()
// {
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     RightShift(arr,size);
//     // for printing the value of array.
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream> 
// using namespace std; 
// int FindUnique(int arr[],int size){
//     int ans=0;
//     for(int i=0; i<size; i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[]={12,23,34,45,12,34,23,45,90};
//     int size=9;
//   int Finalans=FindUnique(arr, size);
//   cout<<"finalans is:"<<Finalans;
// }


// pratice.

