#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int x){
        data1 = x;
        cout<<"base1 constructor is called!!"<<endl;
    }
    void printdata1(){
        cout<<"value of data1 is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int y){
        data2= y;
        cout<<"base2 constructor is called!!"<<endl;
    }
    void printdata2(){
        cout<<"value of data2 is "<<data2<<endl;
    }
};
class dervied : public base1,public base2{
    int d1,d2;
    public:
    dervied(int a,int b,int c,int d): base1(a),base2(b){
        d1 = c;
        d2 = d;
        cout<<"constructor derived is called"<<endl;
    }
    void printdervied(){
        cout<<"value of d1 is "<<d1<<endl;
        cout<<"value of d2 is "<<d2<<endl;

    }
};
int main(){
    dervied d(1,2,3,4);
    d.printdervied();
    d.printdata1();
    d.printdata2();
    base1 b1(100);
    b1.printdata1();
    base2 b2(10);
    b2.printdata2();
    return 0;
}