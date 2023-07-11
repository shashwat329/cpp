#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter all number number: "<<endl;
    cin>>n1>>n2>>n3;
   if(n1>n2){
    if(n1>n3){
        cout<<n1<<" is the largest number among all three"<<endl;
    }
    else{
        cout<<n3<<" is the largest number among all three"<<endl;

    }
   }
   else{
    if (n2>n3)
    {
        cout<<n2<<" is the largest number all three"<<endl;
    }
    else{
        cout<<n3<<" is the largest number among all three"<<endl;
    }
   }
    return 0;
}