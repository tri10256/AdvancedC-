#include<bits/stdc++.h>
using namespace std;


int main(){
   

    //About tellg() g -> stands for get pointer
    ifstream fin;
    fin.open("file.txt",ios::in);
    int idx = fin.tellg();// in starting it will point to 0 as the get pointer is at starting
    char ch;
    fin.get(ch);

    idx = fin.tellg();
    cout<<idx; // here it will point to the new idx in the file as once character is already output
    
    // About tellp() , p->stands for put pointer
    //it tells about the location of the pointer when we want to write into the file
    
    ofstream fout;
    fout.open("file.txt",ios::app);
    int pos;
    pos = fout.tellp();
    cout<<pos<<endl;  // this will tell us the pos of the pointer at which we want to put .It will ignore whatever is already written for
    // the text will be written where the pos of the previous text get end

    string s = "I am so brave";
    fout<<s;
    pos = fout.tellp();
    cout<<pos<<endl;   // this will tell us the pos of the new pointer after writing the content in the file;

    //About Seekg and Seekp

    ifstream fin;
    fin.open("file.txt",ios::in);
    int pos;
    fin.seekg(3,ios::beg);  // this randomly mones the get pointer on a specific location
    pos =  fin.tellg();
    cout<<pos;

    ofstream fout;
    fout.open("file.txt",ios::app);
    int pos ;
    fout.tellp();
    cout<<pos<<endl;
    fout.seekp(3,ios::beg);
    pos = fout.tellp();
    cout<<pos<<endl;

    

 
}