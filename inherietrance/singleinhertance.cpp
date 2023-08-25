#include<iostream>
using namespace std;
class base{
    int a;
    public :
    void setdata(int x){
        a = x;
    }
    void getdata(){
        cout<<a<<endl;
    }
};
class derivated : public base{
    // needed to make private method as private variables are not inherentable
    int b;
};
int main(){
    base b1,b2;
    b1.setdata(2);
    b2.setdata(3);
    b1.getdata();
    b2.getdata();
    derivated d1,d2;
    d1.setdata(4);
    d2.setdata(42);
    d1.getdata();
    d2.getdata();
    return 0;
}
// this is a classic example of single inheretance 
// there we have inhereated method function from base class