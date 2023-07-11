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
    if(n==rev){
        cout<<n<<" is palindrome number"<<endl;
    }
    else{
        cout<<n<<" is not palindrome number"<<endl;
    }
    return 0;
    }