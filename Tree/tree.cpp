
// #include<iostream>
// #include<queue>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*left;
//     node*right;

//     //constructor creation.
//     node(int val){
//         this->data=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

//  //creation of tree.It return node of created tree.
// node*createTree(){ 
//     cout<<"enter the value: "<<endl;
//     int data;
//     cin>>data;
//     //base case.
//     if(data==-1){
//         return NULL;
//     }
//     //step1:create node.  
//     node*root=new node(data);  
//     //left sub tree.
//     cout<<"left of Node:"<<root->data<<endl;
//     root->left=createTree();  //recursive call.
//     //right sub tree.
//     cout<<"right of Node:"<<root->data<<endl;
//     root->right=createTree();

//     return root;
//    }

//    //preorder traversal.
//    void preorderTraversal(node*root){
//     //base case.
//     if(root==NULL){
//         return;  
//     }
//     //node.
//     cout<<root->data<<" ";
//     //left part.
//     preorderTraversal(root->left);
//     //right part.
//     preorderTraversal(root->right);
//    } 


//    //inorder traversal.
//    void InorderTraversal(node*root){
//     //base case.
//     if(root==NULL){
//         return;
//     }
//     //left part.
//     InorderTraversal(root->left);
//     //node.
//     cout<<root->data<<" ";
//     //right part.
//     InorderTraversal(root->right);
//    }

//    //postorder traversal.
    
//    void PostorderTraversal(node*root){
//     //base case.
//     if(root==NULL){
//         return;
//     }
//     //left part.
//     PostorderTraversal(root->left);
//     //right part. 
//     PostorderTraversal(root->right);
//     //node.
//     cout<<root->data<<" ";
//    }

//    //level order traversal.
//    void levelorderTraversal(node*root){
//     queue<node*>q;
//     q.push(root);
//     q.push(NULL);
//     //traverse into queue and fetch element.
//      while(!q.empty()){  //handle the last case.
//         //fetch front element.
//         node*front=q.front();
//         q.pop();

//         //TWO CASE NULL OR ELEMENT.
//         if(front==NULL){  //level completed.
//             cout<<endl;  //shift to next  line.
//             if(!q.empty()){
//                 q.push(NULL);
//         }
//             }
          
//         else{
//             //valid. 
//        //push left and right sub node.
//       cout<<front->data<<" ";

//       if(front->left!=NULL){
//         q.push(front->left);
//       }   
//       if(front->right!=NULL){
//         q.push(front->right);
//       }
//         }

//      }

//    }
// int main(){ 
//     node *Root=createTree(); //it store the return type value of root. 
//     // cout<<root->data<<endl;
//     cout<<"printing preorder:";
//     preorderTraversal(Root); 
//     cout<<endl; 

//     cout<<"printing inorder:";
//     InorderTraversal(Root);
//     cout<<endl;

//     cout<<"printing postorder:";
//     PostorderTraversal(Root);
//     cout<<endl;

//     cout<<"levelorder Traversal:";
//     levelorderTraversal(Root);
//     cout<<endl;

//     return 0;
// }


//tree revision.
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node*left;
//   node*right;
//   node(int val){
//     this->data=val;
//     this->left=NULL;
//     this->right=NULL;
//   }
// };
// node*CreateTree(){
  
//   int data;
//   cin>>data;
//   //base case.
//   if(data==-1)return NULL;

//   node*root=new node(data);
//     cout<<root->data;

//     root->left = CreateTree();
//     root->right = CreateTree();
//     return root;

// }
// int main(){
//  node*Root= CreateTree();
//   if (Root != NULL)
//         cout << "Root node is: " << Root->data << endl;
//         return 0;
// }


#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Create tree using preorder input
Node* CreateTree() {
    int data;
    cin >> data;

    if (data == -1) return NULL;

    Node* root = new Node(data);
    root->left = CreateTree();
    root->right = CreateTree();
    return root;
}

// Print tree (inorder traversal)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//preorder Traversal.
void preorder(Node*root){
   if(root==NULL) return;
   cout<<root->data <<" ";
   preorder(root->left);
   preorder(root->right);
}

//postorder Traversal.
void postorder(Node*root){
  if(root==NULL) return;
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
int main() {
    cout << "Enter tree data (-1 for NULL): ";
    Node* Root = CreateTree();

    if (Root != NULL) {
        cout << "\nRoot data is: " << Root->data << endl;
        cout << "Inorder traversal: ";
        inorder(Root);
        cout<<endl;
        cout << "preorder traversal: ";
        preorder(Root);
        cout<<endl;
         cout << "postorder traversal: ";
        postorder(Root);
    }
     else {
        cout << "Tree is empty.\n";
    }
}
