#include<iostream>
using namespace std;

int main(){
    int n,rem,rev=0;
    cout<<"Enter any number: ";
    cin>>n;
    for (int i = n; i > 0; i=i/10)
    {
        rem = i%10;
        rev = rev*10 + rem;
    }
    cout<<"the reverse of "<<n<<" is "<<rev;
    return 0;
    }