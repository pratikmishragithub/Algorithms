#include<iostream>
using namespace std;

int pivot(int arr[],int size){
    int cs = 0;
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum+=arr[i];
    }

    for(int i =0;i<size;i++){
        int ls = cs;
        int rs = sum - cs -arr[i];
        if(ls ==rs){
            return i;
        }
        cs +=arr[i];
    }
}

int main(){

      int anish[6]={1,2,3,6,3,3};
      cout<<pivot(anish,6);
    return 0;
}


