#include<iostream>
using namespace std;
class complex{
    int a,b;
    friend complex sumcomplex(complex s1, complex s2);
    public: 
    void setcomplex(int x,int y){
        a =x;
        b=y;
    }
    void getcomplex(void){
        cout<<"the complex is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int sumcomplex(complex s1,complex s2){
       complex s3;
       return ((s1.a +s2.a)+(s2.a+s2.b)) 
    }
int main(){
    int a,b;
    a.setcomplex(1,4);
    a.getcomplex();git 
    return 0;
}