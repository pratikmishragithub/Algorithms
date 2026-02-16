// #include<iostream>
// using namespace std;
// int x=2;
// void fun(){
//     int x=90;
//     cout<<x<<endl;
//     ::x=80;
//     cout<<::x<<endl;
// }

// int main(){
//     x=4;
//     int x=20;
//     cout<<x<<endl;
//     cout<<::x<<endl;
// // most recent local value will print in the output.
//     {
//         int x=50;
//         cout<<x<<endl;
//         cout<<::x<<endl;
//     }
//     fun();
// return 0;

// }

// opps--->

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     private:  //access modifier public:->class ke bahar excess kr skte hai..
//     string name;
//     int age,roll_number;
//     string grade;

//     //function getter and setter.to access private member.
//     public:
//     void setname(string s){
//         // it provide functionality.
//         if(s.size()==0){
//             cout<<"name is empty"<<endl;

//            return ;
//         }
//         name=s;

//     }
//     void getname(){
//         cout<<name<<endl;
//     }
//     void setage(int a){
//         if(age<0||age>100){
//             cout<<"Invalid age"<<endl;
//             return;
//         }
//         age=a;
//     }
//     void getage(){
//         cout<<age<<endl;

//     }

//     void setGrade(string s){  //set grade.
//     grade=s;

//     }

//     string Get_grade(int pin){
//         if(pin==1234){  //security provides.
//             return grade;

//             return " ";
//         }
//     }

// };

// class Student{
//     public:
//     string name;
//     int age;
//     int roll_number;

// };

//  int main(){
// static allocation of memory.
// Student S1;
// S1.name="pratik";
// S1.age=21;
// S1.roll_number=10;
// S1.grade="A+";
// cout<<S1.name<<endl;;
// cout<<S1.age<<endl;
// cout<<S1.roll_number<<endl;
// cout<<S1.grade;

//     S1.setname("sohan");
//    S1.getname();

//    S1.setage(101);
//    S1.getage();
//    S1.setGrade("A+");
//    cout<<S1.Get_grade(12345)<<endl;

// dynamically allocation of memory.
// Student*S=new Student;

// (*S).name="harry";
// (*S).age=28;
// cout<<(*S).name<<endl;
// cout<<(*S).age;

//  }

// lecture 02--->Constructor.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Customer{
//     public:
//     int accountNo;
//     int balance;
//     string name;

// Defalult constructor.

// Customer(){
//     //constructor have no return type.
//     //invoke automatically during object creation.
//     cout<<" default constructor called"<<endl;
//     name="Ankit";
//     accountNo=12345;
//     balance=2000;
//     cout<<endl;

// }

// parametrised constructor.
// Customer(string name,int b ,int c){
// //     this->name=name;
// //    this->accountNo=accountNo;
// //    this->balance=balance;

//   this->name=name;
//   accountNo=b;
//   balance=c;

// }

//   parameterised constructor.
//     Customer(string a,int b){
//         name=a;
//         balance=b;
//     }
//     // inline constructor.
//     inline Customer(string a,int b,int c):name(a),accountNo(b),balance(c){

//     }

//     void display(){
//         cout<<name<<" "<<accountNo<<" "<<balance<<endl;
//     }

//     // copy constructor.
//     Customer( Customer &src ){
//         this->name=src.name;
//         this->accountNo=src.accountNo;
//         this->balance=src.balance;
//     }

// };
// int main(){
//     // Customer obj1;
//     Customer obj1("pratik",1234,1000);
//     Customer obj2("Aman",1000);
//     Customer obj3;
//     Customer obj4(obj2);  //by default copy constructor called.

//     obj3.display();

//     obj1.display();
//     obj2.display();
//     obj4.display();

// }

// destructor.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Customer{
//     public:
//     string name;
//     int *data;

// Customer(){
//     name="pratik";
//     data=new int;  //allocate memory dynamically.
//     *data=100;
//     cout<<"default constructor\n";
// }

// // destructor.
// ~Customer(){
//     delete data; //dynamically created memory will be free.
//     cout<<"destructor called\n";
// }

// check order of excuation of constructor.

//     Customer(){
//         name="Rahul";
//         cout<<"default constructor called:"<<name;
//     }
//     Customer(string name){
//         this->name=name;
//         cout<<"constructor name is:"<<name<<endl;

//     }

//     ~Customer(){
//         cout<<endl;
//         cout<<"destructor order is:"<<name<<endl;
//     }

