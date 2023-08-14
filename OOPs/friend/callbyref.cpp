#include<iostream>
using namespace std;
class Y;
class X{
    int var1;
    public:
    friend void exchange(X &,Y &);
    void setdata(int a){
        var1 = a;
    }
    void displaydata(){
        cout<<var1<<endl;
    }
};
class Y{
    int var2;
    friend void exchange(X &,Y &);
    public:
    void setdata(int b){
        var2 = b;
    }
    void displaydata(){
        cout<<var2<<endl;
    }
};
void exchange(X &o1  , Y &o2){
    int temp = o1.var1;
    o1.var1 = o2.var2;
    o2.var2 = temp;
} 
int main(){
    X a;
    Y b;
    a.setdata(2);
    b.setdata(3);
    cout<<"value before swap is ";
    a.displaydata();
    cout<<" and ";
    b.displaydata();
    exchange(a,b);
    cout<<"value after swap is ";
    a.displaydata();
    cout<<" and ";
    b.displaydata();;
    return 0;
}