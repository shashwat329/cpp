#include<iostream>
using namespace std;

int main(){
    int math,science,sst,english,hindi,percentage;
    cout<<"Enter the marks obtained in maths: ";
    cin>>math;
    cout<<"Enter the marks obtained in science: ";
    cin>>science;
    cout<<"Enter the marks obtained in sst: ";
    cin>>sst;
    cout<<"Enter the marks obtained in english: ";
    cin>>english;
    cout<<"Enter the marks obtained in hindi: ";
    cin>>hindi;
    percentage = (math+science+sst+english+hindi)/5;
    switch (percentage)
    {
    case 90 ... 100:
       cout<<"your grade is A"<<endl;
        break;

    case 80 ... 89:
       cout<<"your grade is B"<<endl;
        break;
    case 60 ... 79:
       cout<<"your grade is C"<<endl;
        break;
    case 0 ... 59:
       cout<<"your grade is D"<<endl;
        break;
    default:
    cout<<"bhaiya kuch to garbar hai!!"<<endl;
        break;
    }
    return 0;
}