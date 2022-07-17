#include<bits/stdc++.h>
using namespace std;

/*
 Design Pattern: In Software Industry a design Pattern is a common repeatable solution for a problem.
  Three Type of Design Patterns:
  1  Creational Design Patterns( 6 )
  2. Structural Design Pattern (8)
  3. Behavioural Design Pattern ( 12 )

  1. They are tried and tested solution to work with
  2. They are language agonistic 
  

  FACTORY DESIGN PATTERN
  1. It creates object for you rather you initiate creating objects.
  2. The objects are created at run time. So it is also called dynamic constructor but c++ does not support dynamic constructor
  3. We Implement the Factory design Pattern with the help of Pure Virtual Function which is called abstract class also
  4. We create Objects without exposing creation logic to client.
*/
class Toy{
    public:
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void showProduct() = 0;
};

class Car:public Toy{
    public:
    void prepareParts(){
        cout<<"Prepare Parts of Car"<<endl;
    }
    void combineParts(){
        cout<<"Combine Parts of Car"<<endl;
    }
    void assembleParts(){
        cout<<"assemble Parts of car"<<endl;
    }
    void showProduct(){
        cout<<"Type Car"<<endl<<" "<<"Price Rs. 10000"<<endl;
    }
};

class Scooter:public Toy{
    public:
    void prepareParts(){
        cout<<"Prepare Parts of Scooter"<<endl;
    }
    void combineParts(){
        cout<<"Combine Parts of Scooter"<<endl;
    }
    void assembleParts(){
        cout<<"assemble Parts of Scooter"<<endl;
    }
    void showProduct(){
        cout<<"Type Scooter"<<endl<<" "<<"Price Rs. 100"<<endl;
    }
};

class Bike:public Toy{
    public:
    void prepareParts(){
        cout<<"Prepare Parts of Bike"<<endl;
    }
    void combineParts(){
        cout<<"Combine Parts of Bike"<<endl;
    }
    void assembleParts(){
        cout<<"assemble Parts of Bike"<<endl;
    }
    void showProduct(){
        cout<<"Type Bike"<<endl<<" "<<"Price Rs. 200"<<endl;
    }
};



class ToyFactory{
    public:
   static Toy* createToy(int type){

        Toy *toy = NULL;

        switch(type){
            case 1:{
                 toy = new Car();
                 break;
            }
            case 2:{
                toy = new Bike();
                break;
            }
            case 3:{
                toy = new Scooter();
                break;
            }
            default:{
                cout<<"Invalid type , Please enter again"<<endl;
                return NULL;
            }
        }

        toy->prepareParts();
        toy->combineParts();
        toy->assembleParts();
        
        return toy;
    }
    
};


int main(){
  int type = 0;
  while(1){
  cout<<"Please tell me the type of Object you want to Create"<<endl<<" 1. Car"<<endl<<" 2. Bike " <<endl<<" 3. Scooter"<<endl;
  cout<<"If you want to exit please press 0"<<endl;
  cin>>type;
  if(!type){
    break;
  }else{
    Toy *toy = ToyFactory::createToy(type);
    if(toy){
        toy->showProduct();
        delete toy;
    }
  }
  }
  cout<<"EXIT..."<<endl;
  return 0;
}