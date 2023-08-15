#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex();
    complex(int ,int );
    complex(int);
    void display(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(int x,int y){
    a = x;
    b = y;

}
complex :: complex(int x){
    a = x;
    b = 0;

}
complex :: complex(){
    a = 0;
    b = 0;

}
int main(){
    complex c1(2,1),c2(12,2);
    c1.display();c2.display();
    complex c3(2);
    c3.display();
    complex c4;
    c4.display();
    return 0;
}