//  #include<iostream>
//  using namespace std;
//  int factorial(int n){
//     // base case
//     if(n==1)
//     return 1;
//     if(n==0)
//     return 1;
//     // processing.
// int recursionkaAns=factorial(n-1);

//     // recursive relation.
//     int ans=n*recursionkaAns;
//     return ans;
//  }
 
//  int main(){
//  cout<<factorial(5)<<endl;
//  return 0;
 
//  }



// print counting from n to 1.
// #include<iostream> 
// using namespace std;
// void PrintCounting(int n){
// // base case.
// if(n==1){
// cout<<1<<endl;
// return ;
// }
// // processing part.
// cout<<n<<endl;


// // recurive relation.

// PrintCounting(n-1);



// }
// int main(){
//     PrintCounting(5);

// }



// print counting from n to 1.
// #include<iostream>
// using namespace std;
// void Print(int n){
//     // base case.
//     if(n==1){
//         cout<<1<<endl;
//         return;

//     }
// // processing part.
// cout<<n<<endl;
// // recursivr relation.
// Print(n-1);

// }
// int main(){
//     Print(10);
// }


// find power  of 2.
// #include<iostream>
// using namespace std;
// int Pow(int n){
//     // base case.
//     if(n==0){
       
//         return 1;

//     }
// // processing part.
// int recusionkaAns=Pow(n-1);
// // recursivr relation.
// int finalAns=2*recusionkaAns;

// }
// int main(){
//     // Pow(5);
//     cout<<Pow(5)<<endl;
//     return 0;
// }


// find factorail of n.
// #include<iostream>
// using namespace std;
// int Factorial(int n){
//     // base case.
//     if(n==0){
//    return 1;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans=n*Factorial(n-1);
//     return ans;

// }
// int main(){
//     cout<<Factorial(5)<<endl;
//     return 0;

// }

// counting from n to 1.
// #include<iostream>
// using namespace std;
// void print(int n){
//     // base case.
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     // recurssion
//     print(n-1);
   
// }
// int main(){
//     print(5);
//     return 0;

// }

// power of 2.
// #include<iostream>
// using namespace std;
// int pow(int n){
//      // base case.
    
// if(n==0){
//         return 1;
//     }
// int ans=2*pow(n-1);
// return ans;
// }
// int main(){
//     cout<<pow(10);  
   
// }
  

//   fibonacci series.
// #include<iostream>
// using namespace std;
// int Fibonacci(int n){
//     // base case.
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans=Fibonacci(n-1)+Fibonacci(n-2);
//     return ans;
// }
// int main()
// { 
//    cout<<Fibonacci(8)<<endl;
//    return 0;

// }


// find sum.
// #include<iostream>
// using namespace std;
// int findsum(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans=n+findsum(n-1);
//     return ans;
// }
// int main(){
//     cout<<findsum(5);
//     return 0;

// }   

//  array using reecurrion.
// #include<iostream>
// using namespace std;

//     void PrintArray(int arr[],int size,int index){
//         // base case.
//         if(index>=size){
//             return;
//         }
//         // processing part.
//         cout<<arr[index]<<" ";
          
// // recurssive call.
// PrintArray(arr,size,index+1);


//     }
//     int main(){
//       int arr[]={10,20,30,40,50}; 
//       int size=5;
//       int index=0; 
// PrintArray(arr,size,index);

// }




// search in array.

// #include<iostream>
// using namespace std;

//     bool SearchArray(int arr[],int size,int target ,int index){
//         // base case.
//         if(index>=size){
//             return false;
//         }
//         // processing part.

//         if(arr[index]==target){
//             return true;
//         }
          
// // recurssive call.
//  bool ans=SearchArray(arr,size,target,index+1);
//  return ans;


//     }


// find minimum in array.
// #include<iostream>
// #include<limits.h>
// using namespace std;
// void FindMIn(int arr[],int size,int index,int &mini){
//     if(index>=size){
//         return; 
//     }
//     // processing part.
//      mini=min(mini,arr[index]);

//     // recurssive call.
//     FindMIn(arr,size,index+1,mini);

// }

// find maximum in array.
// void FindMax(int arr[],int size,int index,int &maxi){
//     // base case.
//     if(index>=size){
//         return;
//     }
//     // processing part.
//     maxi=max(maxi,arr[index]);
//     // recurrsion call.
//     FindMax(arr,size,index+1,maxi);
// }
//     int main(){
//       int arr[]={10,20,30,40,50}; 
//       int size=5; 
//       int index=0;
// int maxi=INT_MIN ;
//  FindMax(arr,size,index,maxi);
//  cout<<"minimum no in array:"<<maxi<<endl;


// }



// find even no in vector using recurrsion.
// #include<iostream>
// #include<vector>
// using namespace std;
// void FindEven(int arr[],int size,int index, vector<int>&ans ){
//     // base case.
// if(index>=size){
//     return ;

