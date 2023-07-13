#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<<"enter the array: ";
    for(int i =0;i<10;i++){
        cin>>a[i];
    }
    // algo for max and min
    int max = a[0];
    int min =a[0];
    for (int i = 1; i < 10; i++)
    {
        if(a[i]>max){
            max =a[i];
        }
       else if(a[i]<min){
        min =a[i];
       }
    }
    cout<<"the max value in the array is "<<max<<endl;
    cout<<"the min value in the array is "<<min<<endl;

    return 0;
}