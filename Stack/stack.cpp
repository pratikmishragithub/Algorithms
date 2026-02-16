// #include <iostream>
// #include <stack>
// using namespace std;
// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;
//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }
//     void push(int data)
//     {
//         // stack overflow means top will move to last index of arr.
//         if (top == size - 1)
//         {
//             cout << "stack is overflow" << endl;
//         }
//         else
//         {
//             top++;
//             arr[top] = data;
//         }
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "stack is empty" << endl;
//         }
//         else
//         {
//             top--;
//         }
//     }
//     bool isEmpty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     int GetTop()
//     {
//         // underflow condition agar koi element nahi hai to stack empty hai.
//         // agar top ki value -1 hai to stack empty hai.
//         if (top == -1)
//         {
//             cout << "stack is empty:" << endl;
//         }
//         else
//         {
//             return arr[top];
//         }
//     }

//     int GetSize()
//     {

//         return top + 1;
//     }
//     void print(){
//         cout<<"top"<<top<<endl;
//         cout<<"top element:"<<GetTop()<<endl;
//         cout<<"stack:";
//         for(int i=0;i<GetSize();i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// for insert in the stack.

// using predefined stl function.
// creation
// stack<int>st;
// // insertion in stack.
// st.push(10);
// st.push(20);
// st.push(30);
// // check size.
// cout<<st.size()<<endl;
// // remove.
// st.pop();
// cout<<endl;

// cout<<st.top();

// // empty function to check stack is empty or not return true or false .
// if(st.empty()){
// cout<<"stack is empty"<<endl;
// }
// else{
// cout<<"stack is not empty"<<endl;
// }

// return 0;

// Stack st(8);
// st.push(10);
// st.print();
// st.push(20);
// st.pop();
// st.pop();
// st.print();
// st.push(30);
// st.push(40);
// st.GetSize();
// return 0;

// reverse string using  stack.
// string str="hello";
// stack<char>st;
// for(int i=0;i<str.size();i++){
//     char ch=str[i];
// character ko string se nikal ke stack me push kr diye hai.
//     st.push(ch);
// }
// cout<<endl;
// // jab tak stack empty na ho jaye.
// while(!st.empty()){
//     cout<<st.top()<<endl;
//     st.pop();

//     cout<<endl;
// }

// finding the middle element int the stack.
// void solve(stack<int>&st,int&pos,int&ans){
//     // base case.
//     if(pos==1){
//         ans=st.top();
//         // st.pop();
//         return ;

//     }
//     // 1 case.
//     pos--;
//     int temp=st.top();
//     st.pop();
//     // recursive call.
//     solve(st,pos,ans);
//     // backtrack.
//     st.push(temp);
// }
// int GetMiddle(stack<int>&st){
//     int size=st.size();
//     if(st.empty()){
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }
//     else{
//         // stack is not empty.
//         int pos=0;
//         // odd
//         if(size & 1){
//             pos=size/2+1;
//         }
//         else{
//             // even
//             pos=size/2;
//         }
//         int ans=-1;
//         solve(st,pos,ans);
//         return ans;

//     }

// }

// insert at bottom of stack.
// void InsertAtBottom(stack<int>&st,int&element){
//     // base case.
//     if(st.empty()){
//         // agar stack empty hai too new element ko push kr do.
//         st.push(element);
//         return;

//     }
//     // 1 case.

//     int temp=st.top();
//     st.pop();
//     // recursion.

//     InsertAtBottom(st,element);
//     // backtracking.
//     st.push(temp);
// }

// reverse a stack.
// void InsertAtBottom(stack<int> &st, int &element)
// {
//     // base case.
//     if (st.empty())
//     {
//         st.push(element);
//         return;
//     }
//     // 1 case.
//     int temp = st.top();
//     st.pop();
//     // recursion
//     InsertAtBottom(st, element);
//     // backtracking.
//     st.push(temp);
// }

// void reverseStack(stack<int> &st)
// {
//     // base case.
//     if (st.empty())
//     {
//         return;
//     }
//     int temp = st.top();
//     st.pop();
//     // recursion.
//     reverseStack(st);
//     // backtracking
//     InsertAtBottom(st, temp);
// }

// // insert in sorted stack.
// void InsertSorted(stack<int>&st,int element){
//     // base case.agar stack empty hai to top nahi nikal paiyenge.
//     if(st.empty()||element>st.top()){
//         st.push(element) ;
//         return;
//     }

