#include<bits/stdc++.h>
using namespace std;

class Complex{
     int a, b;

     public:

     Complex(){

     }

     operator int(){    // casting operator
        return a;
     }

     void setData(int x, int y){
        a = x;
        b = y;
     }
     void getData(){
        cout<<a<<" "<<b;
     }
};

int main(){
    
    Complex c1; // a+ib;
    c1.setData(3,4);//3+4i
    int a;
    a = c1;
    cout<<a<<endl; 
}