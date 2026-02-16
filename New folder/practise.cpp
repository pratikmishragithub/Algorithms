// #include <iostream>
// using namespace std;
// int main()
// {

    // for (int row = 0; row < 6; row++)
    // {
    //     for (int col = 0; col < 6- row ; col++)
    //     {
    //         if (row== 0 || row==6-1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if(col==0||col==6-row-1){
    //                  cout << "* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
        //cout << endl;

        //         cout << "*";
        //     }
        //     for (int col = 0; col < 2 * row + 1; col++)
        //     {
        //         cout << " ";
        //     }
        //     for (int col = 0; col < 4 - row; col++)
        //     {
        //         cout << "*";
        //     }
        //     cout << endl;
        // }
        //  for(int row= 0;row<4 ;row++){
        //     for(int col= 0;col<row+1;col++ ){
        //         cout<<"*";
        //          }
        //     for(int col= 0;col< 2*4-2*row-1 ;col++){
        //         cout<<" ";
        //     }
        //     for(int col= 0;col<row + 1;col++){
        //         cout<<"*";
        //     }
        //          cout<<endl;
        // }
    // int a = 5, b= -5; 
    // cout<<(a&b)<<endl;
    // // int a = 2, b= 3; 
    // cout<<(a|b);
      // cout<<(~b)<<endl;
      // cout<<~(b)<<endl;
      // cout<<~b;
      // cout<<(a^b);
 

    // }
    
    // arrays problems.
    // creating function
// void printarray(int arr[],int size){
//   // int n;
//   // cin>>n;
//   for(int i=0; i<size; i++){
//     cout<<arr[i];
//   }
//   cout<<endl;
// }



// int main(){
// int arr[5]={1,2,3,4,5};
// int size=5;
// // function call
// printarray(arr,size);
// return 0;
// }

// void printarray(int arr[],int size){
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;

// bool linearsearch(int arr[],int size, int target){
//   for(int i=0;i<size; i++){
//     if(arr[i]==target){
//       // element found
//       return true;
// }
// cout<<endl;
//   }
//   // element not found
//   return false;
  
// }


// int main(){
//   int arr[5]={23,90,45,56,78};
//   int size=5;
//   int target=90;
//   // function call
//   bool ans= linearsearch(arr,size,target);
//  if(ans==1){
 
//   cout<<"target found"<<endl;
//  }
//  else{
//   cout<<"target not founnd"<<endl;
//  }
// }


// value of zeros and one is array.
    
// void zerocount(int arr[],int size){
//   // initially zero se start kiye hai kyuki maan liye hai ki box me phle kuch nhi tha.
//   int zerocount=0;
//   int onecount=0;
//   for(int i=0;i<=size; i++){
//     if(arr[i]==0){
//       zerocount++;
//     }
//     if(arr[i]==1){
//       onecount++;
//     }
//   }
//   cout<<"zerocount:"<<zerocount<<endl;
//   cout<<"onecount:"<<onecount<<endl;
// }
// int main(){
//   int arr[15]={1,0,0,1,0,1,0,1,0,1,1,0,0,1,1};
//   // zero=7&one=8
//   int size=15;
//   zerocount(arr,size);
// }


// find min no in the array.
// #include<iostream>
// // int min or int max ki diffination <limit.h> ke under rehta hai.
// #include<limits.h>
// using namespace std;

// int findminimumInArray(int arr[],int size){
// // ans store variable:
// int minAns=INT_MAX;
// for(int i=0;i<=size; i++){
//   if(arr[i]<minAns){
//     // agar min ans se v chota hai to minimum se store krwa do.
//     minAns=arr[i];
//   }
// }
// return minAns;
// }
// int main(){
// int arr[]={10,8,31,4,3,-1,51};
// int size=7;
// int minimum=findminimumInArray(arr,size);
// cout<<"minimum number is:"<<minimum<<endl;
// return 0;
// }



// priting with pairs.
// #include<iostream>
// using namespace std;
// int arr[]={10, 20, 30};
// int n=3;
// int main(){
// for(int i=0; i<n; i++){
//   for(int j=0; j<n; j++){
//     cout<<arr[i]<<" ,"<<arr[j]<<endl;
//   }
// }
// return 0;
// }

// printing all the tripaltes.
// #include<iostream>
// using namespace std;
// int arr[]={10, 20, 30,40 ,50,60};
// int n=6;
// int main(){
// for(int i=0; i<n; i++){ 
//   for(int j=0; j<n; j++){
//     for(int k=0; k<n; k++){
// cout<<arr[i]<<" ,"<<arr[j]<<" ,"<<arr[k]<<endl;
//   }
//     }
    
// }
// return 0;
// }


