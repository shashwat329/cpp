// Define a structure called Employee with members id, name, and salary. Write a program to create an array of 3 Employee objects and find the employee with the highest salary.

#include<iostream>
#include<string>
using namespace std;

typedef struct Employee
{
    int id;
    string name;
    int salary;

}emp;
int main(){
    emp member[5];
    for (int i = 0; i < 5; i++)
    {
       cout<<"enter the id name and salary of employee"<<i+1<<": ";
       cin>>member[i].id>>member[i].name>>member[i].salary;
    }
    for (int i = 0; i < 5; i++)
    {
       cout<<member[i].id<<" "<<member[i].name<<" "<<member[i].salary<<endl;
    }
    
    
    return 0;
}