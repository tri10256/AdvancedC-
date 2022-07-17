#include<iostream>
#include<fstream>
using namespace std;

int main(){
   //To write in file
   ofstream fout;
   fout.open("file.txt");
   string str = "hello world111111111111111111111111111111111111111111111111111111111111";
   fout<<str;
   fout.close();

   //To read from file

   ifstream fin;
   fin.open("file.txt");
   //in this method the space will not get printed because extraction operation ignores them;
   char ch;
   while(fin>>ch){
       cout<<ch;
   }
// this method make sure that the space between the character will also get printed
    char ch;
    while(fin.get(ch)){
        cout<<ch;
    }
    
   
}