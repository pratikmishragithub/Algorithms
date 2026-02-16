#include<iostream>
#include<string.h>
using namespace std;
// int  findlength(char ch[],int size){
//     int length=0;
//     for(int i=0;i<size;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{
//             length++;
//         }
//     }
//     return length;
// } 

// void GetReversed(char ch[],int size){
//     int i=0;
//     int j=size-1;
//     while(i<=j){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
   
// }
//  int  findlength(char ch[],int size){
//     int length=0;
//     for(int i=0;i<size;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{
//             length++;
//         }
//     }
//     return length;
// } 

// convert to upper case.
// void ConvertToUpperCase(char ch[],int size){
//     int index=0;
//     while(ch[index]!='\0'){
    //   char currcharacter=ch[index];
    // //   cheeck krte hai ki ye LOWER case me hai ki nahi.
    // if(currcharacter>='a'&&currcharacter<'z'){
    //     ch[index]=currcharacter-'a'+'A';
    // }
    // index++;  //updation of index.

// if(ch[index]>='a'&&ch[index]<='z'){
//   ch[index]=ch[index]-'a'+'A';  //change krke store krenge ws index pe.
// }
// index++;

//     }
// }

// repalce charcter.
// void ReplaceCharacter(char ch[],int size){
//     int index=0;
//     while(ch[index]!='\0'){
//         if(ch[index]=='@'){
//             ch[index]=' ';
//         }
//         index++; //updation of index.
//     }
    
// }

// bool CheckPalindrome(char ch[],int size){
//     int s=0;
//     int e=size-1;
//     while(s<=e){
//        if(ch[s]==ch[e]){
//         swap(ch[s],ch[e]);
//         s++;
//         e--;
//        }
//        else{
//         return false;
//        }
//     }
//     return true;
// }
//  int  findlength(char ch[],int size){
//     int length=0;
//     for(int i=0;i<size;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{
//             length++;
//         }
//     }
//     return length;
// } 

int main(){
//     char ch[100];
//     cin.getline(ch,99);
//     // ReplaceCharacter(ch,100);
//     // ConvertToUpperCase(ch,100);
// int len=  findlength(ch,100);

// bool ispalindrome=CheckPalindrome(ch,len);
//     if(ispalindrome){
//         cout<<"valid palindrome:"<<endl;

//     }
//     else{
//         cout<<"not a palindrome:"<<endl;
//     }
    
    // int len=  findlength(ch,100);
    // GetReversed(ch,len);
    // cout<<ch;
    // cin.getline(ch,99);
    // cout<<ch; 
    // cout<<endl;

  
//   cout<<"length is:"<<ans;
//   cout<<endl;
//   cout<<strlen(ch);
    // for(int i=0;i<10;i++){
    //     cout<<"index at:"<<i<<" "<<ch[i]<<endl;
    // }
    // char temp=ch[6];
    // int value=int(temp);
    // cout<<"printing value of null character"<<value;


// string.
// string name;
// cin>>name;
// getline(cin,name);
// cout<<name;
// cout<<name.length();
// int index=0;
// while(name[index]!='\0'){
//     cout<<index<<" "<<name[index];
//     cout<<endl;
//     index++;
// }
// int value=(int )name[6];
// cout<<value;


string str1="yaar tera supar star desi kalakar";
string str2="tera";
if(str1.find(str2)!=string::npos){
    cout<<"string found:"<<endl;
}
else{
    cout<<"not found"<<endl;
}
}