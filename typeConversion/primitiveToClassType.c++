#include<bits/stdc++.h>
using namespace std;


class Complex{
    int a, b;
    public:

    Complex(){

    }
    
    Complex(int c){
        a = c;
        b = 0;
    }

    void setData(int x, int y){
        a = x;
        b = y;
    }

    void showData(){
        cout<<a<<" "<<b<<endl;
    }
};








int main(){

       Complex c1 ; // a+ib;
       c1.setData(3,4); // 3+4i
       int a = 5;   //real number 

       c1 = a; // here real number is conerted to complex number ; 5 + i(0) 

       c1.showData(); 
       
 

}