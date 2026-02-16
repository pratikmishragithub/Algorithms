// Conversion of binary to deciaml.
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
// //    this ans is variable wheree we store the data.
// int ans=0;
// int i=0;
//    while(n !=0){
//     int bit=n&1;
//     ans=(bit*pow(10,i))+ans;
//     n=n>>1;
//     i++;

//    }
//    cout<<"Answer is "<<ans<<endl;

// }

// -------------->>>switch case statement.
// #include<iostream>
// using namespace std;
// int main(){
//     char ch='1';
//     int num=1;
//    cout<<endl;
//    switch(ch){
//     case 1:cout<<"first"<<endl;
//    //  break is used for breaking the satement.
//     break;
//     case '1':switch(num){
//       // switch case ke under switch case nasted switch case.
//       case 1:cout<<" The value of number is "<<num<<endl;
//       break;
//     }
//     break;
//     case 3:cout<<"third"<<endl;
//     break;
//     default:cout<<"it is defaulat case"<<endl;

//    }
//    return 0;
// }

// -------------->>>>>>mini calulator.
// #include<iostream>
// using namespace std;
// int main(){
//    int a,b;
// cout<<"enter the value of a"<<endl;
// cin>>a;
//    cout<<"enter the value of b"<<endl;
// cin>>b;
//    char op;
//    cout<<"enter the value of operend"<<endl;
//    cin>>op;
//    switch(op){
//       case '+':cout<<(a+b)<<endl;
//       break;

// case '-':cout<<(a-b)<<endl;
//       break;

// case '*':cout<<(a*b)<<endl;
//       break;
//       case '/':cout<<(a/b)<<endl;
//       break;

// case '%':cout<<(a%b)<<endl;
//       break;
//       default:cout<<"its a default case"<<endl;
//    }

// }

// ------------------> functions
// #include<iostream>
// using namespace std;
// void printA(){
//    // for(int i=0;i<=10; i++){
//    cout<<"i am inside A"<<endl;
// }

// int main(){
//    cout<<"Hi"<<endl;
//    // This printA is function call
// printA();
// }

// void printline(){
//    for(int i=0; i<=10; i++){
//       cout<<"sunadr ko sunadari pasand hai"<<endl;
//    }
//    cout<<endl;
// }
// int main(){
//    // function call.
// printline();
// }
// void printsum(int a,int b,int c){
//    // cin>>a;
//    // cin>>b;
//    // cin>>c;
//    int sum=a+b+c;
//    cout<<sum;
// }
// int main(){
// printsum(12,13,15);
// }

// Even or odd functin using class.
// void printnum(int num){
//    if (num%2==0){
//       cout<<"even no";
//    }
//    else{
//       cout<<"odd no";
//    }

// }
// int main(){
//  printnum(17);
// }

// ------------>>Find maximum of three no.
// void printmaximum(int num1,int num2, int num3){
//    if(num1>=num2&&num1>=num3){
//       cout<<"maximum is num1"<<endl<<num1;
//    }
//    else if(num2>=num3&&num2>=num3){
//       cout<<"maximum is num2"<<endl<<num2;
//    }
//    else{
//       cout<<"maximum is num 3"<<endl;
//    }
// }
// int main(){
//    printmaximum(10,10,70);
// }

// ------------->>>counting froom 1 to n.
// void printnumber(int n){
//    for(int i=0; i<=n; i++){
//       cout<<i<<" ";
//    }
//    cout<<endl;
// }
// int main(){
// printnumber(200);
// }

// ------------->>>check no is  prime or not.
// void printnumber(int n){
//    // for(int i=2 ; i<=n; i++){
//       if((n%1==0)&&(n%n==0)){
//          cout<<"no is prime";
//       }
//       else{
//          cout<<"no is not prime";
//       }
//    }
// // }
// int main(){
//    printnumber(10);
// }

// --------->>>>>....table of any no.
// int main(){
//    int n;
//    cin>>n;
//    for(int i=1; i<=10; i++){
//       cout<<n*i<<" ";
//    }
//    cout<<endl;

// return 0;}

// sum of all no between 1 to n.
// void addnumber(int n){
//    int sum=(n*(n+1))/2;
//    if(n%2==0){
//    cout<<sum;
// }
// }
// int main(){
//    addnumber(10);
// }
// //

// ----------->>>>>>>shifting operator.
// int main(){
// // int num=-7;
// // int ans=(num>>2);
// // cout<<ans;
// int num =2;
// // cout<<++num;
// // cout<<endl;
// cout<<(++num)*(num++)<<endl;

