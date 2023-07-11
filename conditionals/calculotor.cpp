#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    char c;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter the opeartor: ";
    cin>>c;
    cout<<"enter second number: ";
    cin>>n1;
    switch (c)
    {
    case '+':
        cout<<"The sum of "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
        break;
    
    case '-':
        cout<<"The subraction "<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
        break;
    case '*':
        cout<<"The multipication "<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
        break;
    case '/':
        cout<<"The division "<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
        break;
    default:
        cout<<"error 404";
        break;
    }
    return 0;
}