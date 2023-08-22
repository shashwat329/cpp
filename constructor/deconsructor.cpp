#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        cout<<"we are inside default constructor"<<endl;
        a = 0;
    };
    // this is a constructor
    number(int num){
        cout<<"we are inside constructor"<<endl;
        a= num;
    }
    // this is a destructor
    ~number(){
        cout<<"we are inside destructor "<<endl;

    }
    void display(){
        cout<<"the number is the "<<a<<endl;
    }
};
int main(){
    cout<<"inside the main function"<<endl;
    number n1(3),n2,n3;
    n1.display();{
        cout<<"we are entering the box"<<endl;
        number n4,n5,n6;
        cout<<"we are exiting the box"<<endl;

    }
    return 0;
}