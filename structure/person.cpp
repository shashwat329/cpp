// Create a structure called Person that has members for name, age, and address. Write a program to create an array of 5 Person objects and display their details. ̰
#include <iostream>
#include <string>
using namespace std;
typedef struct Person
{
    string name;
    int age;
    string address;
}pr;

int main()
{
    pr person[5];
    for (int i = 1; i <= 5;i++)
    {
        cout<<"enter name of person"<<i<<endl;
        cin>>person[i-1].name;
        cout<<"enter the age of person"<<i<<endl;
        cin>>person[i-1].age;
        cout<<"enter the city of person"<<i<<endl;
        cin>>person[i-1].address;
    }
   for (int i = 1; i <=5; i++)
   {
    cout<<"Name of person"<<i<<" is "<<person[i-1].name<<" his age is "<<person[i-1].age<<" and is lives "<<person[i-1].address<<endl;
   }
   
    



    return 0;
}