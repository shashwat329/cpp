// create 2 classes one to get and set data and other to cal the sum of real part
#include <iostream>
using namespace std;
class complex;
class calculator{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sumrealcomplex(complex,complex);
};
class complex
{
    int a, b;
    friend int calculator :: sumrealcomplex(complex o1, complex o2);
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void getdata(void){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
 int calculator :: sumrealcomplex(complex o1,complex o2){
        return (o1.a+o2.a);
    };

int main(){
    complex c1,c2;
    c1.setdata(3,4);
    c1.getdata();
    c2.setdata(1,2);
    c2.getdata();
    calculator sum;
    int result=sum.sumrealcomplex(c1,c2);
    cout<<"the sum of real part of c1 and c2 is "<<result<<endl;
    return 0;
}