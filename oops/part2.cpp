#include <iostream>
using namespace std;

//PILLARS OF OOPS

class Hero
{
    //properties
public:
    string name;
    int number;
    int a;
    int b;

    //methods
public:
    void voice(){
        cout<<"good voice"<<endl;
    }

    //opeartor overloading

    void operator + (Hero &obj){
        int v1 = this->a;
        int v2 = obj.a;
        cout<<"result is "<<v2-v1;
    }
};
class Akshay{
    public:
    void voice(){
        cout<<"akshay has good voice"<<endl;
    }

};

class salman : public Hero , public Akshay{

};

int main(){
    Hero x,y;
    x.a = 4;
    y.a = 7;
    x + y;
    
    
    
}
