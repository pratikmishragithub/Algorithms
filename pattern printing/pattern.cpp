// #include <iostream>
// using namespace std;
// int main()
// {
    //     // int n,m;
    //     // cin>>n>>m;
    //     //     // Printing the pattern of square.
    //     //     // this for loop is for external row.
    //     //     for(int i=0; i<4;i++){
    //     //         // this for loop is for coloumn.
    //     //         for(int j=0; j<4;j++){
    //     //         cout<<"*";
    //     //     }
    //     //     cout<<endl;
    //     // }

    //     // -------------->printing the pattern of rectangle.
    //     // for(int i=0;i<=3; i++){
    //     //     for(int i=0; i<=5;i++){
    //     //         cout<<"*";
    //     //     }
    //     //     cout<<endl;
    //     // }

    //     // return 0;
    //     // -------------->printing patern of hollow rectangle.
    // //     for (int row = 0; row <= 5; row++)
    // //     {
    // //        for(int col=0; col<=5; col++) {
    // //         if(row==0||row==4){
    // //             cout<<"*";
    // //         }
    // //         else{
    // //             if(col==0||col==4){
    // //                 cout<<"*";
    // //             }
    // //             else{
    // //                 cout<<" ";
    // //             }
    // //         }

    // //        }
    // //        cout<<endl;

    // // }
    // // return 0;
    // // ------------------->pattern printing of pyramid.
    // // for(int row =0;row<=5; row++){
    // // for(int col=0; col<=row+1; col++){
    // //     cout<<"*";
    // // }
    // // cout<<endl;
    // // }
    // // Again pratice.
    // // first for loop for row
    // // int n;
    // // cin>>n;
    // // for(int row=0; row<=n; row++){
    // //     for(int col=0; col<row+1; col++){
    // //         cout<<"*";
    // //     }
    // //     cout<<endl;
    // // }

    // // _____________----->>>>>inverted pyramid.
    // // int n;
    // // cin>>n;
    // // for( int row=0; row<=n; row++){
    // // for( int col=0; col<=n-row ;col++){
    // //     cout<<"*";
    // // }
    // // cout<<endl;
    // // }
    // // return 0;
    // // _________------> numerical pyramid.
    // // for(int row=0;row<=4; row++){
    // //     for(int col=0; col<=row+1; col++){
    // //         cout<<col+1<<" ";
    // //     }
    // //     cout<<endl;
    // // }

    // // _____________---->inverted numerical pyramid.5

    // // int n;
    // // cin>>n;
    // // for(int row=0; row<=n;row++){
    // //     for(int col=0; col<=n-row; col++){
    // //         cout<<col+1<<" ";
    // //     }
    // //     cout<<endl;
    // // }

    // // --------------->Full pyramid.
//     int num;
//     cin>>num ;
//     int n=num/2;
//     for(int row=0; row<=n; row++){

//         // for space this for loop is considerd.

//         for(int col=0; col<n-row-1;col++){
//         cout<<" ";
//         }
//         // this for loop is for star .
//         for(int col=0; col<row+1; col++){
//             cout<<"* ";

//         }