// };
// int main(){
//     Customer A1("pratik"),A2("ritik"),A3("praja");
//     Customer *A4=new Customer;
//     delete A4;

// }

// lecture 03----> Encapsulation and abstraction.

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Customer
// {
//      //data members are private because for security purpose.
//     string name;
//     int AccountNO;
//     int balance;

//     public:
//     static int total_customer;//jo sab ke liye common rahe usko static bana do.
//     static int total_balance; // sab object ke liye ye ek he rahe hai isliye isko static define kiye hai.

//     Customer(string name, int accountNo, int balance)
//     {
//         this->name = name;
//         this->AccountNO = accountNo;
//         this->balance = balance;
//         total_customer++;
//         total_balance+=balance;
//     }
//     void display()
//     {
//         cout << name << " " << AccountNO << " " << balance << " " << total_customer << endl;
//     }

//     void total_cnt()
//     {
//         cout << total_customer;
//     }
//     void Deposit(){
//         cout<<total_balance;
//     }
// };
// // class ke bahar intialised krenge static keyword ko.
// int Customer::total_customer = 0;
// int Customer::total_balance=0;

// using namespace std;
// int main()
// {
//     Customer A1("pratik", 1, 1000);
//     A1.Deposit();
//     cout<<endl;

//     Customer A2("ritik", 2, 500);

//     Customer A3("Rohit", 3, 3000);
//     // A1.display();
//     // A2.display();
//     // Customer::total_customer=5;  // class member is directely v access kr kte hai.

//     A3.total_cnt();
//     cout<<endl;
//     A3.Deposit();
//     cout<<endl;
    
// }


// lecture 04--->
// inheritance.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Human{   //parent class.
//     // private:
//     string Religion,color; 
    
//     protected:
//     // public:
//     string name;
//     int age,weight;
// };

// creation of child class.
// class Student:private Human{
        
//     private:
//     int roll_number,fees; 

    // with in the class it parent class property will inheritate.
    //   protected:
    // string name;
    // int age,weight;  //yaha pe ye protected ke tarah aaya hai.class ke under isko access ke skte hai.
         
    //        public:  //protected wale ko class ke under excess krenge. 
    //     void fun(string a,int b,int c){
           
    //        name=a;
    //         age=b;
    //         weight=c;   //patent property are access.

    //     }
    
    //     void display(){
    //         cout<<name<<" "<<age<<" "<<weight<<endl;
    //     }

//       public:
//       Student(string name,int age,int weight,int roll_number,int fees){
//           this->name=name;
//           this->age=age;
//           this->weight=weight;
//           this->roll_number=roll_number;
//           this->fees=fees;
//       }

//       void display(){
//                 cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees<<endl;
//             }


// };
// int main(){
//     Student A("pratik",22,70,1,100);
//     A.display();
   
    // A.fun("pratik",22,70);
    // A.display();  //protected or private wale ko bahar seexcess nahi kr payenge.
   
// }


// lecture 05--->
// Types of inheritance.
//single inheritance.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Human{
//     protected:
//     //  private:
//     string name;
//     int age;

//     // private:
//     public:
    
//     void work(){
//         cout<<"I am working"<<endl;

//     }

// };
//  // single level inheritance.
//  class Student:public Human 
//  { int roll_number,fees;

//     public:
//     //constructor create. 
    
//     Student(string name,int age,int roll_number,int fees){
//     // Student(int roll_number,int fees):Human(name,age){
       
//         this->roll_number=roll_number;
//         this->fees=fees;
//         this->name=name;
//         this->age=age;
//     }

//     void display(){
//         cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
//     }

//  };


// int main(){
//     Student A("pratik",22,1,100);
//     A.display();
//     A.work();

// }


//multilevel inheritance.
// #include<iostream>
// using namespace std;
// class Person{
//     protected:
//     string name;
//     int age;

//    public:
//     void Introduce(){
//         cout<<"Hello my name is:"<<name<<endl;
//     }

        
// };
// class Employee:public Person{
//     protected:
//     int salary;
       


//     // Employee(string name,int age,int salary){
//     //     this->name=name;
//     //     this->age=age;
//     //     this->salary=salary;
//     // }

//     public:
//     void monthly_salary(){
//         cout<<"my monthly salary is:"<<salary;
//     }
    
// };

// class Manager:public Employee{
//     protected:
//    string department;
   

