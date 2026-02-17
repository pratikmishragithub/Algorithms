// #include<iostream>
// using namespace std;
// int zerocount=0;
// int onecount=0;
// void ZeroOne(int arr[],int size){
// for(int i=0;i<size;i++){
//     if(arr[i]==0){
//         zerocount++;
//     }
//     if(arr[i]==1){
//         onecount++;
//     }

// }
// cout<<zerocount<<endl;
// cout<<onecount;
// }
// int main(){
//     int arr[]={1,1,1,0,0,0,0,1,1,0,0,1,0,1,1,1,1};
//     int size=17;
//     ZeroOne(arr,size);

// }

// #include<iostream>
// using namespace std;
// void ArrangeNo(int arr[], int size){
//     int index=0;
//     int j=0;
//     for(int index=0; index<size; index++ ){
//         if(arr[index]<0){
//             swap(arr[index],arr[j]);
//             j++;

//         }
    
//     }
// }
// int main(){
//     int arr[]={-21,34,56,-45,-90};
//     int size=5;
//     ArrangeNo(arr,size);
//     // for printing the value of arary.
//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
// }

// stl function.
// #include<iostream>
// using namespace std;
// int PrintMaximum(int n1,int n2,int n3){
//     int ans1=max(n1,n2);
//     int finalAns=max(ans1,n3);
// }
// int main(){
//    int result= PrintMaximum(4,5,90);
//    cout<<"finalresult is:"<<result;
// }

// #include<iostream>
// using namespace std;
// bool CheckPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
// bool ans=CheckPrime(1);
// if(ans){
//     cout<<" prime no:"<<endl;
// }
// else{
//     cout<<"not a prime no:"<<endl;
// }
// return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int arr[],int size){
//     int s=0;
//     int e=size-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={12,34,56,78,90};
//     int size=5;
//     reverse(arr,5);
//     print(arr,5);
// }



//  find missing element in the array.
#include<bits/stdc++.h>
using namespace std;
int findMissing(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==mid+1){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return s+1;
}
int main(){
    int arr[]={1,2,3,4,6,7,8,9,10};
    int size=9;
   int Ans= findMissing(arr,9);
   cout<<Ans;
}