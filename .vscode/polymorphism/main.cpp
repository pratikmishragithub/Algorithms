#include<iostream>
using namespace std;
class A{
    public:
    
    void display()
    {
    cout<<"base class<<endl";
}
};
class B:public A{   
    public:  
    void display()
    {
    cout<<"/n derived class";

}
};
int main(){
class B obj;
obj.display(); obj.A::display();

return 0;
}