//    //creation of constructor to access the value.
//    public:
//    Manager(string name,int age,string department,int salary){
//         this->name=name; //inheritate the property of parent class.
//         this->age=age;
//         this->department=department;
//         this->salary=salary;
//    }

//    void Display(){
//     cout<<name<<" "<<age<<" "<<salary<<" "<<department<<endl;
//    }


// };
// int main(){
//     // Employee A;
//     // A.monthly_salary();
 

//     Manager B("pratik",22,"finance",50000);
//     B.Display();
//     B.Introduce();
//     B.monthly_salary();
   
// }


// Multiple inheritance.
// #include<iostream>
// using namespace std;

// /* The class Engineer has a member function that prints out the specialization of the engineer. */
// class Engineer{

//     // public:
//     protected:
//     string specilization;

//     void work(){
//         cout<<"I have specilization in:"<<specilization;


//     }
//     ~ Engineer(){
//         cout<<"Distructor of engineer is called:"<<endl;
//      }


   
// };

// class youTuber{
//     // public: 
//     protected:
//     int subscriber;
//     void ContentCreater(){
//         cout<<"I have a subscriber base of:"<<subscriber;
//     }

//    ~ youTuber(){
//         cout<<"Distructor called youTuber:"<<endl;
//     }
// };

// class CodeTeacher:public Engineer,public youTuber{
// //    public:
// public:
//    string name;

//    ~CodeTeacher(){
//     cout<<"cedeTeacher Distructor\n";
//    }

//    CodeTeacher(string name,int subscriber,string specilization){
//          this->name=name;
//          this->subscriber=subscriber;
//          this->specilization=specilization;
//    } 

//    void showcase(){
//     cout<<name<<" "<<subscriber<<" "<<specilization<<endl;
//         work();
//         cout<<endl;
//         ContentCreator();
//    }
// };
// int main(){

//     // CodeTeacher A1("pratik",2000,"cse");
//     // A1.showcase();

//     CodeTeacher A1("pratik",1000,"cse");

// }




// Hybrid Inheritance.
// #include<iostream>
// using namespace std;

// class Human{
//     public:
//     void print(){
//         cout<<"I am a student:"<<endl;
//     }

// };
//  class Male{
//     public:
//     void MalePrint(){
//         cout<<"I am a Male"<<endl;
//     }
//  };

//  class FeMale{
//     public:
//     void FeMalePrint(){
//         cout<<"I am a Female"<<endl;
//     }
//  };

//  class Boy:public Human,public Male{
//        public:
//        void BoyPrint(){
//         cout<<"I am a boy"<<endl;
//        }
//  };

//  class Girl:public Human,public FeMale{
//     public:
//     void GirlPrint(){
//      cout<<"I am a Girl "<<endl;
//     }
// };


// int main(){
//     Girl G1;
//     G1.GirlPrint();
//     cout<<endl;
//     G1.FeMalePrint();
//     G1.print();

// }


// MultiPath Inheritance.....>

// #include <iostream>
// using namespace std;

// class Human {
// public:
//     string name;

//     void Display() {
//         cout << "My name is: " << name << endl;
//     }
// };

// /* The class Engineer has a member function that prints out the specialization of the engineer. */
// class Engineer : public virtual  Human {
// public:
//     string specialization;

//     void work() {
//         cout << "I have specialization in: " << specialization << endl;
//     }
// };

// class YouTuber : public virtual Human {
// public:
//     int subscriber;

//     void ContentCreator() {
//         cout << "I have a subscriber base of: " << subscriber << endl;
//     }
// };

// class CodeTeacher : public Engineer, public YouTuber {
// public:
//     int salary;

//     CodeTeacher(string name, int subscriber, string specialization, int salary) {
//         this->name = name;  // Resolving name hiding issue
//         this->subscriber = subscriber;
//         this->specialization = specialization;
//         this->salary = salary;
//     }

//     void showcase() {
//         cout << "Name: " << name << endl;
//         cout << "Subscribers: " << subscriber << endl;
//         cout << "Specialization: " << specialization << endl;
//         cout << "Salary: " << salary << endl;

//         work();
//         cout << endl;
//         ContentCreator();
//         cout << endl;
//         Display();
//     }
// };

// int main() {
//     CodeTeacher A1("Pratik", 2000, "CSE", 1000);
//     A1.showcase();

//     return 0;
// }


// Polymorphism---->

// function overriding. 
// #include<iostream>
// using namespace std;
// class Area{

