// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size=8;
//     int key=70;
//     for(int i=0; i<size; i++){
//         if (arr[i]==key){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// binary search.
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[], int size,int target ){
// int start=0;
// int end=size-1;
// int mid=(start+end)/2;
// while(start<=end ){

//     // found;
// if(arr[mid]==target){
// return mid;
// }
//  else if(target>arr[mid]){
//     start=mid+1;
// }
//  else if(target<arr[mid]){
//     end=mid-1;
// }
// // updation of mid
// mid=(start+end)/2;
// }

// // puura aray traversed krne ke baad v elemnt nhi milega to return -1 kr denege
// return -1;
// }
// int main(){
// int arr[]={10,20,30,40,50,60,70,80,90};
// int size=9;
// int target=90;
// int ansIndex=BinarySearch(arr, size,target);
// if(ansIndex==-1){
//     cout<<"element not found"<<endl;
// }
// else{
//     cout<<"element found:"<<ansIndex<<" "<<endl;
// }
// return 0;
// }

// first occurance of a number.
// #include<iostream>
// using namespace std;
// int FindFirstOccurence(int arr[],int size, int target){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==target){
//             ans=mid;
//             end=mid-1;
//         }
//         // left part me jayenge

//         else if(target>arr[mid]){
//             start=mid+1;

//         }

//         else if(target<arr[mid]){
//             end=mid-1;
//         }

//         // updation of mid'
//         mid=(start+end)/2;

//     }
//     return ans;
// }
// int main(){
//     int arr[]={10,20,30,30,30,30,40,50};
//     int size=8;
//    int target=30;
//     int ansIndex=FindFirstOccurence(arr, size,target);
//     cout<<"element found:"<<ansIndex;
// }

// last occurence.

// #include<iostream>
// using namespace std;
// int lastOccurence(int arr[],int size, int target){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==target){
//             ans=mid;
//             start=mid+1;
//         }
//         // left part me jayenge

//         else if(target>arr[mid]){
//             start=mid+1;

//         }

//         else if(target<arr[mid]){
//             end=mid-1;
//         }

//         // updation of mid'
//         mid=start+(end-start)/2;

//     }
//     return ans;
// }

// // Total occurence.
// int FindTotalOcccurence(int arr[],int size, int target){
//     int firstoccurence=FindFirstOccurence(arr,size, target);
//     int lastoccurence=lastOccurence(arr, size, target);
//     int total=lastoccurence-firstoccurence+1;
//     return total;
// }
// int main(){
//     int arr[]={10,20,30,30,30,30,30,30};
//     int size=8;
//    int target=30;
//     int ans=FindTotalOccurence(arr, size,target);
//     cout<<"Total occ is:"<<ans<<" ";
// }

// peak element in the array.

// #include<iostream>
// using namespace std;
// int FindPeakElement(int arr[],int size){
//     int s=0;
//     int e=size-1;
//     int ans=-1;

//     while(s<e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]<arr[mid+1]){
//             // part A wale line pe jaiyege
//             s=mid+1;
//         }
//         else{
//             ans=mid;
//             e=mid;

//         }
//     }
// }
// int main(){
//     int arr[]={10,20,50,40,30};
//     int size=5;
//     int AnsIndex=FindPeakElement(arr,size);
//     cout<<"peak element is: "<<arr[AnsIndex];

// }

// find pivot element.
// #include<iostream>
// #include<vector>
// using namespace std;
// int PivotElement(vector<int>&arr){
//     int n=arr.size();
//     int s=0;
//     int e=n-1;

//     while(s<=e){
//             int mid=s+(e-s)/2;
//             if(s==e){
//                 return s;
//             }
//         if( mid-1>=0&&arr[mid]<arr[mid-1]){
//             return mid-1;
//         }
//         else if(mid+1<n&&arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         else if(arr[mid]<arr[s]){
//             e=  mid-1;
//         }
//         else{
//           s=mid+1;
//         }
//         return -1;

//     }
// }

//     int BinarySearch(vector<int>&arr,int s,int e, int target){

//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(arr[mid]==target){
//                 return mid;
//             }
//             if(target>arr[mid]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//         return -1;
//     }

// int main(){
//     int arr[]={12,14,16,2,4,6,8,10};
//     int size=8;
//     int target=14;
//     int BinarySearch(int arr,int size, int target){
//     int AnsIndex=PivotElement(arr,size);

//     // cout<<"pivot element is:"<<arr[AnsIndex];
//     int ans=-1;
//     if(target>=arr[0]&&target<=arr[AnsIndex]){
//        int ans=BinarySearch(arr,0,AnsIndex,target);
//     }
//     else{
//         ans=BinarySearch(arr,AnsIndex+1,size-1,target);

//     }
//     }

//     return ans;
// }

//   find dision operation in c++.
//     #include<iostream>
//     using namespace std;
//     int getQuotient(int divisor,int dividend){
//         int s=0;
//         int e=dividend;
//         int ans=-1;
// while(s<=e){
//     int mid=s+(e-s)/2;
//     if(divisor*mid==dividend){
//         return mid;
//     }
//     else if(divisor*mid<=dividend){
//         ans=mid;
//         s=mid+1;
//     }
//     else{
//         e=mid-1;
//     }

// }
//     return ans;

//     }
//     int main(){
//         int  divisor=7;
//         int dividend=29;
//         int n=-5;
//         // abs function -ve value ko positive kr dega.
//         cout<<abs(n)<<endl;
//          int ans=getQuotient(abs(divisor),abs(dividend));
//         //  if either divisor or dividend is -ve then.
//          if((divisor>0&&dividend<0)||(divisor<0&&dividend>0)){
//             ans=0-ans;
//          }

//         //  This is for zero wala case.

//         //  else if((divisor==0&&dividend>0)){
//         //     ans=0;
//         //  }

//          cout<<"final ans is:"<<ans<<endl;
//     }

// division operation in c++ by help of binary search.
// #include <iostream>
// using namespace std;
// int getQuotient(int divisor, int dividend)
// {
//     int s = 0;
//     int e = dividend;
//     int ans = -1;

//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (divisor * mid == dividend)
//         {
//             return mid;
//         }
//         else if (divisor * mid <= dividend)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {

//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int divisor = -7;
//     int dividend = -29;

//     int ans = getQuotient(abs(divisor), abs(dividend));
//     if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
//     {
//         ans = 0 - ans;
//     }
//     cout << "final ans is:" << ans;
// }

// Bubble sort.

// #include<iostream>
// using namespace std;
// int FindBubbleSort(int arr[],int size){
// for(int i=0;i<size-1; i++){
//     for(int j=0;j<size-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }

//     }

// }
// for(int i=0; i<size; i++){
//         cout<<" "<<arr[i];
//     }

// }
// int main(){
//    int arr[]={5,3,0,-1,33,56,4};
//    int size=7;
//    int ans=FindBubbleSort(arr,size);
//    return 0;
// }

// insertion sort.

// #include <iostream>
// using namespace std;
// int InsertionSort(int arr[], int n)
// {
//     for(int i=1; i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp){
//                 // shift
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<" "<<arr[i];
//     }

// }
// int main()
// {
//     int arr[] = {44, 33, 55, 22, 11};
//     int n = 5;
//     int ans=InsertionSort(arr,n);
//     return 0;
// }

// selection sort

// #include <iostream>
// using namespace std;
// int SelectionSort(int arr[], int n)
// {

//         for(int i=0;i<n-1;i++){
//             int minIndex=i;
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]<arr[minIndex]){
//                   minIndex=j;
//                 }
//             }
//             swap(arr[i],arr[minIndex]);

//     }
//     for(int i=0;i<n;i++){
//                 cout<<" "<<arr[i];

//             }

// }
// int main()
// {
//     int arr[] = {44, 33, 55, 22, 11};
//     int n = 5;
//     int ans=SelectionSort(arr,n);
//     return 0;
// }

//  binary search.
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int size,int target){
//     int s=0;
//     int e=size-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(target>mid){
//             s=mid+1;
//         }
//         else if(target<mid){
//             e=mid-1;
//         }
//         // updation of mid.
//         mid=s+(e-s)/2;

//     }
//         return -1;

// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=6;
//     int target=10;
//   int ansindex=BinarySearch(arr,size,target);
//   if(ansindex==-1){
//     cout<<"element not found:"<<endl;
//   }
//   else{
//     cout<<"element found at:"<<ansindex<<endl;
//   }
//   return 0;

// }

// week 04 revision.
// #include<iostream>
// using namespace std;
// int FirstOccurOfNo(int arr[],int size,int target){
//   int s=0;
//   int e=size-1;
//   int mid=s+(e-s)/2;
//    int ans=-1;
//   while(s<=e){

//     // calculate mid.
//     if(arr[mid]==target){
//       ans=mid;
//       // first occurence left me he milega.
//       e=mid-1;
//     }
//     else if(target>mid){
//       s=mid+1;
//     }
//     else if(target<mid){
//       e=mid-1;
//     }
//     // updation of mid.
//     mid=s+(e-s)/2;

//   }
//   return ans;

// }

// int LastOccurOfNo(int arr[],int size,int target){
//   int s=0;
//   int e=size-1;
//   int mid=s+(e-s)/2;
//    int ans=-1;
//   while(s<=e){

//     // calculate mid.
//     if(arr[mid]==target){
//       ans=mid;
//       // first occurence left me he milega.
//       s=mid+1;
//     }
//     else if(target>mid){
//       s=mid+1;
//     }
//     else if(target<mid){
//       e=mid-1;
//     }
//     // updation of mid.
//     mid=s+(e-s)/2;

//   }
//   return ans;

// }

// int TotaloccurOfNo(int arr[],int size,int target){
//   int firstoccur=FirstOccurOfNo(arr,size,target);
//   int lastoccur=LastOccurOfNo(arr,size,target);
//   int total=lastoccur-firstoccur+1;
// }

// find missing element in sorted array.
// int FindMissingElement(int arr[],int size){
//   int s=0;
//   int e=size-1;
//   int mid=s+(e-s)/2;
//   int ans=-1;
//   while(s<=e){
//     int diff=arr[mid]-mid;
//     if(diff==1){
//       s=mid+1;
//     }
//     else{
//       // ans ko store kiye hai
//       ans=mid;
//       e=mid-1;
//     }
// // update mid.
// mid=s+(e-s)/2;
//   }
//   if(ans+1==0)return size+1;
//   return ans+1;
// }

// int main(){
//   int arr[]={1,2,3,4,5,6,7,8};
//   int size=8;
//   // int target=30;
//   // int ansIndex=FirstOccurOfNo(arr,size,target);
//   // int ansIndex=LastOccurOfNo(arr,size,target);
//   // int ansIndex=TotaloccurOfNo(arr,size,target);
//   cout<<FindMissingElement(arr,size);
// //   if(ansIndex==-1){
// //     cout<<"element not found:"<<endl;
// //   }
// //   else{
// //     cout<<"element found at index:"<<ansIndex;
// //   }
// }

// #include<iostream>
// using namespace std;
// int GetQuotient(int divisor,int dividend){
//   int s=0;
//   int e=dividend;
//   int ans=-1;
//   while(s<=e){
//     int mid=s+(e-s)/2;
//     if(divisor*mid==dividend)return mid;
//     if(divisor*mid<=dividend){
//       ans=mid;//agar less tha to possibility hai ki ans milega isliye store kiye hai ans ko.
//       s=mid+1;
//     }
//     else{
//       e=mid-1;
//     }
//   }
//   return ans;
// }
// int main(){
//   int divisor=4 ;
//   int dividend=-29;
//   int ans=GetQuotient(abs(divisor),abs(dividend));//yaha divisior or dividend ko abs me pass kr denge taki -ve wale case ko v handle kr lega.
//   if(divisor>0&&dividend<0||divisor<0&&dividend>0){//-ve case check kr rahe hai.
// ans=0-ans;//-ve wala case handle kr liye hai.
//   }
//   cout<<"final ans is:"<<ans;

// }

// seraching in nearly sorted array.
// #include<iostream>
// using namespace std;
// int NearlySorted(int arr[],int size,int target){
//   int s=0;
//   int e=size-1;
//   while(s<=e){
//     int mid=s+(e-s)/2;
//     if(arr[mid]==target){
//       return mid;
//     }
//     if(mid-1>=0&&arr[mid-1]==target){
//       return mid-1;
//     }
//     if(mid+1<size&&arr[mid+1]==target){
//       return mid+1;
//     }
//      if(arr[mid]<target){
//       s=mid+2; //right me jao.
//     }
//     else{
//       e=mid-2; //left me jao.
//     }

//   }

//    return -1; //agar loop me search krne pe nahi mila to return -1 kr denge.

// }
// int main(){
//   int arr[]={20,10,30,50,40,70,60};
//   int size=7;
//   int target=10;
//   int ansIndex=NearlySorted(arr,size, target);
//   if(ansIndex==-1){
//     cout<<"element not found"<<endl;
//   }
//   else{
//     cout<<"element found at:"<<ansIndex<<endl;
//   }
// }

// single occurence of element.
// #include<iostream>
// using namespace std;
// int FindSingleElement(int arr[],int n){
//   int s=0;
//   int e=n-1;
//   while(s<=e){
//     int mid=s+(e-s)/2;
//     if(s==e){  //base case.
//       return s;
//     }
//     if(mid&1){  //odd index pe hai mid.
// if(mid-1>=0 && arr[mid]==arr[mid-1]){
//       s=mid+1;
//     }

//      else{
//       e=mid-1;
//     }
//     }

//     else{  //even index pe hai.
//        if(mid<n&& arr[mid]==arr[mid+1]){
//     s=mid+2;
//    }
//    else{
//     e=mid; //ans lost na ho jaye isliye.
//    }

//     }

//   }
//   return -1;
// }
// int main(){
//   int arr[]={1,1,2,2,3,3,4,4,90,6,6,7,7};
//   int n=13;
//   int ansIndex=FindSingleElement(arr,n);
//   cout<<arr[ansIndex];

// }

// bubble sort.
// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// void bubblesort(vector<int>&arr,int size){
//   for(int i=0;i<size-1;i++){
//     for(int j=0;j<size-i-1;j++){
//       if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//       }
//     }
//   }

// }

// selection sort.
// void selectionsort(vector<int>&arr,int size){
//  for(int i=0;i<size-1;i++){
//   int MINIdx=i;
//   for(int j=i+1;j<size;j++){
//     if(arr[j]<arr[MINIdx]){
//       MINIdx=j;  //updation of minIdx.
//     }
//   }
//   swap(arr[i],arr[MINIdx]); //swap kro i ko minidx ke sath.
//  }

// }

// insertion sort.
// void insertionsort(vector<int> &arr, int size)
// {
//   for (int i = 1; i < size; i++)
//   {
//     int key = arr[i]; // key me arr[i] ko store kiye hai.
//     int j = i - 1;
//     while (j >= 0 && arr[j] > key)
//     {
//       arr[j + 1] = arr[j]; // j=1 wale index pe arr[j] daal denge.
//       j--; //j ko peeche shift krenge
//     }
//     arr[j + 1] = key;  //j+1 pe key value ko insert kiye hai. 
//   }
// }

// int main()
// {
//   vector<int> arr = {44, 33, 55, 22, 11};
//   int size = 5;
//   // bubblesort(arr,size);
//   // selectionsort(arr,size);
//   insertionsort(arr, size);
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
// }


//Quick sort.
#include<iostream>
using namespace std;
void QuickSort(int arr[],int start,int end){
  //base case.
  if(start>=end){
    return;
  }
  int i=start-1;
  int j=start;
  int pivot=end;
  while(j<pivot){
    if(arr[j]<arr[pivot]){
      i++;
      swap(arr[i],arr[j]);
    }
    j++;
  }
  //if j is out of bound.
  i++;
  swap(arr[i],arr[j]);

  //recursive call.
  QuickSort(arr,start,i-1);
  QuickSort(arr,i+1,end);
}
int main(){
  int arr[]={19,20,3,4,1,2};
  int size=6;
  int start=0;
  int end=size-1;
  QuickSort(arr,start,end);
  //printing the value of array.
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}