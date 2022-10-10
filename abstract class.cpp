//abstract class
#include<iostream>
using namespace std;
class A //abstract class
{
public:
virtual void show()=0;//pure virtual function
A()
{
cout<<"a class constructor"<<endl;
}
void get()
{
cout<<"hello from base";
}
};
class B:public A
{
public:
void show()
{
cout<<"derived class"<<endl;
}
};
main()
{
A*p=new B; //pointer object allowed for 
p->show(); //second way to pass the value
//B obj;
p->get();

}
