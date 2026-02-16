// #include<iostream>
// using namespace std;
// int main(){
    // making of pair p is name of variable;
    // pair<int,string>p;
    // value insert krenge p me 1. make pair ka use krenge.
    // p=make_pair(2,"abc");
    // 2 way
    // p={2,"ABC"};
    // pair ki value ko change v kr skte hai.& by  refrence value ko apne sath layega copy create nahi krega.
    // pair<int,string>&p1=p;
    // p1.first=100;
    // cout<<p.first<<" "<<p.second<<endl;
    // for making pair of two array.
//     int a[]={1,2,3};
//     int b[]={2,3,4};
//     pair<int,int>p_array[3];
//     p_array[0]={1,2};
//     p_array[1]={2,3};
//     p_array[2]={3,4};
//     swap(p_array[0],p_array[2]);
//     for(int i=0;i<3;i++){
//         cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
//     }

//     return 0;
// } 

// vectors.
// #include<iostream>
// #include<vector>
// using namespace std;
// void PrintVec(vector<pair<int,string>>&v){
//     cout<<v.size()<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl; 
//     }
// }
// int main(){
    // vector<int>v(5,3);
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){ 
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // PrintVec(v);
    // vector<int>v2=v;
    // v2.push_back(80);
    // PrintVec(v2); 
    // cout<<"size of vector:"<<v.size();

// pairing in vector.
// vector<pair<int,string> >v={{1,"abc"},{2,"ghi"},{4,"kli"}}; 
// PrintVec(v);

// }

// lecture 05.
// iterators.
// #include<bits/stdc++.h>
// // #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={1,2,3,4,5,6};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     // declaration of itreator.
//     vector<int>::iterator it=v.begin();
//     for(it=v.begin();it!=v.end();it++){
// cout<<(*it)<<endl;
//     }

//     // vector<pair<int,int>>v_p={{1,2,},{2,3},{4,5}};
//     // vector<pair<int,int>>::iterator it;
//     // for(it=v_p.begin();it!=v_p.end();it++){
//     //     cout<<(it->first)<<""<<(it->second)<<endl;
//     // }
   
// //    range based loop.
// for(int &value:v){
//     value++;
   
// }
// // for(int &value:v){
// // //  cout<<value<<" ";
// // value++;

// // }
// //    auto keyword.
// for(auto value:v){
//     cout<<value<<" ";
// }

// }

#include<bits/stdc++.h>
using namespace std;  
void countwords( unordered_map<char,int>&mp,string str){
    for(int i=0;i<str.length();i++){
       char ch=str[i];  //find character.
       //increase count.
       mp[ch]++;
    }

}
int main(){
    string str="pratik Kumar";
    unordered_map<char,int>mp;
    countwords(mp,str);

    for(auto & it:mp){
        cout<<it.first<<endl;
        cout<<it.second<<endl;
    }
return 0;
}
 
 
 


 

