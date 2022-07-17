#include<bits/stdc++.h>
using namespace std;


template <class T>class Number{
    T a;
    public:
    Number(T x){
       a = x;
    }

    T operator+(Number n){
        return a+n.a;
    }

    
    void showData(){
        cout<<a<<endl;
    }
};



int main(){

    Number n1(5.0);
    Number n2(10.2);
    Number n3(0.0);

    n3 = n1+n2;
    n3.showData(); //15



}