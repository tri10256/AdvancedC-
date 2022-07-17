#include<bits/stdc++.h>
using namespace std;

class A{
    int a, b;
    const int c;  //this should be initialized before the formation of object of class A, So it should be initialized in the class;
    int &d;      // this should also be initialied before the formation of object class A.
    
    public:

    A(int &n):a(10),b(20),c(30),d(n)   // this is initializer list it is initializing the values of the member variables
    {

    }
    
    void showData(){
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }

};


int main(){
   int n = 100;
    A obj(n);
    obj.showData();

}