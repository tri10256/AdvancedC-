#include<bits/stdc++.h>
using namespace std;

//1. static_cast is like the  immplict cast in c type
//2. Benefit of using static cast is that it is easy to search in a large file of program
//3. Static cast is done at compile time.


//1. To convert one type to another type in implicit way
int main(){
     float a = 3.14;
     int b = a; //this is same as below line, which is done by compiler . 
     int b = static_cast<int>(a);
     cout<<b<<endl;
}

//2.  static cast is used when conversion between types is provided through conversion operator or conversion constructor

class A{
    int a ;
    public:
    A(int x):a{x}{} //conversion constructor // convert from primitive to class type
    operator string(){ //to convert from class to primitive type 
        return to_string(a);
    }
    
};



int main(){
      int a = 5;
      A obj(a);
      string s = obj; // Done by compiler 
      cout<<s<<endl;
      cout<<typeid(a).name()<<endl; //integer
      cout<<typeid(s).name()<<endl; //float 
      obj = 20;
      // by using static cast we can also do same thing
      string str = static_cast<string>(obj);
      cout<<str<<endl;
      cout<<typeid(str).name()<<endl; 
      obj = static_cast<A>(20);  // same using static cast

}


//3. Implicit conversion is dangerous at some locations like this while static cast save us from that 
// implicit conversion will convert the char* to int * which is dangerous because char * pointer have one byte of memory
// and when it is converted to int* it take 4 bytes of memory which is dangerous as can do bad things in memory
// using static cast to do that will save us from that
int main(){
      
      char c  = '5';
      int *p = (int *)&c; // this will be converted to int* which is dangerous
      *p = 5;
      cout<<typeid(*p).name()<<endl;

      char s = 's';
      int *q = static_cast<int*>(&s); // this will not be convertd it does not allow us to convert from char pointer to int pointer     
}


//4. static cast does not allow us to convert derived class pointer to private base class pointer while normal implicit casting use to do that

class Base{
    int a ;
    public:
    Base(){

    }
    Base(int x):a{x}{}  
};

class Derived:private Base{
    int b;
    public:
   
};
int main(){
   Derived obj;
   Base *p = (Base*)&obj; // this is allowed in C using implicity type conversion by not using static    
   Base *p = static_cast<Base*>(&obj);// this is static and not allowed in C++
}


// 5 static can be used in upcast but should not be used in donwcast

class Base{};
class Derived:public Base{};
class Derived2:public Base{};

int main(){
    
    Derived d1;
    Derived2 d2;
   //upcast from derived to base class
    Base *p = static_cast<Base*>(&d1);  // These Both cast are allowed because it is  convergig derived which is public inheritied form Base
    Base *p2 = static_cast<Base*>(&d2);

   // confused cast downcast from base to derived classs should not be done because static cast are done at compile time and 
   // no runtime checks are done 
   // It will get compiled but should not be used 
    Derived *p1 = static_cast<Derived*>(p2); // here to make it correct we use dynamic cast
    Derived *p3 = static_cast<Derived*>(p);
}

// 6. static cast is preferred way to use for converting from to void pointer or converting from void pointer

int main(){
    int a = 5;
    void *p = static_cast<void*>(&a); // Converting from int* to void*
    int *p1 = static_cast<int*>(p);  //  Converting from void* to int*
}
