#include<iostream>
// // code of linear search.
using namespace std;
int main(){
    int array[]={1,2,22,33,44,55};
    int key=44;
    for(int i=0;i<=5; i++){
        if(key==array[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}

// -------->pproblem pratice of pattern printing.
// 1st pattern is to print the sqaure pattern.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
 
// ------>pattern printing of rectangle.
//  #include<iostream>
// using namespace std;
// int main(){
//     // int n;
//     // cin>>n;
//     for(int i=0; i<=2; i++){
//         for(int j=0; j<=5; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ---------->Hollow rectangle.
// for(int row=0;row<5; row++){
//     for(int col=0; col<5; col++){
//         if(row==0||row==4){
//             cout<<"*";
//         }
//             else{
//                 if(col==0||col==4){
//                     cout<<"*";
//                 }
//             else{
//                 cout<<" ";
//             }

    
//         }
//     }
//     cout<<endl;
// }
// return 0;

// --------------->question 4. half pyramid.
// for(int row=0; row<5; row++){
//     for(int col=0; col<row+1; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;


// }

// -------------->inverted half pyramid.
// for(int row=0; row<5; row++){
//     for(int col=0; col<5-row; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;


// }


// taking input from the user and print the value of sum.
// int arr[5];
// int n=5;
// for(int i=0; i<n;i++){
//     // Taking input from user.
//     cin>>arr[i];
// }
    
//  cout<<endl;


// // initialising sum.
// int sum=0;
// for(int i=0; i<n;i++){
// sum=sum+arr[i];
// }

// // printing the sum.
// cout<<"printing sum"<<sum;
// return 0; 
// }

// linear search in array.
// int arr[5]={12,23,45,67,90};
// int key=9;
// int n=5;
// // bool is used for giving true and false value.
// // 0---> not found,1----->found.
// bool flag=0;
// for(int i=0;i<n; i++){
//     if (arr[i]==key){
//         flag=1;
//         break;
//     }
// }
//     if(flag==1){
//         cout<<"element found";
//     }
//     else{
//         cout<<"element not found"<<endl;
//     }
    


// return 0;


// making of function -------->>>>>
// void printarray(int array[], int size){



// for( int i=0; i<=n; i++;){
//   cout<<arr[i]<<" ";  

// }
// cout<<endl;

// }
// int bool(in)

// }