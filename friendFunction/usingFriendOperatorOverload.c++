#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(){

    }
    void setData(int x,int y){
        a = x;
        b = y;
    }

    void showData(){
        cout<<a<<" "<<b<<endl;
    }
   
    friend Complex operator+(Complex,Complex);

};

Complex operator+(Complex obj,Complex obj2){
    Complex temp;

    temp.a = obj.a + obj2.a;
    temp.b = obj.b + obj2.b;

    return temp;
}


int main(){

    Complex c1,c2;
    c1.setData(3,4);
    c1.showData();
    cout<<endl;
    c2.setData(5,6);
    c2.showData();
    cout<<endl;
    Complex c3;
    c3 = c1 + c2;
    c3.showData();

}