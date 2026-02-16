// #include<iostream>
// using namespace std;
// class MaxHeap{   //creation of heap using array.
//     public:
//   int*arr;
//   int size; //Total element in heap.
//   int Total_size;  //Total size of array.

//   //constructor.
//   MaxHeap(int n){
//     arr=new int[n];
//     size=0; //no any element in the heap.
//     Total_size=n;
//   }
//   //Insert into the heap.
//   void Insert(int val){
//     if(Total_size==size){
//         cout<<"heap overflow\n";
//     }
//     //insert.
//     arr[size]=val; 
//     int Idx=size;  //This indicate the position of inserted element.
//     size++;
//     //check correct position of parent.
//     while(Idx>0 && arr[(Idx-1)/2]<arr[Idx]){
//         swap(arr[Idx],arr[(Idx-1)/2]);
//        Idx=(Idx-1)/2;
//     }
//     cout << arr[Idx] << " is inserted into heap." << endl;
//      cout<<endl;
//   }
 
//   //print.
//   void Print(){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//   }
  

//   //Heapify.
//   void Heapify(int index){
//     int largest = index;
//     int left=2*index+1;
//     int right=2*index+2;
//     //update largest.
//     if(left<size && arr[left]>arr[largest]){
//        largest=left;
//     }
//     if(right<size && arr[right]>arr[largest]){
//       //update largest.
//       largest=right;
//     }

//     if(largest != index){ //means largest is updated.
//        swap(arr[largest],arr[index]);
//     }
//     Heapify(largest);
//   }
//   //delete.
//   void Delete(){
//     if(size==0){
//       cout<<"heap underflow"<<endl;
//       return;
//     }
//     cout<<arr[0]<<"deleted from the heap:"<<endl;
//     arr[0]=arr[size-1]; //replace top.
//     size--; //top deleted.
//     if(size==0) return; //if heap is empty.
//     Heapify(0);
//   }
   
// };
// int main(){
//     MaxHeap H(6);
//     H.Insert(4);
//     H.Insert(14);
//     H.Delete();
//     H.Print();
//     H.Insert(24);
//     H.Insert(44);
//     H.Insert(60);
//     H.Insert(80);
//     // H.Insert(90);
//     H.Print();
// }



//build maxheap using recursion.
// #include<iostream>
// using namespace std;
// void Heapify(int arr[], int idx,int n){
//   int largest=idx;
//   int l_child=2*idx+1;
//   int r_child=2*idx+2;
//   //store largest among the largest,leftchild,rightchild.
 
//   if(l_child < n && arr[l_child] > arr[largest]){
//      largest=l_child;
//   }

//   if(r_child < n && arr[r_child] > arr[largest]){
//       largest= r_child;
//   }

//   if(largest != idx){
//     swap(arr[largest], arr[idx]);
//     Heapify(arr,largest,n);  //use recursion when swap happen. to send it for his correct position.
//   }
// }
// void BuildMaxHeap(int arr [],int n){
//   //except leaf node consider all nodes.
//   for(int i=n/2-1;i>=0;i--){
//     //find max among the node and their childs.
//     Heapify(arr,i,n);
//   }
// }

// void sort(int arr[],int n){
//    for(int i=n-1;i>0;i--){
//       swap(arr[i],arr[0]);
//       Heapify(arr,0,i);
//    }
// }


// void print(int arr[],int n){
//   for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//       // cout<<endl;
//   }
  
// }
// int main(){
//   int arr[]={10,3,8,9,5,13,18,14,11,70};
//   BuildMaxHeap(arr,10);
//     cout << "Max Heap array:\n";
//   sort(arr,10);
//   print(arr,10);
//   return 0;
// }


//priority queue.
#include<bits/stdc++.h>
using namespace std;
int main(){
  priority_queue<int>pq;
  pq.push(10);
  pq.push(12);
  pq.push(14);
  pq.push(15);
  pq.push(16);
  pq.push(20);

  cout<<pq.top();
  cout<<endl;
  pq.pop();
  cout<<pq.top();
  cout<<endl;
  cout<<pq.size();
  cout<<endl;
  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
}
