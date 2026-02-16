#include<iostream>
using namespace std;
class node{
   public:
   int data;
   node*next;
   // cretaion of node.
   
   node(){
      cout<<"default constructor"<<endl;
      this->next=NULL;
   }
   node(int data){
      this->data=data;
      this->next=NULL;
   }
};
   // print length.
   int findlength(node*head){
      node*temp=head;
      int len=0;
      while(temp!=NULL){
         len++;
         temp=temp->next;
      }
  cout<<"length of linkedlist is:"<<len;

   }

   // print linkedlsit.
   void printLL(node*head){
      node*temp=head;
      while(temp!=NULL){
         cout<<temp->data<<"->"<<" ";
         temp=temp->next;

      }
   }
   void InsertATHead(node*&head,node*&tail,int data){
      // empty linked list.
     
      if(head==NULL){
          node*newNode=new node(data);
         head=newNode;
         tail=newNode;
      }
      // single case.
      // if(head==tail){
      //    head=NULL;
      //    tail=NULL;

      // }
      else{
         node*newNode=new node(data);
         newNode->next=head;
         head=newNode;
      }
   }


int main(){
node*head=NULL;
node*tail=NULL;
InsertATHead(head,tail,10);

InsertATHead(head,tail,20);
InsertATHead(head,tail,30);
InsertATHead(head,tail,40);
InsertATHead(head,tail,50);

findlength(head);
cout<<endl;
printLL(head);

return 0;


}