#include<bits/stdc++.h>
using namespace std;


//1.Smart pointer is a template class that are used as a wropper for the raw pointers, and it takes care of the life time of pointers.
//2. Smart pointer is used to avoid memory Leaks.
//3.It makes sure the object is get deleted when it is not referenced any more.

// Types of Smart pointers
//1. Unique Pointer 
// Allows only one owner for the underlying pointer
// 2 . Shared Pointer ( Allows multiple owners for the underlying pointer but )(reference count is maintained)
//3. Weak Pointer ( It is special type of reference pointer which does not maintain the reference count)


class MyInt{
    int *data;

    public:
    MyInt(int *p ){
        data = p;
    }
    ~MyInt(){
        delete data;
    }
    void getData(){
        cout<<*data<<endl;
    }
};

void fun(int *p){
  
    MyInt obj(p);
}


int main(){
  int *p = new int(10);
  fun(p);
  cout<<*p<<endl; // When destructor is not called  then it will print 10. but when it is called then it will print any garbage value
  //becaise when we called the destructor it deleted the data present at that memory location.
}