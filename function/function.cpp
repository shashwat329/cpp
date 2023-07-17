#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main(){
    int n1,n2;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;
    cout<<"the value of first number and second number is "<<n1<<" and "<<n2<<endl;
    swap(&n1,&n2);
    cout<<"the value of first number and second number after swap is "<<n1<<" and "<<n2<<endl;

    return 0;
}
