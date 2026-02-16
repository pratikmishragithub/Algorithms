#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            s=mid+1;
        }
        else if(arr[mid]<target){
            e=mid-1;
        }
        // updation of mid.
        mid=s+(e-s)/2;

    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int target=40;
  int ansindex=BinarySearch(arr,size,target);
  if(ansindex==-1){
    cout<<"element not found:"<<endl;
  }
  else{
    cout<<"element found"<<ansindex<<endl;
  }
  return 0;

    
}