// passing objects as arguments in functions
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setcomplex(int x,int y){
        a= x;
        b = y;
    }
    void getcomplex(void){
        cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    int sumcomplex(complex o1,complex o2){
        a =o1.a+o2.a;
        b =o1.b+o2.b;
        return (a+b);
    }
};
int main(){
    complex c1,c2,c3;
    c1.setcomplex(3,4);
    c1.getcomplex();
    c2.setcomplex(2,3);
    c2.getcomplex();
    c3.sumcomplex(c1,c2);
    c3.getcomplex();
    return 0;

}