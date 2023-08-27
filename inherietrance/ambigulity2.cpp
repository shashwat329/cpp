#include<iostream>
using namespace std;
class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};
int main(){
    B b1;
    b1.say();
    D d1;
    d1.say();

    return 0;
}