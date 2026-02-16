// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,3,4,5,6,7};
//     int key=2;
//     for(int i=0; i<=6; i++){
//         if(key==array[i]){
//             cout<<"element is found"<<i<<endl;
//         }
//     }
//     return 0;
    
// }

// binary search in array.
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int size,int target){
//     int start=0; 
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==target){
// return mid;
//         }
//        else if(target>arr[mid]){
//         start=mid+1;
//        }
// else if(target<arr[mid]){
//     end=mid-1;
// }
// // updation of mid
// mid=start+(end-start)/2;
        
//     }
//     return -1;
// }
// int main(){
//     int arr[]={12,23,34,5,6,78};
//     int size=6;
//     int target=34;
//     int ansIndex=BinarySearch(arr, size, target);
//     if(ansIndex==-1){
//         cout<<"element not found"<<endl;
//     }
//     else{
//         cout<<"element found at index"<<ansIndex<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int FirstOccurence(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==target){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(target>arr[mid]){
//             start=mid+1;
//         }
// else if(target<arr[mid]){
//     end=mid-1;
// }

// mid=start+(end-start)/2;
//     }
//     return ans;
// }
// int main(){
//   int arr[]={30,30,30,30,30,30,40,50};
//   int size=8;
//    int target=30; 
//    int ansIndex=FirstOccurence(arr, size, target);
//    if(ansIndex==-1){
//         cout<<"element not found"<<endl;
//     }
//     else{
//         cout<<"element found at index:"<<ansIndex<<endl;
//     }

// }


// find misssing element in the sorted array.
#include<iostream>
using namespace std;
int FindMissingElement(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
    int diff=arr[mid]-mid;
    if(diff==1){ 
        start=mid+1;
    }
    else{
        ans=mid;
        end=mid-1;
    }
    mid=start+(end-start)/2;

    }
    // ye last case ke liye hai jab code last lement ke liye fat jata hai.
    if(ans+1==0){
        return size+1;
    }
    return ans+1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    cout<<"missing element is:"<<FindMissingElement(arr,size);


}


