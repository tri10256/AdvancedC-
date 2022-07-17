#include<iostream>
using namespace std; //std is the name of namespace present in the iostream library. 

// What is namespace :- namespace is a key word by which we can define our namespace and we can use it to  create a 
//  group of identifiers which we want to use in our program. We also create namespace to reduce the naming conflicts of 
// different identifiers present with same name in different namespaces.
//this namespace is present in our file.

namespace Myspace{
    int a;     
    int fun();

    class A{
        public:

        int fun2();
    };
}

// To define the members of the namespace we use the scope resolution operator :: to access them
 int Myspace::fun(){
     return 10;
 }
 int Myspace::A::fun2(){
    return 20;
 }

// to access the members we can use the scope resolution operator ::  or we can use the (using keyword )
using namespace Myspace; 

int main(){
    
    a = 15;
    cout<<a<<endl;
    int b = fun();
    A obj;
    int c = obj.fun2();
    cout<<b<<" "<<c<<endl;
}