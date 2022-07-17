#include<iostream>
#include<fstream>
using namespace std;


//Opening modes in File handling

// ios::in, ( for input in the varibale means reading from file),
// ios::out, ( for output in the variable means writing into the file)
// ios::app, ( for append in the strea in characters and insert it in the file)
// ios::ate , ( to update the file)
// ios::binary, ( to read the file in the binary mode)

int main(){
      
      //write into the file
      fstream fout;
      fout.open("file.txt",ios::out);
      string str = "I am new to this world, and I love eating pizza";
      fout<<str;
      fout.close();
      
      //append in the file
      fout.open("file.txt",ios::app);
      string stri = "I live in Delhi, which is ruled by Aap Government";
      fout<<stri;
      fout.close();

      //update in the file
      fout.open("file.txt",ios::ate);
      string s = " I have done B.Tech(ECE) from A.I.A.C.T, delhi";
      fout<<s;
      fout.close();

      //read from the file
      ifstream fin;
      fin.open("file.txt",ios::in);
      string str2;
      char ch;
      while(fin.get(ch)){
        str2+=ch;
      }
      cout<<str2<<endl;

}