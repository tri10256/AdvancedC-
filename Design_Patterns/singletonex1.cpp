#include<bits/stdc++.h>
#include<thread>
#include<mutex>
using namespace std;

class GameSetting{
    static GameSetting* _instance;
    static int counter;
    static mutex mtx;

    int _width;
    int _height;
    int _brightness;

    //private Constructor this will make sure that no other instance should be created
    GameSetting(){
        counter++;
        cout<<"constructor is called "<<"number of instance::"<<counter<<" "<<endl;
    }

    //copy constructor this will also make sure that no copy instance should be created 
    GameSetting( const GameSetting &);

    // this will save from creating deep copy
    GameSetting* operator=( const GameSetting &); 
       
    public:
    static GameSetting* getInstance(){
        
        if(_instance == nullptr){
            mtx.lock();
        if(_instance == nullptr){
            _instance = new GameSetting();
        }
          mtx.unlock();
        }

        return _instance;
    }
    void setWidth(int x){
        _width = x;
    }
    void setHeight(int x){
        _height = x;
    }
    void setBrightness(int x){
        _brightness= x;
    }
    void getDetails(){
        cout<<"width:"<<_width<<endl<<"height:"<<_height<<endl<<"brightness:"<<_brightness<<endl;
    }

};


//initialization of the static variables 
GameSetting* GameSetting::_instance = nullptr;
int GameSetting::counter = 0;
mutex GameSetting::mtx;

void user1Creates(){

   GameSetting *setting = GameSetting::getInstance();
    setting->setWidth(14);
    setting->setHeight(34);
    setting->setBrightness(34);
    setting->getDetails();
    delete setting;
}

void user2Creates(){
   GameSetting *setting2 = GameSetting::getInstance();
    setting2->getDetails();
    setting2->setBrightness(200);
    setting2->getDetails();
    delete setting2;
  
}

int main(){
   
   thread t1(user1Creates);
   thread t2(user2Creates);
   t1.join();
   t2.join();

   return 0;
}