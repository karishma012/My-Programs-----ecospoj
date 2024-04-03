#include <iostream>
using namespace std;

class Hero
{
    //properties
public:
    string name;
    int number;
    static int time;

    //methods
public:
 Hero(){
    cout<<"constructor called"<<endl;
}
    void sing(){
        cout<<"hero sings a song"<<endl;
    }
    //use of getters and setters
    // void setdata(string name){
    //     this->name = name;
    // }
    // string getdata(){
    //     return this->name;
    // }
    // ~Hero(){
    //     cout<<"now i am deleted"<<endl;
    // }
    
};
int Hero::time = 5;
int main(){
    Hero h;
    // Hero *b = new Hero;
    // delete b;

    //use of static keyword

    cout<<Hero::time<<endl;
    
  
}
