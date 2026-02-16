
#include <iostream>
#include <queue>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    // Constructor
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Destructor
    ~Queue()
    {
        delete[] arr;
    }

    // Push method
    void push(int val)
    {
        // Check if the queue is full
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }

        // Check if the queue is empty
        else if (front == -1 && rear == -1)
        {
           
            // empty case.
            front++; // single element case.
            rear++;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    // Pop method
    void pop()
    {
        // Check underflow condition
        if (front == -1 && rear == -1)
        {
            cout << "Queue underflow" << endl;
            return;
        } 

        // Single element case
        if (front == rear)
        {
            arr[front] = -1; // Optional: Clear the value,value deleted from queue.
            front = rear = -1;
        }
        else
        {
            arr[front] = -1; // Optional: Clear the value
            front++;
        }
    }

    // Check if the queue is empty
    bool IsEmpty(){
        if (front == -1 && rear == -1){
              // queue empty.
              return true;
        }
        else{
            return false;
        }
    }
    
        
    

    // Get the size of the queue
    int getSize()
    {
        // here i can not insert the correct logic so it give wrong result but we fix it.
        if (front == -1 && rear == -1){
            return 0;
        }
         else{
            return rear - front + 1;
         }  
        
    }

    // Get the front element
    int GetFront()
    {
        if (front == -1)
        {
            cout << "No element found" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    int GetRear()
    {
        if (rear == -1 || front > rear)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            return arr[rear];
        }
    }

    // Print the queue elements
    void print()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
//     // creation of queue.
//     // queue<int>q;
//     // q.push(5);
//     // q.push(20);
//     // q.push(30);
//     // q.push(40);
//     // q.push(50);
//     // // size of queue.
//     // cout<<"size of queue:"<<q.size()<<endl;
//     // // check empty.
//     // if(q.size()==0){
//     //     cout<<"queue is empty"<<endl;
//     // }
//     // else{
//     //     cout<<"queue is not empty"<<endl;
//     // }
//     // // pop element from queue.first in first out;
//     // q.pop();
//     // cout<<"size of queue:"<<q.size()<<endl;

//     // // check front element.
//     // cout<<"front element:"<<q.front()<<endl;
//     // // check last element.
//     // cout<<"rear element:"<<q.back()<<endl;

//     // while(!q.empty()){
//     //     cout<<q.front()<<endl;
//     //     q.pop();
//     // }

    // create queue.
    Queue q(5);
    q.print(); 
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.push(50);
    // cout<<q.GetRear();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    cout << q.getSize();

    return 0;
}


//Dequeue.
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int>dq;
//     dq.push_front(20);
//     dq.push_back(10);
//     cout<<dq.front()<<endl;
//     cout<<dq.back()<<endl;
//     cout<<dq.size();
// }


// doubly ended queue.
// #include<iostream>
// #include<deque>
// using namespace std;
// class Dequeue{
//     public:
//     int*arr;
//     int size;
//     int front;
//     int rear;
//     //constructor called.
//     Dequeue(int size){
//         arr=new int[size];
//         this->size=size;
//         this->front=-1;
//         this->rear=-1;   
//     }
//     ~Dequeue() {
//         delete[] arr;
//     }
//     void pushBack(int val){
//         //overflow.
//         if((front==0 && rear==size-1) ||(rear==front-1)){
//             cout<<"queue full:"<<endl;
//             return;
//         }
//         //single case.
//         else if(front==-1&&rear==-1){
//             front++;
//             rear++;
//             arr[rear]=val;
//         }
//         //circular nature.
//         else if(rear==size-1 && front!=0){
//             rear=0;  //maintain the circular nature.
//             arr[rear]=val; 
//         }
//         //general case.
//         else{
//             rear++;
//         arr[rear]=val;
//         }
       

//     }
//     void pushFront(int val){
//         if((front==0 && rear==size-1)||(rear==front-1)){
//             cout<<"queue overflow:"<<endl;
//             return;
//         }
//         else if(front==-1&&rear==-1){
//             front++;
//             rear++;
//             arr[front]=val;
//         }
//         else if(front==0 && rear!=size-1){  //if rear is present in size-1 posn then queue is full.
//             front=size-1;
//             arr[front]=val;

//         }
//         else{
//             front--;
//             arr[front]=val;
//         }
//     }
    
//     void popFront(){
//         if(front==-1 && rear==-1){
//             cout<<"queue underflow Nothing should be deleted:"<<endl;
//             return;
//         }
//         //single element.
//         else if(front==rear){
//             arr[front]=-1; //clear the element.
//             front=-1;
//             rear=-1;
//         }
//         //circular condition.
//         else if(front==size-1){
//             arr[front]=-1;
//             front=0;
//         }
//         else{
//             arr[front]=-1;
//             front++; //remove element and move forward.
//         }

//     }
//     void popBack(){
//         if(front==-1 && rear==-1){
//             cout<<"queue underflow Nothing should be deleted:"<<endl;
//             return;
//         }
//         //single element.
//         else if(front==rear){
//             arr[rear]=-1; //clear the element.
//             front=-1;
//             rear=-1;
//         }
//         else if(rear==0){
//             arr[rear]=-1;
//             rear=size-1;
//         }
//         else{
//             arr[rear]=-1;
//             rear--; //remove element and move forward.
//         }
//     }
//     void print() {
//         if (front == -1) {
//             cout << "Queue is empty" << endl;
//             return;
//         }

//         cout << "Queue elements: ";
//         int i = front;
//         while (true) {
//             cout << arr[i] << " ";
//             if (i == rear) break;
//             i = (i + 1) % size;  //update i.
//         } 
//         cout << endl;
//     }
// };
// int main(){
//     Dequeue dq(5);

//     dq.pushBack(10);
//     dq.pushBack(20);
//     dq.pushBack(30);
//     dq.pushFront(5);
//     dq.pushFront(2);

//     dq.print(); // Output: 2 5 10 20 30

//     dq.popFront();
//     dq.print(); // Output: 5 10 20 30

//     dq.popBack();
//     dq.print(); // Output: 5 10 20

//     dq.pushBack(40);
//     dq.pushBack(50);

//     dq.print(); // Output: 5 10 20 40 50

//     dq.pushBack(60); // Should show "Queue full"

//     return 0;

// }


//reverse a queue.
// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void reverseQueue(queue<int>&q){ 
//     stack<int>st;
//     //one by one element queue se fetch kr stack me push krenge.
//     while(!q.empty()){
//         int FrontElement=q.front();
//         q.pop();
//         st.push(FrontElement);
//     }

//     //one by one pop delete all element.
//     while(!st.empty()){
//       int element=st.top();
//         st.pop();
//
//     }
// }

//using recursion.
// void Reverse(queue<int>&q){
//     //base case.
//     if(q.empty()){
//         return;
//     }
//     int element=q.front();
//     q.pop();
//     Reverse(q); //recursive call.
//     //insert element.
//     q.push(element);
// }

// void reverseQueue(queue<int>&q){
//     stack<int>st;
//     while(!q.empty()){
//         int Frontelement=q.front();
//         q.pop();
//         st.push(Frontelement);
//     }
//     while(!st.empty()){
//         int element=st.top(); 
//         st.pop();
//         q.push(element);
//     }
// }

// void reverseFirstK(queue<int>&q,int k){
//     stack<int>st;
//     int n=q.size();
//      //if k>queue.size(),k==0 no reversal;
//      if(k>n||k==0){
//         return ;
//      }
//     //push first k element from queue to stack.
//     for(int i=0;i<k;i++){
//         int element=q.front(); //Assume that q have higher no of element than k.
//         q.pop();
//         st.push(element);
//     }

//     //push all the k element to queue.
//     while(!st.empty()){
//         int element=st.top();
//         st.pop(); 
//         q.push(element);
//     }

//     //push n-k element to end of the queue.
//     for(int i=0;i<(n-k);i++){
//         int element=q.front();
//         q.pop();
//         q.push(element);
//     }
// }

// void InterLeave(queue<int>&first){
//     queue<int>second;
//     // push first half into the second half.
//     int size=first.size();
//     for(int i=0;i<size/2;i++){
//         int element=first.front();
//         first.pop();
//         second.push(element);
//     }
//     //merge two half.
//     for(int i=0;i<size/2;i++){
//         int element=second.front();
//         second.pop();
//         first.push(element);

//         element=first.front();
//         first.pop();
//         first.push(element);
//     }
// }
 

//print first -ve number in a window.
// void PrintFirstNegative(int*arr,int n,int k){
//     deque<int>dq;
//     //process first K element and store index of first -ve element.
//     for(int i=0;i<k;i++){
//         int element=arr[i];
//         if(element<0){
//             dq.push_back(element);
//         }
//     }
//     //process remaining element.
//     for(int index=k;index<n;index++){
//         //previous window ka ans nikal lete hai.
//         if(dq.empty()){
//             cout<<"0"<<endl;
//         }
//         else{
//             cout<<arr[dq.front()]<<" ";
//         }
       

//         //removal.
//         if(index-dq.front()>=k){ //out of bound wala element hai.
//             dq.pop_front();
//         }


//         //addition
//         if(arr[index]<0){
//             dq.push_back(index);
//         }
//     }
//         //process last element.
//         if(dq.empty()){
//             cout<<"0"<<endl;
//         }
//         else{
//             cout<<arr[dq.front()]<<" ";
//         }

    
// }
// int main(){
//     queue<int>q;
    // q.push(2);
    // q.push(-5);
    // q.push(4);
    // q.push(-1);
    // q.push(-2);
    // q.push(0);
    // q.push(5);
    // reverseQueue(q);
    // Reverse(q);
    // reverseFirstK(q,3);
    // InterLeave(q);

//     int arr[]={2,-5,4,-1,-2,0,5};
//     int n=7;
//     int k=3;
//     PrintFirstNegative(arr,n,k);
//     cout<<"printing the reversed element:"<<endl;
//     while(!q.empty()){
//         int element=q.front();
//         q.pop();
//         cout<<element<<" ";
//     }
//    return 0;
// }



// #include <iostream>
// #include <queue>
// using namespace std;

// void InterLeave(queue<int>& first) {
//     if (first.empty()) return;  // Edge case: empty queue

//     int size = first.size();
//     if (size % 2 != 0) {
//         cout << "Queue size must be even for proper interleaving." << endl;
//         return;
//     }

//     queue<int> second;
    
//     // Move first half to second queue
//     for (int i = 0; i < size / 2; i++) {
//        int element=first.front();
//        first.pop();
//         second.push(element);
       
//     }

//     // Interleave both halves
//     while (!second.empty()) {
//         int element=second.front();
//         second.pop();
//         first.push(element);
        
//          element=first.front();
//          first.pop();
//         first.push(element);
       
//     }
// }

// // Helper function to print the queue
// void printQueue(queue<int> q) {
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
// }

// // Driver code
// int main() {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     q.push(7);
//     q.push(8);
    
//     cout << "Original Queue: ";
//     printQueue(q);
    
//     InterLeave(q);
    
//     cout << "Interleaved Queue: ";
//     printQueue(q);

//     return 0;
// }



// #include <iostream>
// #include <deque>
// using namespace std;

// void PrintFirstNegative(int* arr, int n, int k) {
//     deque<int> dq;

//     // Process first K elements and store index of first -ve element.
//     for (int i = 0; i < k; i++) {
//         if (arr[i] < 0) {
//             dq.push_back(i); // Store index, not value
//         }
//     }

//     // Process remaining elements.
//     for (int index = k; index <= n; index++) {
//         // Print answer for the previous window
//         if (!dq.empty()) {
//             cout << arr[dq.front()] << " ";
//         }
//          else {
//             cout << "0 ";
//         }

//         // Remove elements that are out of the current window
//         if (!dq.empty() && dq.front() <= index - k) {
//             dq.pop_front();
//         }

//         // Add current element if negative
//         if (index < n && arr[index] < 0) {
//             dq.push_back(index);
//         }
//     }
//     cout << endl;
// }

// // Driver code
// int main() {
//     int arr[] = {2, -5, 4, -1, -2, 0, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     PrintFirstNegative(arr, n, k);
//     return 0;
// }

//revision..
// #include<iostream>
// #include<queue>
// using namespace std;
// class Queue{
//     public:
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     Queue(int size){
//         this->size=size;
//         arr=new int[size];
//         this->front=-1;
//         this->rear=-1;
//     }
//     ~Queue(){
//         delete[]arr; //free the memory.
//     }

//     //insert in queue.
//     void push(int val){
//         //check queue is empty or not.
//         if(rear==size-1){
//             cout<<"queue full:"<<endl;
//             return;
//         }
//         else if(front==-1 && rear==-1){
//             //single element case.
//             front++;
//             rear++;
//             arr[rear]=val;
//         }
//         else{
//             //normal case.
//          rear++;
//          arr[rear]=val;
//         }
//     }
//     void pop(){
//         //check empty condition.
//         if(front==-1 &&rear==-1){
//             cout<<"queue empty:"<<endl;
//             return;
//         }
//         else if(front==rear){ //single element case.
//            arr[front]=-1;
//            front=-1;
//            rear=-1;
//         }
//         else{
//             //normal case.
//             arr[front]=-1;
//             front++;
//         }
//     }
//     bool IsEmpty(){
//         if(front==-1&&rear==-1){
//             cout<<"Queue empty:"<<endl;
//             return false;
//         }
//         else{
//             cout<<"queue not empty:"<<endl;
//             return true;
//         }
//     }
//     int getFront(){
//         if(front==-1){
//             cout<<"queue empty hai no front element:"<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];   
//         }
//     }
//     int getRear(){
//         if(rear==-1||front>rear){
//             cout<<"No rear element:"<<endl;
//             return -1;
//         }
//         else{
//             return arr[rear];
//         }
//     }
//     int GetSize(){
//         if(front==-1 &&rear==-1){
//             return 0;
//         }
//         else{
//             return rear-front+1;
//         }
//     }
//     void print()
//         {
//             if (front == -1)
//             {
//                 cout << "Queue is empty" << endl;
//                 return;
//             }
//             for (int i = front; i <= rear; i++)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
   
// };

// int main(){
//     Queue q(5);
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     q.print();
//     q.GetSize();
//     // q.getFront();
//     // q.getRear();
//     // q.pop();
//     // q.print();
//     // q.pop();
//     // q.print();

//     // q.push(60);
//     // q.print();

//     return 0;
// }
