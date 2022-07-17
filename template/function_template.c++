#include<bits/stdc++.h>
using namespace std;

template <class T,class U>
U big(T a, U b){
    return a>b?a:b;
}

template <class T>
T add(T a, T b){
    return (a+b);
}


int main(){
    cout<<big(5,6.6)<<endl;
    cout<<big(1,0.7)<<endl;
    cout<<add(3,4);
}