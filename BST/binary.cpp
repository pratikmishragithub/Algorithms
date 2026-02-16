#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if (arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            s = mid +1;
        }
        else{
           e = mid -1;
        }
        mid = s +(e-s)/2;
    }
}

int main(){

     int anish[5]={1,2,3,4,5};
     cout<<binary(anish,5,2);
    return 0;
}