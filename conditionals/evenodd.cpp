#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even!"<<endl;
    }
    else{
        cout<<n<<" is odd!"<<endl;
    }
    return 0;
}