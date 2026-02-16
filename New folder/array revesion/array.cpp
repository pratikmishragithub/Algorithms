// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={12,23,45,56,78};
// int size=5;
// for(int i=0; i<size;i++){
//     cout<<"element present at:"<<arr[i]<<" ";
//     return 0;
// }

// }

// taking input in array.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int n=5;
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//         cout<<endl;
//     }
//     // for printing the valur of array.
//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
// }

// double the value of array.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     for(int i=0; i<size; i++){
//         arr[i]=2*arr[i];
//     }
//     // for printing the value of array.
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// find ssum of entire  arraay.
// #include<iostream>
// using namespace std;
// void GetSum(int arr[],int size){
//     int sum=0;
//     for(int i=0; i<size; i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum;
// }
// int main(){
//     int arr[]={12,34,45,56,78};
//     int size=5;
//     GetSum(arr,size);
// }

// linear search in  trh array.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={12,334,45,67,80};
//     int size=5;
//     int target=45;
//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             cout<<"element find at index:"<<i;
//             cout<<endl;
//             cout<<"found element is:"<<arr[i];
//         }
//     }
//     return 0;
// }

// array and function.
// find no of zero ansd one count in the aray.
// #include<iostream>
// using namespace std;
// void SortZeroOne(int arr[],int size){
//     int onecount=0;
//     int zerocount=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zerocount++;
//         }
//         if(arr[i]==1){
//             onecount++;
//         }
//     }
//     cout<<"zerocount is:"<<zerocount;
//     cout<<endl;
//     cout<<"onecount is:"<<onecount;
// }
// int main(){
//     int arr[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
//     int size=15;
//     SortZeroOne(arr, size);
//     return 0;
// }

// find minmum no in the array.
// #include<iostream>
// using namespace std;
// int FindMin(int arr[], int size){
//     int minAns=INT8_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i]<minAns){
// minAns=arr[i];
//         }
//     }
//     cout<<"minAns is:"<<minAns;
    
// }
// int main(){
//     int arr[]={20,4,15,2,6,8,11};
//     int size=7;
//     FindMin(arr, size);
// }

// find maximum no in the array.
// #include<iostream>
// using namespace std;
// int FindMax(int arr[], int size){
//     int maxAns=INT8_MIN;
//     for(int i=0; i<size; i++){
//     if(arr[i]>maxAns){
//         maxAns=arr[i];
//     }
//     }
//     cout<<"maxAns is:"<<maxAns;
// }
// int main(){
//     int arr[]={20,70,80,100,400};
//     int size=5;
//     FindMax(arr,size);
// }


// find minmun element in the array.
// #include<iostream>
// using namespace std;
// int FindMin(int arr[],int size){
//     int minAns=INT8_MAX;
//     for(int i=0; i<size; i++){
// if(arr[i]<minAns){
//     minAns=arr[i];
// }
//     }
//     cout<<"minimum no is:"<<minAns;
// }
// int main(){
//     int arr[]={12,4,23,1,45,56,70};
//     int size=7;
//     FindMin(arr,size);
// }

// #include<iostream>
// using namespace std;
// int FindMin(int arr[],int size){
//     int minAns=INT8_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i]<minAns){
//             minAns=arr[i];
//         }
//     }
//     cout<<"minimum ans is :"<<minAns;
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size=8;
//     FindMin(arr, size);
// }

// find maximum in the array.
// #include<iostream>
// using namespace std;
// int FindMax(int arr[], int size){
//     int maxAns=INT8_MIN;
//     for(int i=0;i<size; i++){
//         if(arr[i]>maxAns){
//             maxAns=arr[i];
//         }
//     }
//     cout<<"maximum ans is:"<<maxAns;
// }
// int main(){
//     int arr[]={12,23,45,67,80,100};
//     int size=6;
//     FindMax(arr, size);
// }

// find zero and one count in the arary.
// #include<iostream>
// using namespace std;
// int onecount=0;
//     int zerocount=0;
// void SortZeroOne(int arr[], int size){
    
//     for(int i=0; i,size; i++){
//         if(arr[i]==0){
//             zerocount++;
//         }
//         if(arr[i]==1){
//             onecount++;
//         }
//     }
//     cout<<"zerocount is:"<<zerocount;
// cout<<"one count is :"<<onecount;
// }



// int main(){
//     int arr[]={1,1,1,0,0,0,1,1,0,0,1,0,1};
//     int size=13;
//     SortZeroOne(arr, size);
    

// }

// reverse a array.
// #include<iostream>
// using namespace std;
// void ReverseArray(int arr[],int size){
//     int right=0;
//     int left=arr[size-1];

//     while(right<=left){
//         if(arr[right]<arr[left]){
//             swap(arr[right],arr[left]);
//             right++;
//             left--;
//         }
//     }

// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     ReverseArray(arr, size);
//     // for printing the valuue of array'
//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
// }

// find unique element in the array.
// #include<iostream>
// using namespace std;
// int FindUnique(int arr[],int size){
//     int ans=0;
//     for(int i= 0; i<size;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
    

// }
// int main(){
//     int arr[]={12,23,34,45,12,23,34,45,90};
//     int size=9;
//  int FinalAns= FindUnique(arr, size);
//  cout<<"final ans is :"<<FinalAns;
    
// }
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,20,40,50,60};
    int n=5;
    int key=100;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"target found"<<endl;
             
        }
        else{
            cout<<"target not found"<<endl;
            break;
        }

        
    }
    return 0;
}

