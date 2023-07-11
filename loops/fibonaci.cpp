#include<iostream>
using namespace std;

int main(){
    int n,first=0,second =1,next;
    cout<<"Enter any number: ";
    cin>>n;
    if (n==1)
    {
        cout<<first;
        }
     else if(n==2){
        cout<<first<<" "<<second;
    }
    else{
        cout<<first<<" "<<second;
        for(int i=3;i<=n;i++){
            next = first + second;
            first = second;
            second = next;
            cout<<" "<<next;
        }
        cout<<endl;
    }
    
    return 0;
}