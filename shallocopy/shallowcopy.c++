#include<bits/stdc++.h>
using namespace std;


class A{
    int a,b;
    public:
    A(){

    }
    A(A &d){       //if we would have not provided the copy constructor then it would have been called by default
        a = d.a;
        b = d.b;
    }
    void setData(int x, int y){
        this->a = x;
        this->b = y;
    }
    void showData(){
        cout<<a<<" "<<b<<endl;
    }
};



int main(){
       
       A obj;
       obj.setData(10,20);
       obj.showData();

       A obj2;
       obj2 = obj;
       obj2.showData();
}