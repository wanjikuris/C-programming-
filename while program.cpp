//while program 
#include <iostream>
using namespace std;
int main(){
    int number=0;
    int sum=0;
    //input from the user
    cout<<"enter a number:";
    cin>>number;
    while(number>=0){
        //addd positive numbers
        sum+=number;
        //input againif number is positive
        cout<<"enter a number:";
        cin>>number;
}
//display sum
cout<<"\n the sum is"<<sum<<endl;
    return 0;
}