#include <string>
#include <iostream>
using namespace std;

class animal{
    public:
    int nol=4;

    void sound(){
        cout<<"animal sound"<<endl;
    }

};
class dog : public animal{
    public:
    string color;
    void sound(){
        cout<<"barking"<<endl;
    }

};
int main(){
    dog mydog;
    mydog.color="brown";
    cout<< mydog.color<<endl;
    cout<<mydog.nol<<endl;
    mydog.sound();
     animal animal;
     animal.sound();
    
    return 0;

}