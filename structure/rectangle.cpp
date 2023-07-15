// Define a structure called Rectangle with members length and width. Write a program to calculate and display the area of a rectangle.
#include<iostream>
using namespace std;
 typedef struct rectangle{
    int length;
    int breath;
 }rec;
int main(){
    rec rectan[5];
    for (int i = 0; i <5; i++)
    {
        cout<<"enter the length of rectangle"<<i+1<<" : ";
        cin>>rectan[i].length;
        cout<<"enter the breath of rectangle"<<i+1<<" : ";
        cin>>rectan[i].breath;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"the area of rectangle"<<i+1<<" is "<<rectan[i].length*rectan[i].breath<<endl; 
    }
    
    
    return 0;
}