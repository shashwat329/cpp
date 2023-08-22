#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x =0,int y =0);
   
    void getnumber(void){
        cout<<a<<"+"<<b<<"i"<<endl;

    }
};
complex::complex(int x,int y){
    a =x;
    b =y;
    if (a==0&&b==0)
    {
        cout<<"zero!!!"<<endl;
    }
    else if((a==0&&b!=0)){
        cout<<"its a complex number!"<<endl;
    }
    else if (a!=0&&b==0)
    {
        cout<<"its a purely real number!"<<endl;
    }
    
    else{
        cout<<"its a purely img number!"<<endl;
    }
}
int main(){
    // complex c1
    complex c2(1);
    // complex c3(1,2);
    // c1.getnumber();
    c2.getnumber();
    // c3.getnumber();


    return 0;

}