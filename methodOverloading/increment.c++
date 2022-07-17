#include<bits/stdc++.h>
using namespace std;

class Number{
    int a;

    public:

    Number(){

    }
    void setData(int x){
       a =  x ;
    }
   Number operator++(){
     Number temp;
     temp.a = ++a;
     return temp;
   }
   Number operator++(int){
       Number temp;
       temp.a = a++;
      return temp;
   }
   void showData(){
     cout<<a<<endl;
   }

};



int main(){
     cout<<"postIncrement"<<endl;
     Number n;
     n.setData(9);
     n.showData();
     Number n2;
     n2 = n++;
     n2.showData();
     n.showData();
     cout<<"preincrement"<<endl;
     Number n3;
     n3.setData(11);
     n3.showData();
     Number n4;
     n4 = ++n3;
     n4.showData();
     n3.showData();
}