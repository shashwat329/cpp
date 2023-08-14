#include<iostream>
using namespace std;
class Y;
class X {
    int data1;
    public:
    friend int sum(X,Y);
    void setdata(int a){
        data1 = a;
    }
    void getdata(){
        cout<<data1<<endl;
    }
};
class Y {
    int data2;
    public:
    friend int sum(X,Y);
    void setdata(int a){
        data2 = a;
    }
    void getdata(){
        cout<<data2<<endl;
    }
};
int sum(X a,Y b){
    return (a.data1+ b.data2);
}
int main(){
    X a;
    Y b;
    a.setdata(1);
    b.setdata(2);
    int res = sum(a, b);
    cout<<res<<endl;
    return 0;

}