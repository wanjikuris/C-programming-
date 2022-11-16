//bonus program
#include <iostream>
using namespace std;
int main(){
    int year;
    double percentage;
    cout<<"enter the number of years served"<<endl;
       cin>>year;
    if(year>=6&&year<=10){
        cout<<"your bonus is 8%"<<endl;
    }
    else if (year >10){
        cout<<"your bonus is 10%"<<endl;
    }
    else if(year<6){
        cout<<"your bonus is 5%"<<endl;
    }
    else{
        cout<<"failed";
    }
    
    return 0;
}