#include<iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"enter any number: ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}