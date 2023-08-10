#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    static int count;

public:
    void setvalue(string name,int id){
        this->name = name;
        this->id = id;
        count++;
    }
    void getvalue(){
        cout<<"Your name is: "<<name<<endl<<"Your id is: "<<id<<endl<<"Your token number is: "<<count<<endl;
    }
};

int main()
{
    string name;
    int id;
    Employee e[10];
    for (int i = 0; i < 3;)
    {
        e[i].setvalue(name,id);
    }
    for (int i = 0; i < 3; i++)
    {
        e[i].getvalue();
    }
    
    
    return 0;
}