// // varify kr lete hai hai ki baad me update krta hai ki nhi.
// cout<<num;

// reverse an array.
// #include<iostream>
// using namespace std;
// void reversearray(int arr[], int size){
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//  int arr[6]={10,20,30,40,50,60};
//  int size=6;
//  reversearray(arr,size) ;

// return 0;
// }

// refrence varaiable.
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int&k=a;
//     int&d=a;
//     cout<<"k:"<<k<<" "<<"d:"<<d;
//     k++;

//     // int&k=a;
//     // int&d=a;
//     cout<<"k:"<<k<<" "<<"d:"<<d;
//     return 0;
// }

// switch case.
// int main(){

//     switch
//     {
//     case

//         break;

//     default:
//         break;
//     }
// }

// addition of all element in the aaray.
// #include <iostream>
// using namespace std;
// int sum=0;
// int FindAdd(int arr[],int size){
// for(int i=0;i<size;i++){
//     sum=sum+arr[i];
// }
// return sum;
// }

// int main() {
// int arr[]={10,20,30,40,50};
// int size=5;
// int FinalAns=FindAdd(arr,size);
// cout<<"finalans"<<FinalAns;
//     return 0;
// }

// find unique element in  the array.
// #include<iostream>
// using namespace std;
// int ans=0;
// int FindUnique(int arr[],int size)
// {
//    for(int i=0; i<size; i++){
//       ans=ans^arr[i];
//    }
//    return ans;

// }

// int main(){
//    int arr[]={12,23,12,23,45,45,90};
//    int size=7;
//    // int FindUnique(arr,size);
//    int FinalAns=FindUnique(arr,size);
//    cout<<"finalans is:"<<FinalAns;
// }

// Linear search of element.
// #include<iostream>
// using namespace std;
// int main(){
//    int array[]={1,2,22,33,44,55};
//    int size=6;
//    int key=44;
//    for(int i=0;i<size; i++){
// if(key==array[i]){
//    cout<<"index of array:"<<i<<endl;

// }
//    }
//    return 0;
// }

