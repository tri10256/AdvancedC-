#include<iostream>
using namespace std;

class A{
    protected:
    int a, b;
  public:
  A(){
     cout<<"A constructor"<<endl;
  }

  void setData(int x, int y){
    cout<<"A SetData";
    a = x;
    b = y;
  }

  void showData(){
    cout<<a<<" "<<b<<endl;
  }

 virtual ~A(){  /// Aisa karne ka jarurat pada becuase early binding mein  compiler ko nhi pata ki B class ka koi object hai
   // jiski memory free karni hai wo to sirf A class ke destructor ko janta hai aur usko call karega is case mein pointer ji b ke variable ko point kar
   //raha hai uski memory free nhi ho paygi. Uski memory free karne ke liye early binding se late binding me convert karna hoga
   // to uske liye virtual keyword lagaya hai.
   
    cout<<" A Destructor is called";
  }

};

class B:public A{
    public:
     B(){
        cout<<"B constructor"<<endl;
     }
     void setData(int x, int y){
        cout<<"B setData"<<endl;
        a = x;
        b = y;
     }
     ~B(){
        cout<<"B destructor"<<endl;
     }
};

void fun(){

    // B *p = new B();  //in this case the pointer is of type B so the destructor of B class is called and B will call the parent class destructor
    // p->setData(3,4);
    // cout<<endl;
    // p->showData();
    // delete p;// this will free up the memory to which it is pointing and isko
    //call karna important hai *p type mein ye automatically call nhi hota hai sirf
    // simple objects ke type mein hi automatically call hota hai ,

    ///Idea thoda change 
    A *p = new B();
    p->setData(3,4);
    cout<<endl;
    p->showData();
    delete p;    // if we do not use virtual keyword in the destructor of A class then the destructor of B will not get called
    // automatically due to early binding .So use virtual in the destructor of A class.
   
}

int main(){
   
    // B obj;
    // obj.setData(9,5);  //In this case the destructor of child class will run first 
    // and when it will finish its execution then it will call the destructor of parent class.
    // obj.showData();
    fun();   
}