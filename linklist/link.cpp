// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     // creation of node.
//     node *next;
//     // default constructor.
//     node()
//     {
//         cout << "Default constructor called" << endl;
//         // this current object ko dikhta hai.
//         this->next = NULL;
//     }
//     // parameterised constructor.
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         // cout << "parametrised   constructed called" << endl;
//     }
// };

// // for printing of linklists.
// void printLL(node *head)
// {
//     // linkedlist ko print krne  ke liye hum temporary pointer ka use krenge.
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // printing of length of linkedlist.
// int GetLength(node *head)
// {
//     int len = 0;
//     node *temp = head;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     cout << len << " ";
// }

// //  Insert at head.
// void InsertAtHead(node *&head, node *&tail, int data)
// {

//     if (head == NULL)
//     {
//         // creation of new node.
//         node *newNode = new node(data);
//         //  update head.
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         node *newNode = new node(data);
//         // attached newNode to head node.
//         newNode->next = head;
//         // update the head.
//         head = newNode;
//     }
// }

// // insertion at end.
// void InsertAtTail(node *&head, node *&tail, int data)
// {
//     if (head == NULL)
//     {
//         // creation of new node.
//         node *newNode = new node(data);
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         node *newNode = new node(data);
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// // insert at any point.
// void insertAtPosition(node *&head, node *&tail, int data, int position)
// {

//     int length = GetLength(head);

//     if (position == 1)
//     {
//         InsertAtHead(head, tail, data);
//     }
//     else if (position == length + 1)
//     {
//         InsertAtTail(head, tail, data);
//     }
//     // insert at mid.
    //   else{
    //     //create node.
    //     node*newNode=new node(data);
    //     node*temp=head;
    //     for(int i=1;i<position-2;i++){
    //          temp=temp->next;
    //     }
    //      newNode->next=temp->next;
    //      temp->next=newNode;
    //   }
// }

// // for deleting of linkedlist.
// void deleteNode(node *&head, node *&tail, int position)
// {
//     if (head == NULL)
//     {
//         cout << "cannot insert blc linkedlist is empty." << endl;
//         return;
//     }
// // single element.
// if(head==tail){
//     node*temp=head;
//     delete temp;
//      head=NULL;
//      tail=NULL;
//      return;
// }
//     int length = GetLength(head);
//     if (position == 1)
//     {
//         // first node ko delete kro.
//         node *temp = head;
//         head = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else if (position == length)
//     {
//         // last node ko delete kro.
//         node *prev = head;
//         // find prev.
//         while (prev->next != tail)
//         {
//             prev = prev->next;
//         }
//         // previous node ko null kro.
//         prev->next = NULL;
//         // delete tail.
//         delete tail;
//         // tail ko previous ke uper point krwa denge.
//         tail = prev;
//     }
//     // delete from middle.
//     else
//     {
//         node *prev = NULL;
//         node *curr = head;
//         while (position != 1)
//         {
//             prev = curr;
//             curr = curr->next;

//             position--;
//         }

//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }

// int main()
// {
//     // creation of static node.constructor called hoga.
//     // node a;
//     // creation of dynamic node.

// //     // node*first=new node(10);
// //     // node*second=new node(20);
// //     // node*third=new node(30);
// //     // node*fourth=new node(40);

// //     // node*fifth=new node(50);

// //     // first->next=second;
// //     // second->next=third;
// //     // third->next=fourth;
// //     // fourth->next=fifth;
// //     //    fifth->next=NULL;

// //     // ek or pointer banaye hi jo first ko point krta hai  .

// //     // node*head=first;
// //     // node*tail=fifth;
// //     // for printing the entire linklists.
// //     // before adding of new node.
// //     // printLL(head);
// //     // for getting length of linklists.
// //     // GetLength(head);

// //     //    insertAthead(head,tail,5);
// //     //    After insertion of new node.
// //     //    printLL(head);

// //     //    insert at tail
// //     // InsertaAttail(tail,tail,60);
// //     // printLL(tail);

// //     // good practice of creating of linkedlist.
//     node *head = NULL;
//     node *tail = NULL;
//     InsertAtHead(head, tail, 10);
//     InsertAtHead(head, tail, 20);
//     InsertAtHead(head, tail, 30);
// //     InsertAtTail(head, tail, 90);
// //     InsertAtTail(head,tail,100);
//     // printLL(head);
//     // cout<<endl;
// //     // GetLength(head);

//     // insertAtPosition(head,tail,80,1);

// //     // insertAtPosition(head, tail, 1000, 5);