// Searching of elemnt by recurssive method.
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int size,int key){
//    int start=0;
//    int end=size-1;
//    int mid=start+(end-start)/2;
//    while(start<=end){
//       if(arr[mid]==key){
//          return mid;
//       }

//    // go to right part.
//    if(key>arr[mid]){
//       start=mid+1;
//    }
//    else{
//       end=mid-1;
//    }
//    mid=start+(end-start)/2;
//    }
//    return-1;

// }

// int main(){
//    int even[6]={2,4,6,8,10,12};
//    int odd[5]={3,8,11,14,16};
//    int evenIndex=BinarySearch(even,6,10);
//    cout<<"index of 10 is:"<<evenIndex<<endl;
// }

// #include<iostream>
// using namespace std;
// int ans=0;
// int FindUnique(int arr[],int size){
//    for(int i=0;i<size; i++){
//       ans=ans^arr[i];
//    }
//    return ans;
// }
// int main(){
//    int arr[]={12,23,34,12,34,23,90};
//    int size=7;
//    int FinalAns=FindUnique(arr,size);
//    cout<<"final ans is:"<<FinalAns;
// }

// searching of element using binary search
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int size, int target){
//    int start=0;
//    int end=size-1;
//    int mid=start+(end-start)/2;
//    while(start<=end){
//       if(arr[mid]==target){
//          return mid;

//       }
//       else if(arr[mid]<target){
//          start=mid+1;
//       }
//       else if(arr[mid]>target){
//          end=mid-1;
//       }
//       // updation of mid
//       mid=start+(end-start)/2;
//    }
//    return -1;

// }
// int main(){
//    int arr[]={10,20,30,40,50,60};
//    int size=5;
//    int target=50;
//    int AnsIndex=BinarySearch(arr,size,target);
//    if(AnsIndex==-1){
//       cout<<"element not found"<<endl;
//    }
//    else{
//       cout<<"element found"<<AnsIndex;
//    }
//    return 0;

// }

// first occurence of a number.
// #include<iostream>
// using namespace std;
// int FirstOccurence(int arr[],int size,int target){
//    int start=0;
//    int end=size-1;

//    int ans=-1;
//    while(start<=end){
//       int mid=start+(end-start)/2;
//       if(arr[mid]==target){
//          ans=mid;
//          end=mid-1;
//       }
//       else if(arr[mid]<target){
//          start=mid+1;
//       }
//       else if(arr[mid]>target){
//          end=mid-1;
//       }

//    }
//    return ans;

// }
// int main(){
//    int arr[]={10,20,30,30,30,30,40,50};
//    int size=8;
//    int target=30;
//    int AnsIndex=FirstOccurence(arr,size,target);
//    if(AnsIndex==-1){
//       cout<<"element not found"<<endl;
//    }
//    else{
//       cout<<"element found"<<AnsIndex;
//    }

// }

// find last occurence.
// #include<iostream>
// using namespace std;
// int lastOccurence(int arr[],int size,int target){
//    int start=0;
//    int end=size-1;
//    int ans=-1;

//    while(start<=end){
//       int mid=start+(end-start)/2;
//       if(arr[mid]==target){
//          ans=mid;
//          start=mid+1;

//       }
//       else if(arr[mid]<target){
//          start=mid+1;
//       }
//       else if(arr[mid]>target){
//          end=mid-1;
//       }
//    }
//    return ans;
// }

// int main(){
//    int arr[]={10,20,30,30,30,30,40,50};
//    int size=8;
//    int target=30;
//    int AnsIndex=lastOccurence(arr,size,target);
//    if(AnsIndex==-1){
//       cout<<"element not found"<<endl;
//    }
//    else{
//       cout<<"element found"<<AnsIndex;
//    }

// }

// find missing element in the sorted array.
// #include<iostream>
// using namespace std;
// int FindMissingElement(int arr[],int size){
//    int start=0;
//    int end=size-1;

//          int ans=-1;
//    while(start<=end){
//                int mid=start+(end-start)/2;
//       int diff=arr[mid]-mid;

//       if(diff==1){
//          start=mid+1;
//       }
//       else{
//          ans=mid;
//          end=mid-1;
//       }

//    }
//    return ans;

// }
// int main(){
//    int arr[]={1,2,3,4,6,7,8,9};
//    int size=8;
//    int AnsIndex=FindMissingElement(arr,size);
//    cout<<"missing element is"<<arr[AnsIndex];
//    return 0;

// }

// all sorting algorithm.
// bubble sort.
// #include<iostream>
// using namespace std;
// int FindBubbleSort(int arr[],int n){
//    for(int i=1;i<n;i++){
//       int j=i-1;
//       for(;j>=0;j--){
//          if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);

//          }
//       }

//    }
//    for(int i=0;i<n;i++){
//          cout<<" "<<arr[i];
//       }
// }
// int main(){
//    int arr[]={5,4,3,2,1};
//    int n=5;
//    int ans=FindBubbleSort(arr,n);
// }

// insertion sort.

// #include <iostream>
// using namespace std;
// int FindInsertionSort(int arr[], int n)
// {
//    for (int i = 1; i < n; i++)
//    {
//       int temp = arr[i];
//       int j = i - 1;
//       for (; j >= 0; j--)
//       {
//          if (arr[j] > temp)
//          {
//             arr[j + 1] = arr[j];
//          }
//          else
//          {
//             break;
//          }
//       }
//       arr[j + 1] = temp;
//    }
//    for (int i = 0; i < n; i++)
//    {
//       cout << " " << arr[i];
//    }
// }
// int main()
// {
//    int arr[] = {10, 1, 7, 4, 8, 2, 11};
//    int n = 7;
//    int ans = FindInsertionSort(arr, n);
// }

// selection sort.
//   #include<iostream>
//   using namespace std;
//   int SelectionSort(int arr[],int size ){
//    for(int i=0;i<size-1; i++){
//       int MInIndex=i;
//       for(int j=i+1;j<size;j++){
//          if(arr[j]< arr[MInIndex]){
//             MInIndex=j;
//          }
//       }
//       swap(arr[i],arr[MInIndex]);
//    }
//    for(int i=0; i<size;i++){
//       cout<<" "<<arr[i];
//    }
//   }
//   int main(){
//    int arr[]={44,33,55,22,11};
//    int size=5;
//    int ans=SelectionSort(arr,size);

//   }

// week 5 char array ans strings.
// #include<iostream>
// #include<string.h>
// using namespace std;
// int findlength(char ch[],int size){
//    int length=0;
//    for(int i=0;i<size;i++){
//       if(ch[i]=='\0'){
//          break;
//       }
//       else{
//          length++;
//       }
//    }
//    return length;
// }
// int main(){

// // length of char array.
// char ch[100];
// // cin.getline(ch,100);
// cin>>ch;
// int len=findlength(ch,100);
// cout<<"length of string is:"<<len<<endl;
// cout<<"printing length:"<<strlen(ch)<<endl;

// char ch[100];
// cout<<"enter your namme"<<endl;
// cin.getline(ch,99);
// cout<<"printing the value of ch :"<<ch<<endl;

// printing through loop
// for(int i=0;i<10;i++){
//    cout<<"index is:"<<i<<" "<<ch[i]<<endl;
// }
// char  temp=ch[6];
// int value=(int)temp;
// cout<<"value aat:"<<value;
//   return 0;
// }

// reverse of an character.
// #include<iostream>
// using namespace std;

//    void findreverse(char ch[],int size){
// int s=0;
// int e=size-1;
// while(s<=e){

//       swap(ch[s],ch[e]);
//          s++;
//    e--;
//    }

// }
// int findlength(char ch[],int size){
//    int length=0;
//    for(int i=0;i<size;i++){
//       if(ch[i]=='\0'){
//          break;
//       }
//       else{
//          length++;
//       }
//    }
//    return length;

// }

// int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    cout<<"print name:"<<ch<<endl;
//    int len=findlength(ch,100);
// findreverse(ch,len);
// cout<<"printing after reverse:"<<ch<<endl;
// return 0;

// }

// convert lower case to upper case.
// #include<iostream>
// using namespace std;
// void convertTouppercase(char ch[],int size){
//     int index=0;
//     while(ch[index]!='\0'){
//       char currcharacter=ch[index];
//       // check if lowercase then convert into uppercase.
//       if(currcharacter>='a'&&currcharacter<='z'){
//          ch[index]=currcharacter - 'a'+'A';
//       }
//       index++;
//     }
// }
// int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    cout<<"before the value:"<<ch<<endl;
//    convertTouppercase(ch,100);
//    cout<<"printing the value after:"<<ch;
// }

// convert lower to upper case.
// #include<iostream>
// using namespace std;
// void convertTouppercase(char ch[],int size){
// int index=0;
// while(ch[index]!='\0'){
//    char currcharacter=ch[index];
//    // check if lower case then convert to upper case.
//    if(currcharacter>='a'&&currcharacter<='z'){
//       ch[index]=currcharacter-'a'+'A';
//    }
// index++;

// }
// }

// int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    cout<<"value at before"<<ch<<endl;
//    convertTouppercase(ch,100);
//    cout<<"value after"<<ch<<endl;
//    return 0;
// }

// reverse the character
// #include<iostream>
// using namespace std;
//  GetReverse(char ch[],int size){
//    int s=0;
//    int e=size-1;
//    while(s<=e){
//       swap(ch[s],ch[e]);
//       s++;
//    e--;
//    }

// }
// int findlength(char ch[],int size){
//    int length=0;
//    for(int i=0;i<size;i++){
//       if(ch[i]=='\0'){
//          break;
//       }
//       else{
//          length++;
//       }
//    }
//    return length;
// }
// int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    int len= findlength(ch,100);
//   GetReverse(ch,len);
//  cout<<"reverse ans is"<<ch;
// }

//   repalce @ with space.
// #include<iostream>
// using namespace std;
// void Replacecharacter(char ch[],int size){
//    int index=0;
//    while(ch[index]!=0){
//       if(ch[index]=='@'){
//          ch[index]=' ';

//       }
//       else{
//          index++;
//       }
//    }
// }

// int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    Replacecharacter(ch,100);
//    cout<<ch;

// }

// check palindrome.

// #include<iostream>
// using namespace std;
// bool checkpalindrome(char ch[],int size){
//    int s=0;
//    int e=size-1;

//    while(s<=e){
//       if(ch[s]==ch[e]){

//          s++;
//          e--;

//       }
//       else{
//          return false;
//       }
//    }
//    return true;

// }

//  int findlength(char ch[],int size){
//    int length=0;
//    for(int i=0;i<size;i++){
//       if(ch[i]=='\0'){
//          break;
//       }
//       else{
//          length++;
//       }
//    }
//    return length;
// }

// int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    int len=findlength(ch,100);
// bool ispalindrome=checkpalindrome(ch,len);
// if(ispalindrome){
//    cout<<"valid palindrome"<<endl;
// }
// else{
//    cout<<"invalid palindrome"<<endl;
// }

// }

// convert @ with spaces;
//  #include<iostream>
//  using namespace std;
//  void ConvertFunction(char ch[],int size){
//    int index=0;
//    while(ch[index]!='\0'){
//       if(ch[index]=='@'){
//          ch[index]=' ';
//       }
//       else{
//            index++;

//       }
//    }

//  }
//  int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    ConvertFunction(ch,100);
//    cout<<ch;
//  }

// check no is palindrome or not.
// #include<iostream>
// using namespace std;
// bool CheckPalindrome(char ch[],int size){
//    int s=0;
//    int e=size-1;
//    while(s<=e){
//       if(ch[s]==ch[e]){

//          s++;
//          e--;
//       }
//       else{
//          return false;
//       }
//    }
//    return true;

// }
// int FindLength(char ch[],int size){
//    int length=0;
// for(int i=0;i<size; i++){
//    if(ch[i]!='\0'){
//       break;
//    }
//    else{
//       length++;
//    }
// }
// return length;
// }
// int main(){
//    char ch[100];
//    cin.getline(ch,100);
//    int len=FindLength(ch,100);
//  bool ispalindrome=  CheckPalindrome(ch,len);
//  if(ispalindrome){
//    cout<<"validpalindrome"<<endl;
//  }
//  else{
//    cout<<"invalid palindrome"<<endl;
//  }
//  return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

// string name;
// cin>>name;
// // empty string.
// // string temp="";
// // cout<<"length of string is:"<<name.length()<<endl;
// // cout<<"string is empty or not:"<<temp.empty()<<endl;
// cout<<"find name at"<<name.at(2);

//   creation
// string name;
// // input.
// // cin>>name;
// getline(cin,name);
// // print.
// cout<<"printing name:"<<name;
// printing the first cahrcter of string
// int index=0;
// while(name[index]!='\0'){
//    cout<<"index"<<index<<"cahracter:"<<name[index]<<endl;
//    index++;
// }
// cout<<"printing index 6 values"<<name[6]<<endl;
// int value=(int)name[6];
// cout<<"value:"<<value<<endl;

// }

// decimal to binary.
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int ans=0;
//    int i=0;
//    while(n!=0){
//       int bit=n & 1;
//       ans=(bit*pow(10,i))+ans;
//      n=n>>1;
//       i++;
//    }
//    cout<<"ans is:"<<ans;
//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     string binary = ""; // Use a string to store the binary representation
//     while (n != 0) {
//         int bit = n & 1; // Extract the last bit
//         binary = to_string(bit) + binary; // Append the bit to the binary string
//         n = n >> 1; // Right shift the number
//     }

//     cout << "Binary representation is: " << binary << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
// string binary=" ";
// while(n!=0){
//    int bit=n&1;
//    // append bit with binary string.
//    binary=to_string(bit)+binary;
//    n=n>>1;

// }
// cout<<"binary representation of no is:"<<binary<<endl;
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   string binary="";
   while(n!=0){
      int bit=n&1;
      binary=to_string(bit)+binary;
      n=n>>1;
   }
   cout<<"binary representation of no:"<<binary;
   return 0;
}

