#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any year: ";
    cin>>n;
    if(n<0){
     cout<<"invaild input"<<endl;
    }
    else{ 
        if(n%4==0){
        if (n%100==0&&n%400!=00)
        {
            cout<<n<<" is not a leap year"<<endl;
        }
        else{
            cout<<n<<" is a leap year"<<endl;
        }
        }
    }
    return 0;
}