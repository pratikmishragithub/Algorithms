#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    // cretaion of box.
    int leftlen=mid-s+1;
    int rightlen=e-mid;
    // creation of array.
    int*leftarray=new int[leftlen];
    int *rightarray=new int[rightlen];
    // k=s staring index of original array.
    int k=s;
    for(int i=0; i<leftlen;i++){
        arr[i]=arr[k];
        k++;
    }
     k=mid+1;
    for(int i=0;i<rightlen;i++){
        arr[i]=arr[k];
        k++;
    }
    // actual merge here.
    int leftindex=0;
    int rightindex=0;
    int mainArrayIndex=s;
    while(leftindex<leftlen&&rightindex<rightlen){
        if(leftarray[leftindex]<rightarray[rightindex]){
            arr[mainArrayIndex]=leftarray[leftindex];
            leftindex++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex]=rightarray[rightindex];
            mainArrayIndex++;
            rightindex++;
        }
    }
    // single case.
    while(rightindex<rightlen){
        arr[mainArrayIndex]=rightarray[rightindex];
        mainArrayIndex++;
        rightindex++;
    }
  while(leftindex<leftlen){
        arr[mainArrayIndex]=leftarray[leftindex];
        mainArrayIndex++;
        leftindex++;
    }
    delete[]leftarray;
    delete[]rightarray;


}
void mergesort(int arr[],int s,int e){

if(s>=e){
    return;
}
// recrsion.
int mid=s+(e-s)/2;
mergesort(arr,s,mid);
mergesort(arr,mid+1,e);
merge(arr,s,e);

}
int main(){
    int arr[]={1,2,7,6,5,8,9};
    int size=7;
    int s=0;
    int e=size-1;
   
   
     // before merge
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    //   mergesort(arr,s,e);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
      }
}