// #include<iostream>
// using namespace std;
// sum all values in the array.
// int GetSum(int arr[],int size){
//    int sum=0;
//    for(int i=0;i<size;i++){
//       sum=sum+arr[i];
//    }
//    return sum;
// }
// int main(){

//    int arr[5];

// int ans=GetSum(arr,size);
// cout<< ans;
// taking input from user.
// for(int i=0;i<5;i++){
//    cout<<"taking input:"<<i<<endl;
//    cin>>arr[i];
//    cout<<endl;
// }
// for(int i=0;i<5;i++){
//    cout<<" double value of array :"<< (2*arr[i]);
//    cout<<endl;
// }
// return 0;

// }

// linear search in array.
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={10,20,30,40,50};
//    int size=5;
//    int target=20;
//    // we have to find targeted element.
//    for(int i=0;i<size;i++){
//       if (arr[i]==target){
//          cout<<"target found at index:"<<i<<endl;
//          // target mil gya bahar aa jao loop ke.
//          break;
//       }

//    }
//    return 0;
// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// // void ZeroOneCount(int arr[],int size){
// // int zerocount=0;
// // int onecount=0;
// // for(int i=0;i<size;i++){
// //    if(arr[i]==0){
// //       zerocount++;

// //    }
// //    if(arr[i]==1){
// //       onecount++;
// //    }
// // }
// // cout<<" Total counting of one is:"<<onecount<<endl;
// // cout<<"Total counting of zero is:"<<zerocount;
// // }

