//grading system 
#include <iostream>
using namespace std;
int main() 
{
    int eng,maths,science,french,cre;
    float sum=0 ,avg;
    cout << "Enter marks for 5 units"<<endl;
    cin>>eng>>maths>>science>>french>>cre;
    avg=(eng+maths+science+french+cre)/5;
    {
        sum=eng+maths+science+french+cre;
    }
    cout<<"\nTotal marks of the student ="<<sum;
    avg=sum/5;
    cout<<"\nAverage ="<<avg;
  
    if(avg>=70&&avg<=100)
    {
       cout<<"\nGrade A";
    }
    else if(avg>=60&&avg<=69)
    {
     cout<<"\nGrade B";   
    }
    else if(avg>=50&&avg<=59)
    {
        cout<<"\nGrade C";
    }
    else if(avg>=40&&avg<=49)
    {
        cout<<"\nGrade D";
    }
    else if(avg>=0&&avg<40)
    {
        cout<<"\nFail";
    }

    return 0;
} 