//     cout<<endl;
//     }
// }

    // // // ----------------->inverted full pyramid.
    // // int n;
    // // cin>>n;
    // // for(int row=0; row<=n; row++){
    // //     //for  space
    // //     for(int col=0; col<=row; col++){
    // // cout<<" ";
    // //     }
    // //     // for star
    // //     for(int col=0; col<=n-row; col++){
    // //         cout<<"* ";
    // //     }
    // //     cout<<endl;
    // // }

    // // return 0;
    // // }
    // // -------------------->hollow full pyramid.

    // // int n;
    // // cin>>n ;
    // // for(int row=0; row<=n; row++){

    // //     // for space this for loop is considerd.

    // //     for(int col=0; col<n-row-1;col++){
    // //     cout<<" ";
    // //     }
    // //     // this for loop is for star .
    // //     for(int col=0; col<row+1; col++){
    // //         // printinng star for first annd last column.
    // //         if(col==0||col==row+1-1){
    // //                 cout<<"* ";

    // //         }
    // //     else{
    // //         cout<<" ";
    // //     }

    // //     }
    // //     cout<<endl;
    // // }
    // // return 0;
    // // }

    // // inverted hollow pyramid------------>>.int n;
    // // int n;
    // // cin>>n;
    // // for(int row=0; row<=n; row++){
    // //     //for  space
    // //     for(int col=0; col<=row; col++){
    // // cout<<" ";
    // //     }
    // //     // for star
    // //     // int totalcolumn=n-row;
    // //     for(int col=0; col<=n-row; col++){
    // //         if(col==0||col==n-row-1){
    // //          cout<<"* ";
    // //         }
    // //         else{
    // //             cout<<" ";
    // //         }
    // //     }
    // //     cout<<endl;
    // // }

    // // return 0;
    // // }

    // // ----------------->>>>>general pattern.
    // // int n;
    // // cin>>n;
    // // for(int row=0; row<=n; row++){
    // //     //for  space 6

    // //         for(int col=0; col<=2*row+1; col++){
    // //           if(col%2==1)  {
    // //             // for odd position print the value *
    // //             cout<<"*";
    // //           }
    // //         // for even places print the value of row +1.
    // //           else{
    // //             cout<<row+1;
    // //           }

    // //         // cout<<endl;
    // //         }
    // //         cout<<endl;
    // // }
    // // }

    // // ------------->>>pattern'

    // // int n;
    // // cin>>n;
    // // for(int row=0; row<=n; row++){
    // //     // total no of coloumn o to n-row.
    // // for(int col=0; col<=n-row; col++){
    // //     if(row==0||row==n-1){
    // //         cout<<"*";
    // //     }
    // //     else{
    // //         // if colomn is equal to 0 and column is equal is n-row-1 print *
    // //       if(col==0||col==n-row-1)  {
    // //         cout<<"*";}
    // //         else{
    // //             // other wise print space.
    // // cout<<" ";
    // //         }
    // //       }
    // //     }
    // //     cout<<endl;
    // // }
    // // return 0;

    // // }

    // // ----------->Pattern printing of ABCD.
    // int n;

    // cin>> n;
    // for(int row=0; row<=n; row++){
    //     for( int col=0; col<=row+1; col++){
    //      char ch=col+1+'A'-1;
    // cout<<ch;
    //     }
    //     cout<<endl;
    // }
    // return 0;
    // }

    //----------------- swastik printting---------
//     int n;
//     cout<<"enter the lenth of swastik :";
//     cin>>n;
//     int mid = ( n-1) / 2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ((i == mid || j == mid) || (i < mid && j == 0) || (i > mid && j == n - 1) || (j < mid && i == n - 1) || (j > mid && i == 0))
//             {
//                 cout<<"*";
//                 cout<<" ";
                
//             }
//             else{
//                 cout<<"  ";
//             }

                
//         }
        
//      cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     if(num%2==0){
//         cout<<"number is even";
//     }
//     else{
//         cout<<"number is odd";
    
//     }
//     return 0;
// }
// 

// 
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<5; i++){
//         for(int j=0;j<5;j++){
//         cout<<"HAPPY HOLI SONALI"<<endl;
//     }
//     }
//     cout<<endl;
//     return 0;
// }

// find unique element in the array.
// #include<iostream>
// using namespace std;
 
// int GetUnique(int arr[],int size){
//    int ans=0;
//     for(int i=0; i<size; i++){
//         ans=ans^arr[i];

//     }
//     return ans;
// }
// int main(){
//     int arr[]={10,20,30,40,50,10,20,30,40};
//     int size=9;
//    int finalans= GetUnique(arr, size);
//    cout<<"final ans is:"<<finalans;


// }

// find right shift by 1.
// #include<iostream>
// using namespace std;
// int RightShift(int arr[], int size){
// int temp=arr[size-1];
// for(int i=size-1; i>=1; i--){
//     swap(arr[i],arr[i-1]);
// }
// arr[0]=temp;
// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//    RightShift(arr, size);
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
//     }