//     deleteNode(head, tail, 3);

//     printLL(head);
//     return 0;
// }

// doubly linkedlist.
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *prev;
//     node *next;
//     node()
//     {
//        this-> prev = NULL;
//        this-> next = NULL;
//     }
//     node(int data)
//     {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
// }

// int PrintLength(node *&head)
// {
//  int len = 0;
//     node *temp = head;
   
//     while (temp != NULL)
//     {

//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// void InsertAtHead(node *&head, node *&tail, int data)
// {
//     // if linked list is empty.
//     if (head == NULL)
//     {
//         node *newNode = new node(data);
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         node *newNode = new node(data);
//         head->prev = newNode;
//         newNode->next = head;
//         head = newNode;
//     }
// }

// void InsertAtTail(node *&head, node *&tail, int data)
// {
//     if (head == NULL)
//     {
//         node *newNode = new node(data);
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         node *newNode = new node(data);
//         tail->next = newNode;
//         newNode->prev = tail;
//         tail = newNode;
//     }
// }
// void InsertAtPosition(node*&head,node*&tail,int data,int position){
//     if(head==NULL){
//         node*newNode=new node(data);
//         head=newNode;
//         tail=newNode;
//     }
//     else{
//         int length=PrintLength(head);
//         // insert at position 1st.
//         if(position==1){
//             InsertAtHead(head,tail,data);
//         }
//         // insert at position last.
//         else if(position==length+1){
//             InsertAtTail(head,tail,data);
//         }
//         else{
//  // insert at middle of the linkedlist.
// node* newNode=new node(data);
// node*prevNode=NULL;
//     node*currNode=head;
//       while(position!=1){
//         prevNode=currNode;
//         currNode=currNode->next;
//         position--;
//     }
//     prevNode->next=newNode;
// newNode->prev=prevNode;
// newNode->next=currNode;
// currNode->prev=newNode;
//         }
       
//     }
    
    
    
  

// }

// // deletion of linked list.
// void deleteNode(node*&head,node*&tail,int position){
//     // if linkedlist is empty.
//     if(head==NULL){
//        cout<<"linked list is empty"<<endl;
//        return;
//     }

//     // single node.
//     if(head==tail){
//         node*temp=head;
//         delete temp;
//         head=NULL;
//         tail=NULL;
//         return;
//     }

//      int length=PrintLength(head);
    
//     if(position==1){
//         node*temp=head;
//         head=head->next;
//         temp->next=NULL;
//         head->prev=NULL;
//         delete temp;
//     }
   
//     else if(position==length){
//         node*prevNode=tail->prev;
//         prevNode->next=NULL;
//         tail->prev=NULL;
        
//         delete tail;
//         tail=prevNode;
        

//     }
//     else{
//         node*prevNode=NULL;
//         node*currNode=head;
//         while(position!=1){
//             prevNode=currNode;
//             currNode=currNode->next;
//             position--;
//         }
//         node*NextNode=currNode->next;
//         prevNode->next=NextNode;
//         currNode->next=NULL;
//         currNode->prev=NULL;
//         NextNode->prev=prevNode;
//         delete  currNode;

//     }

    

// }

// int main()
// {  
   
//     node *head = NULL;
//     node *tail = NULL;
//     InsertAtHead(head, tail, 10);
//     InsertAtHead(head, tail, 20);
//     InsertAtHead(head, tail, 30);
//     InsertAtHead(head, tail, 40);
//     InsertAtHead(head, tail, 50);

   
//     print(head);
//     cout<<endl;
//      InsertAtTail(head, tail, 60); 
//      print(head);
//      cout<<endl;
//      InsertAtPosition(head,tail,100,7);
//      print(head);
//      cout<<endl;
//      deleteNode(head,tail,5);
//      print(head);
//     return 0;
// }


// day-4.
// check loop.
// bool CheckLoop(node*&head){
//     node*slow=head;
//     node*fast=head;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;

//         }
//     // check for loop.
//     if(slow==fast){
//         return true;
//     }
//     }
//     return false;
// }
// bool StartingPointOfLoop(node*&head){
//     node*slow=head;
//     node*fast=head;
//   while(fast!=NULL){
//     fast=fast->next;
//     if(fast!=NULL){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     if(fast==slow){
//         break;
    
//     }
//   }
// //   if(fast==NULL){
// //     return NULL;
// //   }
// //   yaha tak pahuche hau iska matlab slow or fast meet kr chuke hai.
//   slow=head;
// //   jab tak slow or fast meet na ke jaye slow or fafst ko ,ove krwate rahemge.
//   while(slow!=fast){
//  slow=slow->next;
//     fast=fast->next;
//   }
   