//  int temp=st.top();
//  st.pop();
// //  recursion.
// InsertSorted(st,element);
// // backtracking.
// st.push(temp);

// }

// // sort an stack.
// void SortStack(stack<int>&st){
//     // base case.
//     if(st.empty()){
//         return;
//     }
//     // 1 case.
//     int temp=st.top();
//     st.pop();
//     // recursion call.
//     SortStack(st);
//     // backtracking.
//     InsertSorted(st,temp);
// }

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(7);
//     st.push(20);
//     st.push(100);
//     st.push(30);
//     st.push(50);
//     // st.push(20);
//     // st.push(10);
//     //  int element=5 ;
//     //  InsertAtBottom(st,element);
//     //  cout<<"size of stack:"<<st.size();

//     // without reverse.
//     // while(!st.empty()){
//     //     cout<<st.top()<<" ";
//     //     st.pop();

//     // }

//     // after reverse.

//     // reverseStack(st);
//     // InsertSorted(st,element);
//     SortStack(st);
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack{
//     public:
//     int *arr;
//     int size;
//     int top;
//     // create constructor.
//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
// this->top=-1;
//     }
//     void push(int data){
//         // means stack full hai.
//         if(top==size-1){
//             cout<<"stack is full"<<endl;
//         }
//         else{
//             top++;
//             arr[top]=data;
//         }
//     }
//     void pop(int data){
//         // top==-1.stack is empty.
//         if(top==-1){
//             cout<<"stack is empty"<<endl;
//         }
//         else{
//             top--;
//         }
//     }
//     // void print(){
//     //     cout<<arr[top];
//     //     for(int i=0;i<top+1;i++){
//     //         cout<<arr[i]<<endl;
//     //         cout<<endl;
//     //     }
//     // }
// };

// int main(){

// stack<int>st;
// st.push(10);
// st.push(20);
// st.push(30);
// while(!st.empty()){
//     cout<<st.top();
//     st.pop();
//     cout<<endl;

// }

//

// lecture--02...
// #include <iostream>
// #include<stack>
// using namespace std;

// class Stack {
// public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;

//     Stack(int size) {
//         // Create an array with the given size.
//         arr = new int[size];
//         this->size = size;
//         this->top1 = -1;
//         this->top2 = size;
//     }

//     // Push in stack1
//     void push1(int data) {
//         if (top2 - top1 == 1) {
//             cout << "No space available for insertion in stack 1" << endl;
//         } else {
//             top1++;
//             arr[top1] = data;
//         }
//     }

//     // Push in stack2
//     void push2(int data) {
//         if (top2 - top1 == 1) {
//             cout << "No space available for insertion in stack 2" << endl;
//         } else {
//             top2--;
//             arr[top2] = data; // Corrected assignment
//         }
//     }

//     // Pop from stack1
//     void pop1() {
//         if (top1 == -1) {
//             cout << "Stack 1 is empty" << endl;
//         } else {
//             arr[top1] = 0; // Optional, reset the value
//             top1--;
//         }
//     }

//     // Pop from stack2
//     void pop2() {
//         if (top2 == size) {
//             cout << "Stack 2 is empty" << endl;
//         } else {
//             arr[top2] = 0; // Optional, reset the value
//             top2++;
//         }
//     }

//     // Print the array (for debugging purposes)
//     void print() {
//         cout << "Top1: " << top1 << endl;
//         cout << "Top2: " << top2 << endl;
//         cout << "Array contents:" << endl;
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     // Destructor to free the memory
//     ~Stack() {
//         delete[] arr;
//     }
// };

// int main() {
//     Stack st(6); // Create an object of the custom Stack class with size 10
//     st.push1(10);
//     st.push1(20);
//     st.print();

//     st.push2(50);
//     st.push2(60);
//     st.print();

//     st.push1(100);
//     st.push2(200);
//     st.print();

//     st.push1(300);
//     st.print();

//     st.pop1();
//     st.print();

// st.push1(400);
// st.print();

//     return 0;
// }

// check Redundancy. 

// #include <iostream>
// #include <stack>
// using namespace std;

// bool CheckRedundant(string& str) {
//     stack<char> st;
//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         // Push opening brackets and operators
//         if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             st.push(ch);
//         }
//         else if (ch == ')') {
//             int operatorCount = 0;

//             // Check for operators inside brackets
//             while (!st.empty() && st.top() != '(') {
//                 char temp = st.top();
//                 if (temp == '+' || temp == '-' || temp == '*' || temp == '/') {
//                     operatorCount++;
//                 }
//                 st.pop();  //pop the operator.
//             }

//             // Pop the opening bracket '('
//             if (!st.empty() && st.top() == '(') {
//                 st.pop();
//             }

//             // If no operator found, brackets are redundant
//             if (operatorCount == 0) {
//                 return true;  //redundant bracket present.
//             }
//         }
//     }
//     return false;   //return false if present.
// }

// int main() {
//     string str = "(((a+b)*(c+d)))";
//     bool ans = CheckRedundant(str);
//     if (ans==true) {
//         cout << "Redundant brackets present" << endl;
//     } else {
//         cout << "Redundant brackets not present" << endl;
//     }
//     return 0; 
// }

// lecture--03.

// next smaller element.
#include<bits/stdc++.h>
using namespace std;

vector<int> NextSmallestElement(int arr[], int size) {
    vector<int> ans(size);  //ans is equal to the size of array.
    stack<int> st;

    // Initial stack setup with -1
    st.push(-1);

    // Traverse from right to left
    for (int i = size - 1; i >= 0; i--) {
        int curr = arr[i];

        // Find the next smallest element
       while(st.top() >= curr){
        st.pop();
       }
          
        //  if small then.
        ans[i]=st.top(); //initial value -1 push hoga ans me.
        st.push(curr);
    }
    return ans;
}

int main() {
    int arr[] = {2, 1, 4,6, 3};
    int size = 5;

    vector<int> Ans = NextSmallestElement(arr, size);

    for (auto i : Ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// prev element.
// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// vector<int>PrevSmallerElement(int*arr,int size){
//     vector<int>ans(size);
//     stack<int>st;
//     // initially stack is push with -1;
//     st.push(-1);
//     for(int i=0;i<=size-1;i++){
//         int curr=arr[i];
//         // find next smaller element.
//         while(st.top()>=curr){
//             st.pop();
//         }
//         ans[i]=st.top();
//         st.push(curr);
//     }
//     return ans;

// }
// int main(){
//     int arr[]={8,4,6,2,3};
//     int size=5;
//     vector<int>Ans=PrevSmallerElement(arr,size);
//     for(auto i:Ans){
//         cout<< i <<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// stack revision.
// #include <iostream>
// #include<stack>
// using namespace std;

// class Stack {
// public:
//     int *arr;
//     int size;
//     int top;

//     // Constructor
//     Stack(int size) {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     // Push operation
//     void push(int data) {
//         if (top == size - 1) {
//             cout << "Stack overflow!" << endl;
//             return;
//         }
//         top++;
//         arr[top] = data;
//     }

//     // Pop operation
//     void pop() {
//         if (top == -1) {
//             cout << "Stack is empty!" << endl;
//             return;
//         }
//         top--;
//     }

//     // Check if stack is empty
//     bool isEmpty() {
//         return top == -1;
//     }

//     // Get the top element
//     int GetTop() {
//         if (top == -1) {
//             cout << "Stack is empty!" << endl;
//             return -1;  // Return a default value
//         }
//         return arr[top];
//     }

//     // Get current stack size
//     int getsize() {
//         return top + 1;
//     }

//     // Display elements of the stack
//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return;
//         }
//         cout << "Stack elements: ";
//         for (int i = 0; i <= top; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     // Destructor to free memory
//     ~Stack() {
//         delete[] arr;
//     }
// };

// int main() {
//     Stack st(5);  // Create stack with size 5
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(50);

//     st.display();  // Show stack elements
//     cout << "Stack size: " << st.getsize() << endl;

//     st.pop();

//     cout << "Top element after pop: " << st.GetTop() << endl;
//     if(st.isEmpty()){
//         cout<<"stack is empty:"<<endl;
//     }
//     else{
//         cout<<"stack is not empty:"<<endl;
//     }

//     return 0;
// }

// reverse a string .
// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<char> st;
//     string str = "pratik";
//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         st.push(ch);
//     }
//     cout << endl;
//     while (!st.empty())
//     {

//         cout << st.top();
//         st.pop();
//     }

//     return 0;
// }

 
//find middle of the stack.

// #include <iostream>
// #include <stack>
// using namespace std;

// void solve(stack<int>& st, int& pos, int& ans) {
//     // Base case: found middle element
//     if (pos == 1) {  
//         ans = st.top();
//         st.pop(); 
//         return;
//     }

//     // Recursive case: move towards middle
//     pos--;
//     int top = st.top();
//     st.pop();
    
//     // Recursive call
//     solve(st, pos, ans);

//     // Backtracking step: restore the stack
//     st.push(top);
// }

// int getMiddleElement(stack<int>& st) {
//     int size = st.size();
//     if (st.empty()) {
//         cout << "Stack is empty" << endl;
//         return -1;
//     }

//     // Find the middle position
//     else{
//         //stack is not empty.
//         int pos=0;
//         if(size&1){  //odd element is stack me.
//             pos=size/2+1;  //ye mid ka position hai.
//         }
//         else{
//             pos=size/2; //ye even ke mid ka position hai.
//         }

//      int ans = -1;
//     solve(st, pos, ans);
//     return ans;

//     }
    
// }
// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);  // Added an extra element to check for odd cases
//     st.push(60);
//     st.push(70);
//     st.push(80);
//     int mid = getMiddleElement(st);
//     cout << "Middle element: " << mid << endl;

//     return 0;
// }


// insert in sorted way.
// #include <iostream>
// #include <stack>
// using namespace std;

// void InsertInSorted(stack<int>& st, int element) {
//     // Base case: insert when stack is empty or element is greater than top
//     if (st.empty() || element > st.top()) {
//         st.push(element);
//         return;
//     }

//     int top = st.top();  //store top element.
//     st.pop();

//     // Recursive call
//     InsertInSorted(st, element);

//     // Backtracking
//     st.push(top);
// }

// void SortStack(stack<int>&st){
//     //base case.
//     if(st.empty()){
//         return;
//     }
//     int top=st.top();
//     st.pop();
//     //recursion call.
//     SortStack(st);
//     //backtracking.
//     InsertInSorted(st,top);


// }

// int main() {
//     stack<int> st;
//     st.push(100);
//     st.push(90);
//     st.push(20);
//     st.push(30);

//     InsertInSorted(st, 25);
//     // SortStack(st);

//     while (!st.empty()) {
//         cout << "Stack element: " << st.top() << endl;
//         st.pop();
//     }

//     return 0;
// }



//insert at bottom of stack.

// #include<bits/stdc++.h>
// using namespace std;
// void InsertAtBottom(stack<int>&st,int ele){
//     //base case.
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }

//     int temp=st.top();
//     st.pop();
//     //recursive call.
//     InsertAtBottom(st,ele);
//     //backtrack.
//     st.push(temp);
// }

// void printStack(stack<int> st) {  // pass by VALUE (copy)
//     cout << "Stack (top -> bottom): ";
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
// }

// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     int ele=100;
//     InsertAtBottom(st,ele);
//     printStack(st);
// }



//reverse an stack.

// #include<bits/stdc++.h>
// using namespace std;

// void InsertAtBottom(stack<int>& st, int temp){
//     if(st.empty()){
//         st.push(temp);
//         return;
//     }

//     int top = st.top();
//     st.pop();

//     InsertAtBottom(st, temp); //recursive call.

//     st.push(top); //backtrack.
// }

// void Reverse(stack<int>& st){
//     if(st.empty()) return;

//     int temp = st.top();
//     st.pop();

//     Reverse(st);
//     InsertAtBottom(st, temp);
// }

// void print(stack<int> st){
//     while(!st.empty()){
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
// }

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     Reverse(st);
//     print(st);
// }


//check sorted stack.
// #include<bits/stdc++.h>
// using namespace std;
// bool checksorted(stack<int>& st, int prev) {
//     if (st.empty()) {
//         return true;
//     }

//     int next = st.top();
//     if(next<prev){
//         return false;
//     }

//     // Check condition
//     else{
//       //(prev=<next)
//       prev=next;
//       st.pop();
//        return checksorted(st,prev);  
//     }
   
// }

// int main() {
//     stack<int> st;
//     st.push(50);
//     st.push(40);
//     st.push(30);
//     st.push(20);

//     int prev = INT_MIN;

//     if (checksorted(st, prev))
//         cout << "Stack is sorted\n";
//     else
//         cout << "Stack is NOT sorted\n";
// }




