#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,rem,count=0,armstrong=0;
    cout<<"Enter any number: ";
    cin>>n;
    for (int i = n; i > 0; i=i/10)
    {
       count++;
    }
    for (int i = n; i > 0; i=i/10)
    {
       rem = i%10;
       armstrong=pow(rem,count)+armstrong;
    }
    if(armstrong==n){
        cout<<n<<" is armstrong"<<endl;
    }
    else{
        cout<<n<<" is not armstrong"<<endl;
    }
    return 0;
    }