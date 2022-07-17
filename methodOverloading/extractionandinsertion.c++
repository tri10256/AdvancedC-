#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(){}
    void setData(int x, int y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<a<<" "<<b<<endl;
    }

    friend ostream& operator<<(ostream&,Complex); //it is not possible to created an object of ostream
    friend istream& operator>>(istream&,Complex&); 
   
};


ostream& operator<<(ostream& out,Complex obj){
    out<<obj.a<<" "<<obj.b<<endl;
    return out;
}

istream& operator>>(istream& in,Complex &obj){
    in>>obj.a>>obj.b;
    return in;
}



int main(){

    Complex c1;
    c1.setData(3,4);
    cin>>c1; 
    cout<<c1<<endl; // this should be read as  ostream& operator<<(cout,c1), insertion operator is called and cout and complex numbers are passed as argument into it;

}