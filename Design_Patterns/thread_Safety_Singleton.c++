#include<bits/stdc++.h>
using namespace std;
// This is not thread safe because it can happen that two thread will call for creation of instance and can create two instances
// so to save from that we use  mutex lock and unlock 


// Method 1 Mutex lOck and unlock
// Problems: Mutex lock and unlock are costly operation 

class GameSetting{
    static GameSetting* _instance;
    int _width;
    int _height;
    int _brightness;
    GameSetting(){} //private Constructor this will make sure that no other instance should be created
    GameSetting(GameSetting &obj); //copy constructor this will also make sure that no copy instance should be created
    GameSetting * operator=(GameSetting &b){ // this will save from creating deep copy
        return _instance;
    }
    
    public:
    static GameSetting* getInstance(){

        //mutexlock
        if(_instance == nullptr){
            _instance = new GameSetting();
        }
       //mutexunlock

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

// To Solve Problem 1;
// We use eager instantiation we create the instance just at the beginning of the program but
// it have also problem creating a resource which may not be used later

int main(){

    GameSetting *setting = GameSetting::getInstance() ;// Eager instantiation 

}

// Third Method : Double Checking it solves the both problems which are discussed above
class GameSetting{
    static GameSetting* _instance;
    int _width;
    int _height;
    int _brightness;
    GameSetting(){} //private Constructor this will make sure that no other instance should be created
    GameSetting(GameSetting &obj); //copy constructor this will also make sure that no copy instance should be created
    GameSetting * operator=(GameSetting &b){ // this will save from creating deep copy
        return _instance;
    }
    
    public:
    static GameSetting* getInstance(){

        if(_instance == nullptr){
            //mutexlock
        if(_instance == nullptr){
            _instance = new GameSetting();
        }

        //mutexunlock
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