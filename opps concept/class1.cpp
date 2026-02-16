// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// class Student
// {

//     // class ke jitne v member hote hai wo private hote hai.By the help of access modifier we can excess class element.
// private:
//     string gf;
//     // acess modifier.
// public:
//     int id;
//     int age;
//     bool present;
//     string name;
//     int nos;
//     int*v;

//     // jis naam ka class hoga wahi naam ka constructor hoga.

//     // creating of constructor(ctor).jis naam ka class hoga wahi naam ka constructor hoga.
//     // default constructor by default garbage value assign kr dega.
//     Student()
//     {
//         cout << "student default ctor called" << endl;
//     }
//     // parameterisied constructor.
//     Student(int _id, int _age, bool _present, string _name, int _nos, string _gf)
//     {
//         id = _id;
//         age = _age;
//         present = _present;
//         name = _name;
//         nos = _nos;
//         gf = _gf;
//         cout << "student perametrised ctor called" << endl;
//     }
//     Student(int id, int age, bool present, string name, int nos)
//     {
//         this->id = id;
//         this->age = age;
//         this->present = present;
//         this->name = name;
//         this->nos = nos;
        
//     }
//     // copy constructor.by refrence bhejne pe cooy nahu banega. 
//     Student( const Student &srcobj)
//     {

//         // srcobj.gf="chutki"; if you do not decalre the class student to const we can change the data.
//         cout<<"student cpopy constructor called:"<<endl;
//         this->name = srcobj.name;
//         this->id = srcobj.id;
//         this->gf = srcobj.gf;
//         this->nos = srcobj.nos;
//         this->v=new int(10);
//     }
//     // getter and setter funcation to get and set the value of private member.
//     string Getgfname(){
//         return gf;
//     }
//    void Setgfname(string gf){
//     this->gf=gf;

//     }

    //     // in function formet their behavior is listed.
//     void study()
//     {
//         cout << "studying" << endl;
//     }
//     void gaming()
//     {
//         cout << "gaming" << endl;
//     }
//     void sleeping()
//     {
//         cout << "sleeping" << endl;
//     }
//     // distructor called.extra spaces ko delete kr dega destructor.
//     ~Student(){
//         cout<<"destructor called"<<endl;
//         // jo v extra memory banyenge usko destructor ke under delete kremge.
//         delete v;
//     }
    

// private:
//     void gfchatting()
//     {
//         cout << "chatting" << endl;
//     }
// };
// int main()
// {

    // To check size of empty calss.
    cout << sizeof(Student) << endl;
    // aise student class me data insert krna bahot muskil ho jaiyega isliye hm constructor banate hai.
    // Student s1;

    // s1.name="pratik";
    // s1.id=1;
    // s1.nos=4;
    // s1.present=0;
    // s1.age=20;

    // s1 me s2 ki value ko copy krenge isko copy constructor kehte hai.

    // Student s2(1, 12, 1, "chota don", 1, "indumati");
    // copy constructor ko objecct bana kr copy krenge.
    // two ways to add copy constructor.
    // Student s1=s2; 
    // Student s1(s2);
    // s1 = s2;

    // destructor called b/c it  defines in the scope.
// {
// Student s2(1, 12, 1, "chota don", 1, "indumati");
// cout<<s2.name<<endl;

// cout<<s2.Getgfname()<<endl;
// s2.Setgfname("heena");
// cout<<s2.Getgfname()<<endl;

// }
// Student s1;
// s2.Setgfname("gungun")<<endl;
// s2.Getgfname()<<endl;

    
//  Student s1(s2);

    // cout << s1.name << endl;
    // cout << s2.name << endl;
    // cout << s2.id << endl;  
    // cout << s2.nos << endl;

    // creating heap memory and after using it delete it.
    // Student *s3 = new Student(2, 1, 11, "kaliya", 2);
    // cout << s3->name << endl;
    // cout << s3->nos << endl;

    // delete s3;
// } 

// This access of class using . will take more time so we use constructor.
// jis name ka class hoga wahi naam ka constructor hoga.
// agar class banega to constructor khud ban jaiyega.
// compiler ek defaulty constructor bana dega.
// heap ke data member ko access krne ka tarika hau arrow -> hai.
// note:-> constructor nahi banyaemge to compiler bana dega destructir nahi banayenge to compiler bana dega.compiler copy constructor v bana dega default type ka jo ki shallow copy hoga.

// constent keyword in c++.
// #include<iostream>
// using namespace std;
// class abc{
//     int x;
//     int*y;
//     public:
//     // constructor abc is created.
//     abc(){
// x=0;
// y=new int(0);
//     }
//     // classs ke member variable ko labhi nahi change krna hai to usko const bana demge.
//     int getx() const {
//         // x=90;give error b/c x is constant.
//         return x;
//     }
//     void setx(int _val){
//         x= _val;
//     }
//     int gety(){
//         return *y;
//     }
//      void sety(int _val){
//         * y= _val;
//     }
// };
// int main(){
// x is costent.initialization can be done.
// const int x=34;
// but we can not re-assign a value.
// int x=10;
// cout<<x<<endl;

// 2.const with pointer.
//   const  int *a=new int(3);
//     // *a=2;
//     cout<< *a <<endl;
//     // cant change the content of pointer.constant data ,non-constant pointer.
//     // *a=20;
//     // cout<<*a<<endl;

//     delete a;
//     int b=20;
//     // pointer itself be reassigned.
//     a=&b;
//     cout<< *a <<endl;
//     return 0;

// 3.const pointer ,but not const data.
// int*const a=new int(2);
// cout<<*a<<endl;
// *a=20;
// cout<<*a<<endl;
// int b=90;
// a=&b; nahi chalega constant pointer.
// return 0;

// 4 data and pointer both are constant.
// nahi yaha pointer update ho sktabhai na he data.
// const int *const a=new int(2);
// *a=23;
// int b=90;
// a=&b;

// abc a;
// cout<<a.getx()<<endl;
// cout<<a.gety()<<endl;
// return 0;

// }

// static keyword in c++.
// #include<iostream>
// using namespace std;
// class abc {
//     public:
//     static int x,y;
//     void print()const{
//         cout<<this->x<<" "<<this->y<<endl;
//     }

// };
// // abc ka sab ek he x ko assign kr raha hai.
// // staic keyword ko bahar he initilaised krte hai.
// int abc::x;
// int abc::y;
// int main(){
//     abc obj1;
//     obj1.x=1;
//     obj1.y=2;
//     obj1.print();

//     abc obj2;
//     obj2.x=10;
//     obj2.y=20;
//     obj1.print();
//     obj2.print();
//     return 0;

// }
