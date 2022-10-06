Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
float temperature(int f);
float celcius;
int main() {
    int fahrehneit;
    cout << "enter temperature in fahrehneit"<<endl;
    cin>>fahrehneit;
    celcius=temperature(fahrehneit);
    cout<<"temperature in celcius="<<celcius<<endl;

    return 0;
}
float temperature(int f) 
{
    float celcius;
    celcius=0.556*(f-32);
    return celcius;
}