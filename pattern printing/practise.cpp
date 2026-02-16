// #include<iostream>
// using namespace std ;
// int main(){
    // int array[100];
    // cout<<"arary creation"<<endl;
    // int array[5]={10,23,45,56,67,};
// cout<<"size of an array"<<endl<<sizeof(a);
// int array[5];   
// int n=5;
// for(int i=0; i<5; i++){
//     // cout<<array[i]<<endl;
        
    
//     cout<<"array of indexes"<<i<<endl;
// cin>>array[i];
// // }
// }
// }


// int array[5]; 
 
// int n=5;
// int sum=0; 
// for(int i=0; i<5; i++){
//     // cout<<array[i]<<endl;
//       int sum =sum+array[i];
//       cout<<sum; 
    

// // }
// }
// }

#include<iostream>
#include<vector>
using namespace std;
void WavePrintMatrix(vector<vector<int>>vec){
    int m=vec.size(); //row ka size.
    int n=vec[0].size();  //col ka size.
for(int col=0;col<n;col++){
    if((col&1)==0){  //even index col hai.
for(int row=0;row<m;row++){
    cout<<vec[row][col]<<" ";
}
    }
    else{
        for(int row=m-1;row>=0;row--){
            cout<<vec[row][col]<<" ";
        }
    }
}
}
int main(){
    vector<vector<int>>vec{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}

    };
    WavePrintMatrix(vec);

}
