#include<bits/stdc++.h>
using namespace std;

// A friend function can become friend of more than two  classes but it is required to declare it in those classes;

class B;
class A{
    int a, b;
    public:

    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout<<a<<" "<<b<<endl;
    }

    friend void getClassData(A,B); // At the time of declaration we need to just give the datatype of the class;

};

class B{
    int a, b;
    public:

    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout<<a<<" "<<b<<endl;
    }

    friend void getClassData(A,B);

};

void getClassData(A obj, B obj2){
    cout<<"dataOfAClass"<<" "<<obj.a<<" "<<obj.b<<endl;
    cout<<"dataOfBClass"<<" "<<obj2.a<<" "<<obj2.b<<endl;
}


int main(){
     A obj;
     obj.setData(4,5);
     B obj2;
     obj2.setData(9,11);
     getClassData(obj,obj2);

}