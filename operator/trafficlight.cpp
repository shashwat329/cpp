#include<iostream>
using namespace std;

int main(){
    char color;
    cout<<"Enter the color of light: ";
    cin>>color;
    switch (color)
    {
    case 'r':
        cout<<"STOP!"<<endl;
        break;
    
    case 'y':
        cout<<"WAIT!"<<endl;
        break;
    case 'g':
        cout<<"GO!"<<endl;
        break;
    
    default:
    cout<<"please check the input!"<<endl;
        break;
    }
    return 0;
}