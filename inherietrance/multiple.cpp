// create two or more base classes and inheritert it to a single derivated class
#include<iostream>
using namespace std;

class base1{
    protected:
    int intbase1;
    public:
    void setintbase1(int a){
        intbase1=a;
    }
    void getintbase1(){
        cout<<"base1 is"<<intbase1<<endl;
    }
};

class base2{
    protected:
    int intbase2;
    public:
    void setintbase2(int a){
        intbase2=a;
    }
    void getintbase2(){
        cout<<"base2 is"<<intbase2<<endl;
    }
};
class derived :  public base1,public base2 {
    public:
    void show(){
        getintbase1();
        getintbase2();
        cout<<"the sum of base1 and base2 is "<<intbase1+intbase2<<endl;
    }
};
int main(){
    derived d1;
    d1.setintbase1(2);
    d1.setintbase2(3);
    d1.show();
    return 0;

}