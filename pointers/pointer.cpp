// pointers.
// pointers is used to store address.
// #include<iostream>
// using namespace std;
// int main(){
    // int nums=10;
    // cout<<nums;
    // // creation of pointers.      
    // int *ptr=&nums;
    // cout<<"finding the addresss of nums:"<<ptr<<endl;
    // cout<<"finding the value of nums:"<<*ptr<<endl; 
    // cout<<"address of ptr:"<<&ptr<<endl;
    // cout<<"find size of pointer:"<<sizeof(ptr)<<endl;
    



    // int a=5;
    // int*ptr=&a;
    // int *q=ptr;
    // a=a+1;
    // *ptr=*ptr+2; 
    // cout<<q<<endl;
    // cout<<&q<<endl;    
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl; 
    // cout<<(*ptr)+1<<endl;
    // cout<<(*ptr)++<<endl;
    // cout<<++(*ptr)<<endl; 
    // cout<<(*ptr=(*ptr/2))<<endl;
    // cout<<(*ptr=(*ptr-2))<<endl;

    // pointers with array.
//     int arr[5]={10,20,30,40,50};
//     cout<<arr[0]<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<&arr<<endl;
//     cout<<arr<<endl;
//     cout<<*arr<<endl;
// cout<<*arr+1<<endl;  
// cout<<*(arr+1)<<endl;
// cout<<*(arr+2)<<endl;
// cout<<*(arr+3)<<endl;
// cout<<*(arr+4)<<endl;
// cout<<*(1+arr)<<endl;


// pointers with char array.
// char ch[50]="statement";
// char *cptr=ch; 
// cout<<cptr<<endl;  
// cout<<cptr+2<<endl;
// cout<<cptr+8<<endl;
// cout<<*(cptr+1)<<endl; 
// cout<<*(cptr+2)<<endl; 
// cout<<*(cptr+3)<<endl; 
// cout<<cptr+8;
 
//  char ch[10]="pratik";
//  char*cptr=ch;
//  cout<<cptr;

// }   


// #include<iostream> 
// using namespace std;
// void solve(int *arr,int size){
//     *arr=*arr+1;
//      *arr=*arr+2;
//     cout<<"inside solve function array:"<<arr<<endl;
   
//     cout<<"inside solve function array:"<<&arr<<endl;
// } 
// int main(){
    // int arr[5]={10,20,30,40};
    // pointer to an array creation.  
    // int (*ptr)[5]=&arr;
    // cout<<(*ptr)[0]<<endl;
    // cout<<(*ptr)[1]<<endl;
    // cout<<(*ptr)[2]<<endl;
    // cout<<(*ptr)[3]<<endl;

    // cout<<"inside main--> arr:"<<arr<<endl;
    // cout<<"inside main--> &array:"<<&arr<<endl;
    // solve(arr,4);
    // for(int i=0; i<4;i++){
    //     cout<<arr[i]<<endl;
    // }


    // pointers to pointers,
    // int a=5;
    // int *ptr=&a;
    
    // int **ptr2=&ptr;
    // cout<<**ptr2<<endl; 
    
// }