// } 

// if(arr[index]%2==0){
//      ans.push_back(arr[index]);

// }
// FindEven(arr,size,index+1,ans);
// }
// int main(){
//            int arr[]={11,27,30,40,57}; 
//       int size=5; 
//       int index=0; 
//       vector<int>ans;
//       FindEven(arr,size,index,ans);
//     //   printing vector.
//     for(int num:ans){
//         cout<<num<<" ";
//     }

// }


// DOUBLE THE VALUE OF ARRAY.
// #include<iostream>
// using namespace std;
// void GetDouble(int arr[],int size,int index){
//     // base case.
//     if(index>=size){
//         return;
//     }
//     // processing part.
//     arr[index]=2*arr[index];
//     // recurssion part.
//     GetDouble(arr,size,index+1);
// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     int index=0;
//     GetDouble(arr,size,index);
// for(int i=0; i<size;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;

// }


// PRINT index OF NO IN AN ARRAY.
// #include<iostream>
// using namespace std;
// void FindCount(int arr[],int size,int index,int target){
//     // int count=0;
//     // // base case.
//     if(index>=size){
//         return;
//     }
//     // processing part.
//     if(arr[index]==target){
//         cout<<index<<" ";
//     } 
//     // recurrion prt.
//     FindCount(arr,size,index+1,target);
// }
 
// int main(){ 
//     int arr[]={10,20,10,10,30,40};
//     int size=6;
//     int index=0;
//     int target=10;
//     FindCount(arr,size,index,target);


// return 0;
// }



// ptrint index of a no in array.

// #include<iostream>
// using namespace std;
//     void getindex(int arr[],int size,int index,int target){
//         // base case.
//         if(index>=size){
//             return;
//         }
//         // processing part.
//         if(arr[index]==target){
//             cout<<index<<" " ;       }
//              // recurrisive part.
//                 getindex(arr,size,index+1,target);
//     }
   
 
// int main(){
//     int arr[]={10,20,20,10,30};
//     int size=5;
//     int index=0;
//     int target=20;
//     getindex(arr,size,index,target);


// }

// print digits.
// #include<iostream>
// using namespace std;
// void printdigits(int num){
//     // base case.
//     if(num==0){
//         return;
//     }
//     // processing.
//     int digit=num%10;
//     // update num.
//     num=num/10;
//     // recurssive call.
//     printdigits(num);

//     // processing part.
//     cout<<digit<<endl;
// }
// int main(){
//     int num=4217;
//     printdigits(num); 

// }


// recursion lec--03
//  #include<iostream>
//  using namespace std;
//  bool checksorted(int arr[],int size,int index){
//     // base case.
//     if(index>=size){
//         return true; 
//     }
//     // processing part.
//     if(arr[index]>arr[index-1]){
//         // aage check krenge.
//         bool aagekaAns=checksorted(arr,size,index+1);
//         return aagekaAns;
//     }
//     else{
//         // sorted nahi hai.
//         return false;
//     }

   
//  }
//  int main(){
//     int arr[]={10,20,70,40,50,60};
//     int size=6;
//     int index=1;
//    bool issorted= checksorted(arr,size,index);
//    if(issorted){
//     cout<<"Array is sorted"<<endl;
//    }
//    else{
//     cout<<"Array is not sotrted"<<endl;
//    }

//  }

// binary serach using recursion.
// #include<iostream>
// using namespace std;
// int Binarysearch(int arr[],int s,int e,int target){
    
//     // base case.
//     if(s>=e){ 
//         //element not found. 
//         return -1;
//     }
//     // processing part.
//      int mid=s+(e-s)/2;
//     if(arr[mid]==target){
//         return mid;

//     }
//     if(arr[mid]<target){
//        return Binarysearch(arr,mid+1,e,target);
//     }
//     else{
//         return Binarysearch(arr,s,mid-1,target);
//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size=8;
//     int s=0;
//     int e=size-1;
//    int target=60;
//    int foundIndex=Binarysearch(arr,s,e,target);
//    if(foundIndex!=-1 ){
//     cout<<"element found at index:"<<foundIndex<<endl;
//    }
//    else{
//     cout<<"element not found"<<endl;
//    }

// }
 

 #include<iostream>
 using namespace std;
 void findsubsequence(string str,string output,int index){
    // base case.
    if(index>=str.length()){
        cout<<"->"<<output<<endl;
        return;
    }
    // string ka index batayega kon se caharcter pe hai.
    char ch=str[index];
    // two possibility of cahracter either include or exclude.
    // exclude.
    findsubsequence(str,output,index+1);
    // include.
    output.push_back(ch);
    findsubsequence(str,output,index+1);
 }
 int main(){
    string str="abc";
   string output=" ";
  int index=0;
    findsubsequence(str,output,index);

 }