#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node*right;
    Node*left;

    //constructor.
    Node(int val){
        this->data=val;
        this->right=NULL;
        this->left=NULL;
    }
};

Node*insert(Node*Root,int target){
    if(Root==NULL){
        Node*temp=new Node(target);
        return temp;
    }
    //left part.
    if(target<Root->data){
       Root->left=insert(Root->left,target);
    }
    else{
        Root->right=insert(Root->right,target);
    }
    return Root;
}
// iorder traversal.
// void inorder(Node*root){
//       if (root == NULL) return;
//     //left part.
//     inorder(root->left);
//     //data.
//     cout<<root->data<<" ";
//     //right part.
//     inorder(root->right);

// }

bool search(Node*root,int target){
    if(root==NULL)return 0;
    if(root->data==target){
        return 1;
    }
    if(root->data>target){
         return search(root->left,target); //left part.
    }
    else{
        return search(root->right,target);
    }
  
   
}
int main(){
    int arr[]={6,3,17,5,11,18,2,1,20,14};
    int n=10;
    Node*root=NULL;
    for(int i=0;i<n;i++){
     root=insert(root,arr[i]);  //root updated in every step.
    }
   //traverse.
//   inorder(root);

   //for searching a element.
  cout<<search(root,15)<<endl;
}