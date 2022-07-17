#include<bits/stdc++.h>
using namespace std;

class Foo{
    int a;

    public:
    Foo(int x){
        a = x;
    }
    int getA(){
        return a;
    }
    ~Foo(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    
    Foo *p = new Foo(10);
    cout<<p->getA()<<endl;
    unique_ptr<Foo>ptr(p); //it automatically calls the delete inside it

    //other syntax to create unique_ptr
    unique_ptr<Foo>ptr2(new Foo(20));
    cout<<ptr2->getA()<<endl;

    //best way to create it
    unique_ptr<Foo>ptr3 = make_unique<Foo>(30);
    //cout<<ptr3->getA()<<endl; can get also with it and
   // cout<<(*ptr3).getA()<<endl; //same way but using dereference operator
   // cout<<ptr3.get()->getA()<<endl; //same way but using get()

    //unique pointers cannot be assigned to each other it can be moved;
    unique_ptr<Foo>ptr4 = move(ptr3);
    //cout<<ptr4->getA()<<endl;
    cout<<ptr3->getA()<<endl; // no object in ptr3

}