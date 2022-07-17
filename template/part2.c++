#include<bits/stdc++.h>
using namespace std;
//Generalization class using templates

template <class T,class U> class ArrayList{  ///Important to clss is a template class 
    private:

    struct Block{
        T *arr;
        U capacity;
    };

    Block *block;
    public:

    ArrayList(U capacity){
        block = new Block;
        block->capacity = capacity;
        block->arr = new T[capacity];
    }

    void addElements(T ele,U index){
         if((index > block->capacity) || (index < 0)){
            cout<<"Index is out of range";
         }else{
            block->arr[index] = ele;
         }
    }

    void displayEle(U index){
        cout<<block->arr[index]<<endl;
    }
    void displayAll(){
       for(int i= 0;i < block->capacity;i++){
        cout<<block->arr[i]<<endl;
       }
    }

};

int main(){
     ArrayList <double,int>list1(5);
     list1.addElements(1.5,0);
     list1.addElements(4.6,1);
     list1.addElements(5.5,3);
     list1.addElements(4.9,4);
     list1.addElements(9.3,2);

     list1.displayEle(2);
     cout<<endl;

     list1.displayAll();

    
}