// // find minimum in array.
// int FindMinimum(int arr[],int size){
//    int MinAns=INT_MAX;
//    for(int i=0;i<size;i++){
//       if(arr[i]<MinAns){
//          // MinAns=min(arr[i],MinAns);
//          MinAns=arr[i];
//       }
//    }
//    return MinAns;
// }
// int main(){
//    // int arr[]={0,0,0,1,1,0,0,1,1,0,1,0,1,0};
//    // int size=14;
//    // ZeroOneCount(arr,size);
//    // return 0;
// int arr[]={0,4,15,-2,6,8,1};
// int size=7;
// int ans=FindMinimum(arr,size);
// cout<<ans;

// }

// reverse an array.
// #include<iostream>
// using namespace std;
// void ReverseArray(int arr[],int size){
//    int s=0;
//    int e=size-1;
//    while(s<=e){
//       swap(arr[s],arr[e]);
//       s++;
//       e--;

//    }
// }
// int main(){
//    int arr[]={10,20,30,40,50};
//    int size=5;
//    ReverseArray(arr,size);
//    for(int i=0;i<size;i++){
//       cout<<arr[i]<<" ";
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// void ExtrmePrint(int arr[], int size)
// {
//    int s = 0;
//    int e = size - 1;
//    while (s <= e)
//    {
//       if (s == e)
//       {
//          cout << arr[s];
//       }
//       else
//       {
//          cout << arr[s] << " ";
//          cout << arr[e] << " ";
         
