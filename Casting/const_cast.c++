#include<bits/stdc++.h>
using namespace std;


int main(){
    //    Note: The expression const_cast<T>(v) can be used to chagne the const or volatile qualifiers of pointers and references.
    //    Where T must pe pointer, reference, or pointer to member.
      // 
      const int a = 5;
      const int *b = &a;
      int *c = const_cast<int*>(b);
      *c = 15; // removes the constantness of pointer or variables
      cout<<*c<<endl; // It will print the result as 15

}