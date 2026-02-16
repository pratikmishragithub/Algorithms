#include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
// using namespace std;

// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int partition(int A[],int l,int h){
//     int pivot=A[l];
//     int i=l,j=h;
//     do{
//         do{i++;}while(A[i]<=pivot);
//         do{j--;}while(A[j]>pivot);

//         if(i<j){
//             swap(&A[i],&A[j]);
//         }
//     }while(i<j);
//     swap(&A[j],&A[l]);

//     return j;
// }

// void Quich_Short(int A[],int l,int h){
//     int j;

//     if(l<h){
//         j=partition(A,l,h);
//         Quich_Short(A,l,j);
//         Quich_Short(A,j+1,h);
//     }
// }

// void display(int A[]){
//     for(int i=0;i<10;i++){
//         cout<<" "<<A[i];
//     }
// }

// int main(){
//     int A[]={3,53,523,65,75,78,56,70,655,999,INT32_MAX};

//     display(A);

//     Quich_Short(A,0,10);

//     cout<<"\n\nShorted array is:\n";

//     display(A);

//     return 0;
// }

using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main() {

    int arr[10] = {2,4,1,6,9,9,9,9,9,9};
    int n = 10;

    quickSort(arr, 0, n-1);
     cout<<"sorted array ";
    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}
