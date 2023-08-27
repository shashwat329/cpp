#include<iostream>
using namespace std;
class base1{
    protected:
    int a;
    public:
    void greet(){
        cout<<"hello everyone"<<endl;
    }
};
class base2{
    protected:
    int b;
    public:
    void greet(){
        cout<<"kaise ho sb??"<<endl;
    }
};
class devired : public base1,public base2{
    public:
    void greet(){
       base2::greet();
    }
};
int main(){
    base1 b1;
    base2 b2;
    devired d1;
    b1.greet();
    b2.greet();
    d1.greet();

    return 0;
}