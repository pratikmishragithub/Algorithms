#include<iostream>;
using namespace std;

bool is_prime(int n){
  bool is_prime = true;

  if(n<=1){
   return false;
  }

   for(int i=2;i<n/2;i++){
      if(n%i==0){
         return false;
         break;
      }
   }
   return true;
}
int main(){
cout<<"enter those num who will check prime or not"<<endl;
int n;
cin>>n;
if(is_prime(n)){
   cout<<"prime number";
}else{
   cout<<"not prime number";
}
return 0;

}