// printing all zeroes and ones.
// #include<iostream>
// using namespace std;
// void sortZeroOne(int arr[],int size){
//   int zerocount=0;
//   int onecount=0;
//   // for counting all zeroes.
//   for(int i=0;i<size; i++){
//     if(arr[i]==0){
//       zerocount++;
//     }
//     if(arr[i]==1){
//       onecount++;
//     }
//   }
//   // next part is to store all element in  the  array.
//   int index=0;
//   while(zerocount--){
//     arr[index]=0;
//     index++;
//   }
//   while(onecount--){
//     arr[index]=1;
//     index++;
//   }
// }
// int main(){
//   int arr[]={0,0,0,1,1,1,0,0,1,1,1,1,0,0};
//   int size=14;
//   sortZeroOne(arr, size);
//   // for printing the valuse of array.
//   for(int i=0; i<size; i++){
//     cout<<arr[i];
//   }
// }

// shifting of array by 1.
// #include<iostream> 
// using namespace std;
// void RightShift(int arr[],int size){
// int temp=arr[size-1];
// for(int i=size-1;i>=1; i--){
//   arr[i]=arr[i-1];
// }
// arr[0]=temp;

// }
// int main(){
//   int arr[]={10,20,30,40,50,60};
//   int size=6;
//   RightShift(arr,size);
//   // for printing the value of array.
//   for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
//   }

// }

// dynamic memory allocation(vectors in c++).
// #include <iostream>
// #include <vector>

// using namespace std;

// void print(vector<int> v) {
//   cout << "Printing vector " << endl;
//   int size = v.size();
//   for (int i = 0; i < size; i++) {
//     cout << v[i] << " ";
//     // cout << v.at(i) << " ";
//   }
//   cout << endl;
// }

// // void print2(vector<int> v) {
// //   cout << "Printing vector method 2" << endl;
// //   for(auto it:v){
// // 	  cout<<it<<" ";
// //   }
// //   cout << endl;
// // }

// int main() {
// 	vector<int>v;
// 	v.push_back(10);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(40);
// 	print(v);

//   // for deleteing in vector use [pop] operation.

// v.pop_back();
// print(v);
// v.pop_back();
// print(v);
// 	// print2(v);

// // finding 1st or last element in vector.
//   // vector<char> v;
  // v.push_back('a');

  // v.push_back('b');
	// v.push_back('c');

  // v.push_back('d');

  // cout << "Front element: " << v[0] << endl;
  // cout << "Front element: " << v.front() << endl;
  // cout << "End Element: " << v[v.size() - 1] << endl;
  // cout << "End Element: " << v.back() << endl;

  // // vector initialization
  // vector<int>arr; // default with no data, 0 size
  // vector<int>arr2(5, -1); // init with n size with specific data
  // // arr2.push_back(50);
  // // print(arr2);

  // vector<int>arr3 = {1,2,3,4,5};
  // // arr3.pop_back();
  // // print(arr3);

  // vector<int>arr4{1,2,3,4,5};
  // // print(arr4);

  // // how to copy vector
  // vector<int> arr5 = {1,2,3,4,5};
  // vector<int>arr6(arr5);
  // print(arr6);

  //  // in vector, dont tell size of vector.
  //  // just keep inserting, i will manage the allocations.
  //  vector<int> v; // array hi hai.

   // insert
  //  int n;
  //  cin >> n;
  //  for (int i = 0; i < n; ++i) {
  //    int d;
  //    cin >> d;
  //    v.push_back(d);
  //  }
  //  print(v);

  // // I want to clear the vector
  // v.clear();
  // v.push_back(50);
  //  print(v);

  // // pop
  // v.pop_back();
  //   print(v);
// } 
// #include<iostream>
// using namespace std;
// void RightShift(int arr[], int size){
//   int temp=arr[size-1];
//   for(int i=size-1; i>=1;i--){
//     arr[i]=arr[i-1];
//   }
//   arr[0]=temp;
// }
// int main(){
//   int arr[]={20,30,40,50,60};
//   int size=5;
//   RightShift(arr, size);
//   for(int i=0;i<size; i++){  
//     cout<<arr[i]<<" ";
//   }
// }

// topic 2D array.
// in 2D array first we writw rows then column.
// calling of array by the help pf 2 array.
// #include<iostream>
// using namespace std;
// void PrintArray(int arr[][4],int row, int col){
//   for(int i=0;i<row; i++){
//     for(int j=0;j<col; j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }
// int main(){
//   // iniitalse of array.
//   // int arr[3][4]= {{1,2,3,4},
//   // {5,6,7,8},
//   // {9,8,7,6}
//   // };

//   // Taking of input in the array.
//   int arr[3][4];
//   int row=3;
//   int col=4;
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cout<<"Enter the input of row index:"<<i<<"Enter the input of column index:"<<j<<endl;
// cin>>arr[i][j];
//     }
//   }
//   PrintArray(arr,row, col);
//   return 0;
// }