//       }
//       // updation of starting and ending value.
//       s++;
//          e--;
//    }
// }
// int main()
// {
//    int arr[] = {10, 20, 30, 40, 50, 60, 70};
//    int size = 7;
//    ExtrmePrint(arr, size);
// }

   // call by value.
   // #include<iostream>
   // using namespace std;
   // int IncrementByOne(int &n){
   //    n=n+1;
   //    return n;
   
   // }
   // int main(){
   //    int n;
   //    cin>>n;
   //    IncrementByOne(n);
   //    cout<<n;
   // }

   // printing all pairs.
//    #include<iostream>
//    using namespace std;
// void MakePair(int arr[],int size){
   
//    for(int i=0;i<size;i++){
//       for(int j=i;j<size;j++){
//          cout<<arr[i]<<','<<arr[j]<<" "<<"pair sum:"<<arr[i]+arr[j]<<endl;
         

//       }
      
//    }

// }
//    int main(){ 
//       int arr[]={10,20,30};
//       int size=3;
//       MakePair(arr,size);
     
      
//       return 0;
//    }


// sort zeros and ones.
// #include<iostream>
// using namespace std;
//  void SortZeroOneCount(int arr[],int size){
//    int Zerocount=0;
//    int Onecount=0;
//    for(int i=0;i<size;i++){
//       if(arr[i]==0){
//          Zerocount++;
//       }
//       if(arr[i]==1){
//          Onecount++;
//       }

//    }
//    int index=0;
//  while(Zerocount--){
//    arr[index]=0;
//    index++;
//  }
//    while(Onecount--){
//       arr[index]=1;
//       index++;
//    }
//  }

 
// int main(){
//    int arr[]={0,1,0,1,0,0,0,1,1,0,0};
//    int size=11;
//    SortZeroOneCount(arr,size);
//    for(int i=0;i<size;i++){
//       cout<<arr[i];
//    }
// }

// shift array element by one place.
// #include<iostream>
// using namespace std;
// void RightShiftBy1(int arr[],int size){
//    int temp=arr[size-1];
//    for(int i=size-1;i>=0;i--){
//       arr[i]=arr[i-1];
//    }
//    arr[0]=temp;
// }
// int main(){
//    int arr[]={10,20,30,40,50,60};
//    int size=6;
//    RightShiftBy1(arr,size);
//    for(int i=0;i<size;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    // another method of printing using auto keyword.
//    for(auto x:arr){
//       cout<<x<<" ";
//    }
   
// }


// 2d array.
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int FindMaximum(int arr[][4],int row, int col){
//    int maxAns=INT_MIN;
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//          if(arr[i][j]>maxAns){
//             maxAns=arr[i][j];
//          }
//       }
     
//    }
//     return maxAns;

// }
// int main(){
//    int arr[3][4]={
//       {1,2,3,3},
//       {5,6,70,8},
//       {9,100,200,300}
//    };
//    int row=3;
//    int col=4;

//   int ans= FindMaximum(arr,row,col);
// cout<<ans;
// }