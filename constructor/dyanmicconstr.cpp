#include <iostream>
using namespace std;
class bankdeposit{
    int principal;
    int year;
    int returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p, int y,int R);
    void showbalance(void);
    };
bankdeposit :: bankdeposit(int p,int y, float r){
    principal = p;
    year = y;
    float rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1+rate);
    }
    
}
bankdeposit ::bankdeposit(int p,int y,int R){
    principal = p;
    year =y;
    float rate = float(R)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1+rate);
    }
    
}
void bankdeposit :: showbalance(){
    cout<<"the principal amount is "<<principal<<endl;
    cout<<"your money after "<<year<<" year = "<<returnvalue<<endl;
    }
int main(){
    bankdeposit bd1,bd2,bd3;
    int p,y,R;
    float r;
    cout<<"enter the amount,year and rate of interest:"<<endl;
    cin>>p>>y>>R;
    bd1 = bankdeposit(p,y,R);
    bd1.showbalance();
    cout<<"enter the amount,year and rate of interest:"<<endl;
    cin>>p>>y>>r;
    bd2 = bankdeposit(p,y,r);
    bd2.showbalance();
}