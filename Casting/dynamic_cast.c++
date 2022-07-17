#include<bits/stdc++.h>
using namespace std;

// Dynamic Cast
// 1. Dynamic cast is used at runtime to find correct downcast.
// 2. Need at least one virtual function in base class 
// dynamic_cast<new_type>(obj)
// 3. If the casting is successful then the dynamic cast returns a value of new_type
// 4. If the cast is not successful and the new_type is pointer type then it return NULL
// 5. If the cast is not successful and the new_type is reference type then it throws an exception

class Base{
    public:
   virtual void print(){
        cout<<"this is base class";
    }
};

class Derived:public Base{
    public:
    void print(){
        cout<<"this is derived class";
    }
};

class Derived2:public Base{
    public:
    void print(){
        cout<<"this is Derived2 class";
    }
};



int main(){
    Derived d1;
    Derived2 d2;

    // This is upcast from D->B and is possible in static as well as dynamic cast but in static there is no checking 
    // because that happens at compile time while there is checking of object in dynamic cast because that happens at run time

    Base *p = dynamic_cast<Base*>(&d1); //
    p->print();
    cout<<endl;

    Base *p2 = dynamic_cast<Base*>(&d2);
    p2->print();
    cout<<endl;

    //Downcasting Base*(which have d1 type object ) -> Derived2
    Derived2 *d3 = dynamic_cast<Derived2*>(p); // this cast will fail checking is done at runtime
    if(d3 == NULL){
        cout<<"dynamic cast failed "<<endl;
    } 
   
    // Downcasting Base*(which have d1 type object) -> Derived ( success because both are of same object type)
    Derived *d4 = dynamic_cast<Derived*>(p);
    if(d4){
        cout<<"dynamic cast success";
    }
    d4->print();

    try{
     // Dervied &r1 = dynamic_cast<Derived&>(p) // no exception as casting is done    
    Derived2 &r1 = dynamic_cast<Derived2&>(d1); // exception comes as reference are of different type
    }
    catch(exception &e){
       cout<<"Dynamic cast get failed and in exception right now"<<endl;
    }
    

   
}