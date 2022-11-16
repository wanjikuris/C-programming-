//program to write single inheritance
#include <iostream>
using namespace std;
//parent class
class Mother{
    public:
    void companydirector(){
        cout<<"i am companydirector"<<endl;
    }
    void malaikavilla(){
        cout<<"i own malaikavilla"<<endl;
    }
};
// Derived class
class Daughter:public Mother{
    public:
    void land(){
        cout<<"i own land"<<endl;
    }
};
int main() {
    // object of the Daughter class
    Daughter daughter1;
    //calling members of parent class
    daughter1.companydirector();
    daughter1.malaikavilla();
    //calling members of Derived class
    daughter1.land();
    
    return 0;