//     public:
//     int CalculateArea(int r){ //circle area
//         return 3.14*r*r;
//     }

//     int CalculateArea(int l,int b){  //rectangle area. 
//         return l*b;
//     }

// };
// int main(){

//     Area A1,A2;
//     cout<<A1.CalculateArea(3);
    
//     cout<<endl;
//    cout<<A2.CalculateArea(6,5);

// }


// operator overriding.
// #include<iostream>
// using namespace std;

// class Complex{
// int real,img;
//  public:

//  Complex(){
   
//  }; 
//  Complex(int real,int img){
//     this->real=real;
//     this->img=img;
//  }

//  void Display(){
//     cout<<real<<"+i"<<img<<endl;
//  }

//  Complex operator -(Complex &c){
//     Complex ans; //no default constructor exist for the ans.
//     ans.real=real-c.real;
//     ans.img=img-c.img; 
//     return ans;
//  };
 

// };

// int main(){
//     Complex c1(5,4);
//     Complex c2(4,3);
//     Complex C3=c1-c2;
//     C3.Display();
// }


// virtual function.
// #include<iostream>
// using namespace std;
// class Animal{
//      public:
//     virtual void speak()=0;  //pure virtual function.
       

// };

// class Dog:public Animal{
//     public:
//     void speak(){
//         cout<<"Bark"<<endl;
//     }

// };
// int main(){
//    /* The above code is written in C++ and it seems to be creating a pointer `P` of type `Animal`
// and then attempting to assign a new `Dog` object to it. However, the code is currently
// commented out, so it is not actually executing. If the code is uncommented, it would allocate
// memory for a `Dog` object and store its address in the pointer `P`, and then call the
// `speak()` method of the `Dog` object through the pointer `P`. */


//  Animal*P;
//     P=new Dog();  //dog ka address store kiye hai p me.
//     P->speak();

// }


// Exception handling.
// #include<iostream>
// using namespace std;
// class Customer{
//     public:
//     string name;
//     int balance;
//     int accountNo; 

//     Customer(string name,int balance,int accountNo){
//         this->name=name;
//         this->balance=balance;
//         this->accountNo=accountNo;
//     };

//     //deposit.
//     void Deposit(int Amount){
//         if(Amount>0){
//             balance +=Amount;
//             cout<<Amount<<":is credited successfully"<<endl;
//         }
//         else{
//             throw runtime_error("Amount should be greater then 0 ");
//         }
//     }

//     //withdraw.
//     void WithDraw(int Amount){
//         if(Amount>0&&Amount<=balance){
//             balance-=Amount;
//             cout<<Amount<<"is withdraw successfully"<<endl;

//         }
//         else{
//             throw runtime_error("Insufficient balance:") ;
//         }
//     }

// };
// int main(){
//     Customer c1("pratik",1000,1234);
//     try{
//         c1.Deposit(1000);  //jo statement error la skta hai usko try block ke under rakhenge.
//     c1.WithDraw(5000);
//     c1.Deposit(1000);

//     }catch(const runtime_error &error){   //character type error is present.
         
//         cout<<"Exception Occured:"<<error.what();
//     }
//     catch(const bad_alloc& error){
//         cout<<"Exception occured:"<<error.what();
//     }
//     catch(...){   //default catch block.
//         cout<<"Exception"<<endl;
//     } 
    
  

// }


//  File handling.
// #include<iostream>
// #include<bits/stdc++.h>
// #include<fstream>
// using namespace std;
// int main(){
//     // //open file for writting.
//     // ofstream fout;
//     // fout.open("zoom.txt"); //if present then open simply if not present then create and open.

//     // //file ke under write kr skte hai.
//     // fout<<"hello India"<<endl;
//     // fout.close(); //jo v isko handle kr rahi hai usko relase krwa denge .close ke help se.

//     vector<int>arr(5);
//      cout<<"enter the input"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     // file ko open krenge.
//     ofstream fout;
//     fout.open("zoom.txt");
//     fout<<"original Data"<<endl;
//     for(int i=0;i<5;i++){
//         fout<<arr[i]<<" "<<endl;
//     }
   

// }


#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;  //create.
    fout.open("Z1.txt");
    fout<<"hello India\n";
    fout<<"hello Pratik\n";
    fout<<"hello bhai\n";
    fout.close();

    //to read all character in single time.
    ifstream fin;  //read.
    fin.open("Z1.txt");

    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}