// return slow;
// }

// void RemoveLoop(node*head){
//         node*slow=head;
//     node*fast=head;
//   while(fast!=NULL){
//     fast=fast->next;
//     if(fast!=NULL){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     if(fast==slow){
//         break;
    
//     }
//   }
//   slow=head;
//   while(slow!=fast){
//     slow=slow->next;
//     fast=fast->next;
//   }
// //   starting point.
// node*StartPoint=slow;
// node*temp=fast;
// while(temp!=StartPoint){
//     temp=temp->next;
// }
// temp->next=NULL;

// }


// add 1 to linkedlsit.
// 1.revrese,2.add +1,reverse.
//  node*Reverse(node*&head){
//     node*prev=NULL;
//     node*curr=head;

//     while(curr!=NULL){
//         node*NextNode=curr;
//         curr->next=prev;
//         prev=curr;
//         curr=NextNode;
//     }
//     return prev;
// }


// bool AddOne(node*head){
//     // reverse node.
//    head=Reverse(head);

// // add 1.
// int carry=1;
// node*temp=head;
// while(temp->next!=NULL){
//     int totalSum=temp->data+carry;
//     int digit=totalSum%10;
//     carry=totalSum/10;
//     
//     temp=temp->next;
//     if(carry==0){
//         break;
//     }
    
// }
// // process last node.
// if (carry!=0)
// {
//     int totalSum=temp->data+carry;
//     digit=totalSum%10;
//     carry=totalSum/10;
//     temp->data=digit;
//     if(carry!=0){
//         node*newNode=new node(carry);
//         temp->next=newNode;
//     }

// }
// // reverse 
// head=Reverse(head);

// }


 
// int main(){
//     node*head=NULL;
//     node*tail=NULL;
//     InsertAtHead(head, tail, 1);
//     InsertAtHead(head, tail, 2);
//     InsertAtHead(head, tail, 3);
//     // InsertAtHead(head, tail, 40);
//     // InsertAtHead(head, tail, 50);
//     // InsertAtTail(head,tail,90);
//     // tail->next=head->next;
//     AddOne(head);
//     printLL(head);
//     // cout<<endl;
// // cout<<StartingPointOfLoop(head)<<endl;
// // RemoveLoop(head);
// // printLL(head);

// }
   

// #include<iostream>
// // #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
    
//     int data;
//     Node*next;

//     Node(){
//         cout<<" I am inside the default constructor:"<<endl;

//         this->next=NULL;
//     }
//     Node(int data){ 
       
//         this->data=data;
//         this->next=NULL;
//     }
     
// };
// void PrintLL(Node*head){
//     Node*temp=head; 
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;

//     }
//     cout<<endl;
// } 

// int PrintLength(Node*head){
//     int len=0;
//     Node*temp=head;
//     while(temp!=NULL){
       
//         len++; 
//         temp=temp->next;
      
      

//     }
//     return len;
   
// }

// void InsertAtHead(Node* &head, Node* &tail,int data){
//     if(head==NULL){
//         Node*newNode=new Node(data);
//         head=newNode;
//         tail=newNode;
//     }
//     else{    
//          //create new node.
//     Node*newNode=new Node(data);
//     Node*temp=newNode;
//     temp->next=head;
//     head=temp;

//     }
// }

//  void InsertAtTail(Node *&head, Node *&tail, int data)
// {
//     if (head == NULL)
//     {
//         // creation of new node.
//         Node *newNode = new Node(data);
//         //single node hai to uske head or tail ko newnode se attach kr denge.
//         head = newNode;
//         tail = newNode;
//     }

//     else
//     {
//         Node *newNode = new Node(data);
//         tail->next = newNode;
//         tail = newNode;
//     }
// }
// void insertAtPosition(Node *&head, Node *&tail, int data, int position)
// {

//     int length = PrintLength(head);

//     if (position == 1)
//     {
//         InsertAtHead(head, tail, data);
//     }
//     else if (position == length + 1)
//     {
//         InsertAtTail(head, tail, data);
//     }
//     // insert at mid.
//     else
//     {
//         Node *newNode = new Node(data);
//         Node *prev = NULL;
//         Node *curr = head;
//         while (position != 1)
//         {
//             prev = curr;
//             curr = curr->next;
//             position--;
//         }
//         // attach prev to new node.
//         prev->next= newNode;
//         newNode->next = curr;
//     }
// }
   

