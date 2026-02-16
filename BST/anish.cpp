#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int>&arr,int m,int mid){
    int studentcount = 1;
    int pagesum = 0;
    for(int i =0;i<arr.size();i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }else{
             studentcount++;
             if(studentcount>m||arr[i]>mid){
                return false;
             }
             pagesum = arr[i];
        }
    }
    return true;
}

int bookallocate(vector<int>&arr,int m){
    int s = 0;
    int ans = -1;
    int sum= 0;
    for(int i = 0;i<arr.size();i++){
        sum+=arr[i];

    }
    int e = sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,m,mid)){
            ans =  mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>anish={10,20,30,40,50};
    cout<<bookallocate(anish,2);
    return 0;
}