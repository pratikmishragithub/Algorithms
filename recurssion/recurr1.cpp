// #include<iostream>
// using namespace std;
// void HappyBirthday(int n){
//     //base case.
//     if(n==0){
//         cout<<"Happy Birthday"<<endl;
//         return;
//     }
//      //single case.
//     cout<<"days left for birthday:"<<n<<endl;
//      //recursive call.
//      HappyBirthday(n-1);
// }
// int main(){
//     //function call.
//     HappyBirthday(6);
// }

// print even no.
//  #include<iostream>
//  using namespace std;
//  void EvenPrint(int n){
//      //base case.
//      if(n==2){
//          cout<<n<<endl;
//          return;
//      }
//      //single case.
//      cout<<n<<endl;
//      //recursive call.
//      EvenPrint(n-2);
//  }
//  int main(){
//      EvenPrint(8);
//  }

// print 1 to n.
//  #include<iostream>
//  using namespace std;
//  void print(int num,int n){
//      //base case.
//      if(num==n){
//          cout<<num;
//          return;
//      }
//      cout<<num<<endl;
//      //recursive call.
//      print(num+1,n);
//  }
//  int main(){
//      int n;
//      cin>>n;
//      print(1,n);
//  }

// print even no between 1 to n.
//  #include<iostream>
//  using namespace std;
//  void printEven(int num,int n){
//      // base case.
//      if(num>n){
//          return;
//      }
//      //processing part.
//      cout<<num<<endl;
//      //recursive part.
//      printEven(num+2,n);

