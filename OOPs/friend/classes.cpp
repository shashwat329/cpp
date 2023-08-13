#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int sumcomplex(complex,complex);
    int realcomplex(complex,complex);
};
class complex{
    int a,b;
    public:
    friend class calculator;
    void setcomplex(int x,int y){
        a = x;
        b = y;
    }
    void getcomplex(void){
        cout<<a<<" + "<<b<<"i"<<endl;
    }

};
int calculator ::realcomplex(complex c1,complex c2){
    return (c1.a+c2.a);
}
int calculator :: sumcomplex(complex c1,complex c2){
    return (c1.b+c2.b);
}
int main(){
    complex c1,c2;
    c1.setcomplex(1,2);
    c1.getcomplex();
    c2.setcomplex(2,3);
    c2.getcomplex();
    calculator sumreal,sumcomp;
    int res = sumreal.realcomplex(c1,c2);
    int resc = sumcomp.sumcomplex(c1,c2);
    cout<<"sumation of real part of is "<<res<<" and complex part is "<<resc<<endl;
    return
     0;
}