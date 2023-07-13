#include<iostream>
using namespace std;
int main(){
    int a =3;
    int* b = &a;
    // here is a pointer variable which stores the address of a
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
// value at b is
cout<<"the value at b is "<<b<<endl; 
    // value at a
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a is "<<*b<<endl;

// pointer to pointer
int** c = &b;
cout<<"the address of c is "<<&c<<endl;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value at b is "<<*c<<endl; 
cout<<"the value of a is "<<**c<<endl;


    return 0;
}