// void DeleteNode(Node*&head,Node*&tail,int position){
//     if(head==NULL){
//         cout<<"linkedlist is empty:"<<endl;
//         return;
//     }
//     if(head==tail){
//         //single element case;
//         Node*temp=head;
//         delete temp;
//         head=NULL;
//         tail=NULL;

//     }

//     int length = PrintLength(head);

//     //delete from head.
//     if(position==1){
// Node*temp=head;
//  head=head->next; 
//    temp->next=NULL;
//    delete temp;

//     }

//     //delete from tail.
//     else if(position == length){
//         Node*prev=head;
//         while(prev->next!=tail){
//             prev=prev->next;
           
//         }
//         //prev ka link break krenge.
//         prev->next=NULL;
//         delete tail;
//         tail=prev;

//     }
//     else{
//         //delete at any point.
//         Node*prev=NULL;
//         Node*curr=head;
//         while(position !=1){
//             position--;
//             prev=curr;
//             curr=curr->next;
           

//         }
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;



//     }

// }
   

    


// int main(){

//   Node*head=NULL;
//   Node*tail=NULL;
  
// InsertAtHead(head,tail,100);
// InsertAtHead(head,tail,200);
// InsertAtHead(head,tail,300);
// InsertAtHead(head,tail,400);
// InsertAtHead(head,tail,500);
// // InsertAtTail(head,tail,45);
// // insertAtPosition(head,tail,700,3); 
// DeleteNode(head,tail,3);


// PrintLL(head);
// cout<<PrintLength(head);


// return 0;
// }


//doubly linkedlist;
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*prev;
//     Node*next;
    
//     Node(){
//         this->next=NULL;
//         this->prev=NULL;
//     }
//     Node(int data){
//         // cout<<"parameter:";
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }

// };
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
// }
// int GetLength(Node*head){
//     int len=0;
//     Node*temp=head;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
// return len;
// }

// void InsertAtHead(Node *&head, Node *&tail, int data)
// {
//     // if linked list is empty.
//     if (head == NULL)
//     {
//         Node *newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//     }

//     else
//     {
//         Node *newNode = new Node(data);
//         head->prev = newNode;
//         newNode->next = head;
//         head = newNode;
//     }
// }
 
// void InsertAtTail(Node*&head,Node*&tail,int data){
//     //if linkedlist is empty.
//      if(head==NULL){
//         Node*newNode=new Node(data);
//         head=newNode;
//         tail=newNode;
//      }
//      else{
//         Node*newNode=new Node(data);
//         tail->next=newNode;
//         newNode->prev=tail;
//         tail=newNode;
//      }
// }

// void InsertAtPosition(Node*&head,Node*&tail,int data,int position){
//     if(head==NULL){
//         Node*newNode=new Node(data);
//         head=newNode;
//         tail=newNode;
//     }
//     else{
//         int length=GetLength(head);
//         // insert at position 1st.
//         if(position==1){
//             InsertAtHead(head,tail,data);
//         }
//         // insert at position last.
//         else if(position==length+1){
//             InsertAtTail(head,tail,data);
//         }
//         else{
//  // insert at middle of the linkedlist.
// Node* newNode=new Node(data);
// Node*prevNode=NULL;
//     Node*currNode=head;
//       while(position!=1){
//         prevNode=currNode;
//         currNode=currNode->next;
//         position--;
//     }
//     prevNode->next=newNode;
// newNode->prev=prevNode;
// newNode->next=currNode;
// currNode->prev=newNode;
//         }
       
//     }
// }


// int main(){
//     // Node*newnode=new Node(10);
//     Node*head=NULL;
//     Node*tail=NULL;
//     InsertAtHead(head,tail,10);
//     InsertAtHead(head,tail,20);
//     InsertAtHead(head,tail,30);
//     InsertAtHead(head,tail,40);
//     InsertAtHead(head,tail,50);
//     InsertAtTail(head,tail,60);
//     InsertAtPosition(head,tail,70,3);
//     print(head);
// }


#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);

    // If list is empty
    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(Node* &head, int pos, int val) {
    // Insert at head
    if(pos == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    for(int i=1; i< pos - 1 && temp != NULL;i++) {
        temp = temp->next;    
    }

    // If position is invalid
    if(temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 10);      // 10
    insertAtTail(head, 20);      // 10 -> 20
    insertAtTail(head, 30);      // 10 -> 20 -> 30
    insertAtPosition(head, 2, 15); // 10 -> 15 -> 20 -> 30

    printList(head);
}
