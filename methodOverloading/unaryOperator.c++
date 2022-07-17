#include<bits/stdc++.h>
using namespace std;

template <class T>class Number{
     T a;

     public:

     Number(T x){
        a = x;
     }

     T operator-(){
       return a = -a;
     }

     void showData(){
        cout<<a<<endl;
     }
};


int main(){
      Number n(9);
    //  n = -n; //
      n.showData();  //-9
      Number b(0);
      b = -n;
      b.showData();
    
}