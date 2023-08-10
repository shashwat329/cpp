#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enter the employee id: ";
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"employee id is "<<id<<endl<<"employee number is "<<count<<endl;
    }

};
int Employee:: count;
int main(){
    Employee emp[5];
  
        emp[1].setdata();
        emp[1].getdata();
        emp[2].setdata();
        emp[2].getdata();
        emp[3].setdata();
        emp[3].getdata();

    return 0;
}