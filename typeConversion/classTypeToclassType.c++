#include<bits/stdc++.h>
using namespace std;

class Product{
    int a, b;

    public:

    void setData(int x, int y){
        a  = x;
        b  = y;
    }
    void showData(){
        cout<<a<<" "<<b<<endl;
    }

    int getA(){
        return a;
    }
    
    int getB(){
        return b;
    }
};

class Item{
    int a, b;
    public:
    
    Item(){

    }

    Item(Product p){
        a = p.getA();
        b = p.getB();
    }

    void showData(){
        cout<<a<<" "<<b;
    }

};


int main(){
     
     Item i1;
     Product p1;
     p1.setData(3,4);
    
    i1=p1;
    i1.showData();
 }