// }
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==1){
//         n--;
//     }
//     printEven(2,n);

// }

// lecture 03.
// find factorial.
//  #include<iostream>
//  using namespace std;
//  int FindFact(int n){
//      //base case.
//      if(n==1||n==0){
//          return 1;
//      }
//       //processing part.
//       int recursionAns=FindFact(n-1);
//       //recursive relation.
//       int ans=n*recursionAns;
//       return ans;
//  }
//  int main(){
//      int n;
//      cin>>n;
//     cout<<FindFact(n);
//  }

// find summation of  first n natural no.
//   #include<iostream>
//   using namespace std;
//   int FindSum(int n){
//      //base case.
//      if(n==1){
//          return 1;
//      }
//      int ans=n+FindSum(n-1);
//      return ans;
//   }
//   int main(){
//      int n;
//      cin>>n;
//     int SummationAns=FindSum(n);
//     cout<<"summation is:"<<SummationAns;
//   }

// find power of 2.
//  #include<iostream>
//  using namespace std;
//  int FindPower(int num,int n){
//      //base case.
//      if(n==0){
//          return 1;
//      }
//      //processing part.
//      int ans=num*FindPower(num,n-1);
//      return ans;
//  }
//  int main(){
//      int n;
//      cin>>n;
//    cout<<FindPower(2,n);
//  }

// find square sum.
//  #include<iostream>
//  using namespace std;
//  int FindSquareSum(int n){
//      //base case.
//      if(n==1){
//          return 1;
//      }
//      int ans=n*n+FindSquareSum(n-1);
//      return ans;
//  }
//  int main(){
//      int n;
//      cin>>n;
//      cout<<FindSquareSum(n);
//    return 0;
//  }

// lecture no --05.
//  #include<iostream>
//  using namespace std;
//  void PrintArray(int arr[],int size,int Idx){
//      //base case.
//      if(Idx>=size){

//        return;
//     }
//     cout<<arr[Idx]<<" ";
//     //recursive call.
//     PrintArray(arr,size,Idx+1);
// }

// Reverse an array.
//  void ReverseArray(int arr[],int Idx){
//      //base case.
//      if(Idx==-1){
//          return;
//      }
//      cout<<arr[Idx]<<" ";
//      //recursive call.
//      ReverseArray(arr,Idx-1);
//  }

// summation of all no in the array.
//  int FindSum(int arr[],int size,int Idx){
//      //base case.
//      if(Idx>=size){
//          return 0;
//      }
//      return arr[Idx]+ FindSum(arr,size,Idx+1);
//  }

// int main(){
//     int arr[]={3,4,1,2,8};
//     int size=5;
// int Idx=size-1;
// PrintArray(arr,size,Idx);

// reverse.
//  ReverseArray(arr,Idx);

// find summation.
//    int Idx=0;
//   int Ans=FindSum(arr,size,Idx);
//   cout<<Ans;
// }

// find minimum in array.
//  #include<iostream>
//  #include<limits.h>
//  using namespace std;
//  void FindMinimum(int arr[],int size,int Idx,int &Mini){
//      //base case.
//      if(Idx>=size){
//          return;
//      }
//      //update minimum.
//      Mini=min(arr[Idx],Mini);
//      //recursive call.
//      FindMinimum(arr,size,Idx+1,Mini);
//  }
//  int main(){
//      int arr[]={23,45,60,90,0};
//      int size=5;
//      int Idx=0;
//      int Mini=INT_MAX;
//      FindMinimum(arr,size,Idx,Mini);

//     cout<<"Minimum no is:"<<Mini;
// }

// lecture 06.
// check palindrome.
//  #include<iostream>
//  using namespace std;
//  bool CheckPalindrome(string str,int start,int end){
//      //base case.
//      if(start>=end){
//          return 1;
//      }
//      //processing part.
//      if(str[start]!=str[end]){
//          return 0;
//      }
//      //recursive call.
//      else{
//          return CheckPalindrome(str,start+1,end-1);
//      }

// }
// int main(){
//     string str="NAMAN";
//     int n=str.size();
//     int start=0;
//     int end=n-1;
//    cout<<CheckPalindrome(str,start,end);
// }

// count vowels.
//  #include<iostream>
//  using namespace std;
//  int CountVowel(string str,int Index){
//      //base case.
//      if(Index==-1){
//          return 0;
//      }
//      //present.
//      if(str[Index]=='a'||str[Index]=='e'||str[Index]=='i'||str[Index]=='o'||str[Index]=='u'){
//          return 1+CountVowel(str,Index-1);  //recursive call.
//      }
//      //Absent.
//      else{
//          return CountVowel(str,Index-1);
//      }
//  }
//  int main(){
//      string str="aeigu";
//      int Index=str.length()-1;
//     cout<<CountVowel(str,Index);

// }

// revere a string.
//  #include<iostream>
//  using namespace std;
//  void ReverseString(string &str,int start,int end){
//      //base case.
//      if(start>=end){
//          return;
//      }
//      char ch=str[start];
//      str[start]=str[end];
//      str[end]=ch;
//      //recursive call.
//      ReverseString(str,start+1,end-1);
//  }
//  int main(){
//      string str="MOMO";
//      int start=0;
//      int end=str.size()-1;
//     ReverseString(str,start,end);
//     cout<<"reversed string is:"<<str;

// }

// Lowercase toUppercase.
//  #include<iostream>
//  using namespace std;
//  void ConvertLowToUp(string &str,int index){
//      //base case.
//      if(index==-1){
//          return;
//      }
//    //processing part.
//    str[index]=str[index]-'a'+'A';

// convert uppercase to lowercase.
//  str[index]=str[index]-'A'+'a';  //formula for upper to lower case.

// Recursive call.
//   ConvertLowToUp(str,index-1);

// }
// int main(){
// // string str="PRATIK";
// string str="pratik";
// int index=str.size()-1;
// ConvertLowToUp(str,index);

// cout<<"converted string is: "<<str;

// }

// linear search using recursion.
//  #include<iostream>
//  using namespace std;
//  bool SearchArray(int arr[],int size,int target,int index){
//      //base case.
//      if(index>=size){
//          return false;
//      }
//      //if present.
//      if(arr[index]==target){
//          return true;
//      }
//      //recursive call.
//     return SearchArray(arr,size,target,index+1);

// }
// int main(){
//   int arr[]={10,20,30,40,50};
//   int size=5;
//   int target=100;
//   int index=0;

//   if(SearchArray(arr, size, target, index)) {
//     cout << "Target found!" << endl;
// }
//  else {
//     cout << "Target not found!" << endl;
// }
// return 0;

// }

// binary search using recursion.
// #include <iostream>
// using namespace std;
// bool BinarySearch(int arr[], int size, int start, int end, int target)
// {

//     // base case.
//     if (start > end)
//     {
//         return false;
//     }

//     int mid = start + (end - start) / 2;
//     if (arr[mid] == target)
//     {
//         return true;
//     }
//     else if (arr[mid] < target)
//     {
//         return BinarySearch(arr, size, mid + 1, end, target);
//     }
//     else
//     {
//         return BinarySearch(arr, size, start, mid - 1, target);
//     }
// }
// int main()
// {
//     int arr[] = {1, 23, 45, 67, 70};
//     int target = 100;
//     int size = 5;
//     int start = 0;
//     int end = size - 1;

//     if (BinarySearch(arr, size, start, end, target))
//     {
//         cout << "element found:" << endl;
//     }
//     else
//     {
//         cout << "Target not found:" << endl;
//     }
//     return 0;
// }



//Merge sort.
// #include <iostream>
// using namespace std;

// void merge(int arr[], int s, int e) {

// 	int mid = s+(e-s)/2;

// 	int lenLeft = mid - s + 1;
// 	int lenRight = e - mid;

// 	//create left and right array
// 	int *left = new int[lenLeft];
// 	int *right = new int[lenRight];

// 	//copy values from original array to left array
// 	int k = s;
// 	//k -> starting index of left array values in original arrya
// 	for(int i=0; i<lenLeft; i++) {
// 		left[i] = arr[k];
// 		k++;
// 	}

// 	//copy values from original array to right array
// 	k = mid+1;
// 	for(int i=0; i<lenRight; i++) {
// 		right[i] = arr[k];
// 		k++;
// 	}

// 	//actual merge logic here
// 	//left array is already sorted
// 	//right array is already sorted
// 	int leftIndex = 0;
// 	int rightIndex = 0;
	

// 	int mainArrayIndex = s;

// 	while(leftIndex < lenLeft &&  rightIndex < lenRight) {
		
// 		if(left[leftIndex] < right[rightIndex] ) {
// 			arr[mainArrayIndex] =  left[leftIndex];
// 			mainArrayIndex++;
// 			leftIndex++;
// 		}
// 		else {
// 			arr[mainArrayIndex] =  right[rightIndex];
// 			mainArrayIndex++;
// 			rightIndex++;
// 		}
// 	}


// 	//2 more cases

// 	//1 case -> left array exhaust but right array me element abhi bhi bache hai
// 	while(rightIndex < lenRight) {
// 		arr[mainArrayIndex] =  right[rightIndex];
// 		mainArrayIndex++;
// 		rightIndex++;
// 	}
	

// 	//2nd case -> right array exhaust but left array me element abhi bhi bache hai
// 	while(leftIndex < lenLeft) {
// 		arr[mainArrayIndex] =  left[leftIndex];
// 		mainArrayIndex++;
// 		leftIndex++;
// 	}
// 	//1 more step pending
// 	delete[] left;
// 	delete[] right;
// }

// void mergeSort(int arr[], int s, int e) {
// 	//base case
// 	if(s >= e) {
// 		return;
// 	}
// 	//break
// 	int mid = (s+e)/2;
// 	//recursive call for left array
// 	mergeSort(arr,s, mid);
// 	//recursive call for right array
// 	mergeSort(arr, mid+1, e);
// 	//merge 2 sorted arrays
// 	merge(arr, s, e);
// }

// int main() {

// 	int arr[] = {2,1,6,9,4,5};
// 	int size = 6;
// 	int s = 0;
// 	int e = size - 1;

// 	cout << "Before merge sort: " << endl;
// 	for(int i=0; i<size; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
	
// 	mergeSort(arr,s,e);

// 	cout << "After merge sort: " << endl;
// 	for(int i=0; i<size; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// 	return 0;
// }



//Quick Sort.
// #include<iostream>
// using namespace std;
// void QuickSort(int arr[],int start,int end){
// 	//base case.
// 	if(start>=end){
// 		return;
// 	}
// 	int pivot=end;
// 	int i=start-1;
// 	int j=start;
// 	while(j<pivot){
// 		if(arr[j]<arr[pivot]){
// 			i++;
// 			swap(arr[i],arr[j]);
// 		}
// 		j++; //in every iterate j will move.
// 	}
// 	//last case when j is out of bound.
// 	i++;
// 	swap(arr[i],arr[pivot]);

// 	  // Recursive calls
// 	  QuickSort(arr, start, i - 1);
// 	  QuickSort(arr, i + 1, end);
// }
// int main(){
// 	int arr[]={12,34,56,7,9,1};
// 	int size=6;
// 	int start=0;
// 	int end=size-1;
// 	QuickSort(arr,start,end);

// 	for(int i=0;i<size;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

//FIND SUBSETS SUM.
// #include<iostream>
// using namespace std;
// void print(int arr[],int idx,int size,int sum){
// 	//base case.
// 	if(idx==size){
// 		cout<<sum<<endl;
// 		return;
// 	}
// 	//if not included.
// 	print(arr,idx+1,size,sum);

// 	//if included.
// 	sum+=arr[idx];
// 	print(arr,idx+1,size,sum);
// }
// int main(){
// 	int arr[]={3,4,5};
// 	int size=3;
// 	int idx=0;
// 	int sum=0;
// 	print(arr,idx,size,sum);
// }


//find permutation of array.

#include <iostream>
#include <vector>
using namespace std;

void permutation(int arr[], vector<vector<int>>& ans, vector<int>& temp, vector<bool>& visited, int size) {
    // base case
    if (temp.size() == size) {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < size; i++) {
        if (visited[i]==0) {
            visited[i] = true;
            temp.push_back(arr[i]);
            permutation(arr, ans, temp, visited, size);
            temp.pop_back();
            visited[i] = false;
			
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int size = 3;
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(size, false);

    permutation(arr, ans, temp, visited, size);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
