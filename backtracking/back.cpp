// divide and qonquer and backracking.
// merge sort'
// #include<iostream>
// using namespace std;
// void mergesort(int arr[],int s,int e){
//     // base case.
//     if(s>e){
//         // invalid array.
//         return;
//     }
//     if(s==e){
//         // already sorted
//         return;
//     }
//     // break.
//     int mid=s+(e-s)/2;
//     // recursive call for left array.
//     mergesort(arr,s,mid);
//     // recursive call for right array.
//     mergesort(arr,mid+1,e);
//     // merge 2 sorted array.
//     merge(arr,s,e);
// }
// int main(){
//     int arr[]={2,1,6,9,4,5};
//     int size=6;
//     int s=0;
//     int e=size-1;
//     cout<<"before merge sort:"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     mergesort(arr,s,e);
//     cout<<"After merge sort:"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//  quick sort.
// #include<iostream>
// using namespace std;
// void Quicksort(int arr[],int s,int e){
//     if(s>=e){
//         return;

//     }
//     int pivot=e;
//     int i=s-1;
//     int j=s;
//     while(j<pivot){
//         if(arr[j]<arr[pivot]){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//         j++;
//     }
//     i++;
//     swap(arr[i],arr[pivot]);
//     Quicksort(arr,s,i-1);
//     Quicksort(arr,i+1,e);

// }
// int main(){
//     int arr[]={7,2,1,8,6,3,5,4};
//     int size=8;
//     int s=0;
//     int e=size-1;
//     Quicksort(arr,s,e);
//     // for printing the value.
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

//  printing the permutation of the string.
// is question me by refrence pass krne ppe ans galat aa raha ahi kyuki same copy create ho gya  hai isliye hum backtarcking ka use krngee.
// #include<iostream>
// using namespace std;
// void printpermutation(string &str,int index){
//     // base case.
//     if(index>=str.length()){
//         cout<<str<<" ";
//         return;
//     }
//     for(int j=index;j<str.length();j++){
//         swap(str[index],str[j]);
//         // recursive call.
//         printpermutation(str,index+1);
//         // backtrcaking.
//         swap(str[index],str[j]);
//     }

// }
// int main(){
//     string str="abc";
//     int index=0;
//     printpermutation(str,index);
//     return 0;
// }

// Rat in a maze.
// #include<iostream>
// using namespace std;
// void PrintAllPath(int maze[][4],int row,int col,int srcx,int srcy, string output){
//     // base case.
//     // destination cordoinates are [row-1] [col-1]
//     if(srcx ==row-1 && srcy==col-1){
//         cout<<output<<endl;
//         return;
//     }
//     // 1 case solve karemge baki recursion solve krega.
//     // up.
//     // possibility hai.
//     // path closed.
//     // out of bound.
//     // check is position is al ready visited.

// // right.
// // down.
// // left.
// }
// int main(){
//     int maze[4][4]={
//         {1,0,0,0},
//         {1,1,0,0},
//         {1,1,1,0},
//         {1,1,1,1},
//     };
//     int row=4;
//     int col=4;
//     int srcx=0;
//     int srcy=0;
//     string output="";
//     PrintAllPath(maze,row,col,output);

// }

// dearrangement of index.
// #include<iostream>
// using namespace std;
// int solve(int n){
//     // base acse.
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     int ans=(n-1)*(solve(n-1)+solve(n-2));
//     return ans;
// }
// int main(){
//     int n=4;
//     cout<<solve(n)<<endl;
// }





#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {

	int mid = (s+e)/2;

	int lenLeft = mid - s + 1;
	int lenRight = e - mid;

	//create left and right array
	int *left = new int[lenLeft];
	int *right = new int[lenRight];

	//copy values from original array to left array
	int k = s;
	//k -> starting index of left array values in original arrya
	for(int i=0; i<lenLeft; i++) {
		left[i] = arr[k];
		k++;
	}

	//copy values from original array to right array
	k = mid+1;
	for(int i=0; i<lenRight; i++) {
		right[i] = arr[k];
		k++;
	}

	//actual merge logic here
	//left array is already sorted
	//right array is already sorted
	int leftIndex = 0;
	int rightIndex = 0;
	//yahi pr galti karte h log
	int mainArrayIndex = s;

	while(leftIndex < lenLeft &&  rightIndex < lenRight) {
		
		if(left[leftIndex] < right[rightIndex] ) {
			arr[mainArrayIndex] =  left[leftIndex];
			mainArrayIndex++;
			leftIndex++;
		}
		else {
			arr[mainArrayIndex] =  right[rightIndex];
			mainArrayIndex++;
			rightIndex++;
		}
	}


	//2 more cases

	//1 case -> left array exhaust but right array me element abhi bhi bache hai
	while(rightIndex < lenRight) {
		arr[mainArrayIndex] =  right[rightIndex];
		mainArrayIndex++;
		rightIndex++;
	}
	

	//2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
	while(leftIndex < lenLeft) {
		arr[mainArrayIndex] =  left[leftIndex];
		mainArrayIndex++;
		leftIndex++;
	}
	//1 more step pending
	delete[] left;
	delete[] right;
}

void mergeSort(int arr[], int s, int e) {
	//base case
	if(s >= e) {
		return;
	}
	//break
	int mid = (s+e)/2;
	//recusive call for left array
	mergeSort(arr,s, mid);
	//recusive call for right array
	mergeSort(arr, mid+1, e);
	//merge 2 sorted arrays
	merge(arr, s, e);
}

int main() {

	int arr[] = {2,1,6,9,4,5};
	int size = 6;
	int s = 0;
	int e = size - 1;

	cout << "Before merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	mergeSort(arr,s,e);

	cout << "After merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;



	return 0;
}