// Searching of element.
// #include<iostream>
// using namespace std;
// bool FindTarget(int arr[][4], int row, int col,int key){
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       if(arr[i][j]==key){
//         return true;
//       }
      
//     }
//   }
//   return false;
  
// }
// int main(){
//   int arr[3][4]={
//     {1,2,3,4},
//     {5,6,7,8},
//     {70,80,90,100}
//   };
// int row=3; 
// int col=4;
// int key=110;
// cout<<"found or not:"<<FindTarget(arr,row, col,key)<<endl; 
// return 0;
// }

// searching of element in array of 2D.
// #include<iostream>
// using namespace std;
// bool FindTarget( int arr[][4],int row,int col,int key){
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){

//   if(arr[i][j]==key){
//     return true;
//   }
//     }
//   }

//     return false;
  

// }
//  int main(){
//   int arr[3][4]={
//     {1,2,3,4},
//     {5,5,6,7},
//     {80,34,90,50},
//   };
//   int row=3;
//   int col=4;
//   int key=8;
  
//    cout<<"found or not:"<<FindTarget(arr,row, col,key)<<endl; 
// return 0;
//  }

// Finding of maximunm or minimum element in the array.
// #include<iostream>
// #include<limits.h>
// using namespace std; 

//   int FindMax(int arr[][4],int row, int col){
//     int maxAns=INT_MIN;
//     for(int i=0; i<row; i++){
//       for(int j=0; j<col; j++){
//       if(arr[i][j]>maxAns){
// maxAns=arr[i][j];
//       }

//     }
//     }
//     return maxAns;
//   }

// int main(){
//   int arr[3][4]={
//     {1,2,3,4},
//     {5,6,7,8},
//     {9,10,11,12},

//   };
//   int row=3;
//   int col=4;
//  cout<<"find the max no:"<<FindMax(arr, row, col)<<endl;
// return 0;

// }


// printing sum of all element.
// #include<iostream>
// using namespace std;

// void GetSum(int arr[][3], int row, int col){
  
//   for( int i=0; i<row; i++){
//   int sum=0;
//     for(int j=0;j<col; j++){
//  sum=sum+arr[i][j];

//     }
//     cout<<sum<<endl;
//   }

// }
//  int main(){
//   int arr[2][3]={
//     {20,30,40},
//     {50,60,70},

//   };
//   int row=2;
//   int col=3;
//   GetSum(arr,row, col);

//  }



// 

// #include<iostream>
// #include<limits.h>
// using namespace std;
// bool GetMax(int arr[][3], int row, int col){
//    int MaxAns=INT_MIN;
//    for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       if(arr[i][j]>MaxAns){
//       MaxAns=arr[i][j];
//             return true;
//       }

//     }
//    }
//    return false;
// }
// int main(){
//   int arr[3][3]={
// {1,2,3},
// {3,4,5},
// {10,23,90},

//   };
//   int row=3;
//   int col=3;
// GetMax(arr, row, col);
// cout<<GetMax;
// }


//find first occurence of elemnt.
// #include<iostream>
// using namespace std;
// int FirstOccurence(int arr[],int size,int target){
//   int start=0;
//   int end=size-1;
//   int mid=start+(end-start)/2;
//   int ans=-1;
//   while(start<=end){
//     if(arr[mid]==target){
//       ans=mid;
//       // go to left paart
//       end=mid-1;
//     }
//     else if(target>arr[mid]){
//       start=mid+1;
//     }
//     else if(target<arr[mid]){
//       end=mid-1;
//     }
//     // updation of mid.
//     mid=start+(end-start)/2;
//   }
//   return ans;
// }
// int main(){
//   int arr[]={10,20,30,30,30,30,30,40,50,60};
//   int size=10;
//   int target=30;
//   int AnsIndex=FirstOccurence(arr,size,target);
//   cout<<"ans is at the palace:"<<AnsIndex;

// }

// find last occurence.

#include<iostream>
using namespace std;
int LastOccurence(int arr[],int size,int target){
  int start=0;
  int end=size-1;
  int mid=start+(end-start)/2;
  int ans=-1;
  while(start<=end){
    if(arr[mid]==target){
      ans=mid;
      // go to right paart
      start=mid+1;
    }
    else if(target>arr[mid]){
      start=mid+1;
    }
    else if(target<arr[mid]){
      end=mid-1;
    }
    // updation of mid.
    mid=start+(end-start)/2;
  }
  return ans;
}
int main(){
  int arr[]={10,20,30,30,30,30,30,40,50,60};
  int size=10;
  int target=30;
  int AnsIndex=LastOccurence(arr,size,target);
  cout<<"ans is at the palace:"<<AnsIndex;

}
