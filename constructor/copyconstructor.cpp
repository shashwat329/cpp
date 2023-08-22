#include<iostream>
using namespace std;
class number{
    int a;
    public: 
    // this is a defalut constuctor
    number(){
        a=0;
    };
    // this is a parameterised constructor
    number(int num){
        a =num;
    }
    // this is a copy constructor
    number(number &num){
    cout<<"copy constructor is called!!"<<endl;
        a = num.a;

    } 
    void display(){
        cout<<a<<endl;
    }
};
int main(){
    number n1(3);
    n1.display();
    number n2(n1);
    n2.display();
    return 0;

}