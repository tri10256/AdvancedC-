#include<iostream>
using namespace std;

class A{

    public:
    int a, b;
    int *p;
    public:

    A(){
       p = new int;
    }
    A(A &d){
        a = d.a;
        b = d.b;
       // p = d.p;  //till here it was shallow copy
       p = new int;//this is the change that we did in the shallow copy to make it a deep copy 
       *p = *(d.p);
    }

    void setData(int x,int y,int z){
        a = x;
        b = y;
        *p = z;
    }

    void getData(){
        cout<<a<<" "<<b<<" "<< *p<<endl;
    }
};


int main(){
     
     A obj;
     obj.setData(20,39,50);
     obj.getData();

     A obj2 = obj;
     obj2.getData();
     
     cout<<obj.p<<" "<<obj2.p<<endl;  // in the shallow copy the memory location is but in the deep the memory which this p is pointing is different then 
    //it is said tha we have created a deep copy


}