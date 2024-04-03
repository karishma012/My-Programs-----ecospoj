#include <iostream>
using namespace std;
//basic syntax
class Hero
{
    //properties
public:
    string name;
    int number;

    //methods
public:
    void sing(){
        cout<<"hero sings a song"<<endl;
    }
};
int main(){
    Hero h;
    h.sing();
    h.name = "rani";
    h.number = 2;
    cout<<h.number<<endl;
}
