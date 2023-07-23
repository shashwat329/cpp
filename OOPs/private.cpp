#include <iostream>
#include <string>
using namespace std;
// class-bank acc object balance and acc no and name
class bankaccount
{
private:
    string name;
    float balance;
    int account_number;

public:
    void addmember(string newmember)
    {
        this->name = newmember;
    }
    void createddisplay()
    {
        cout << "Here is your details" << endl;
        cout << "Name: " << name << endl
             << "Balance: " << balance << endl
             << "Account Number: " << account_number << endl;
    }
    void settler(string name, float balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }
   
};
int main()
{
    int token;
    string name;
    bankaccount accounts[10];
    accounts[0].settler("shashwat", 200000, 1002839);
    accounts[1].settler("rahul", 10000, 344524);
    accounts[2].settler("ayush", 22300, 10028333);
    accounts[3].settler("umang", 40000, 10324455);
    accounts[4].settler("shivansh", 5000, 100234);
    bool yn;
    cout << "new member (enter 0 if YES or enter any number if NO)? " << endl;
    cin >> yn;
    if (yn == 0)
    {
        cout << "please create your account!" << endl;
        cout << "enter the name: " << endl;
        cin >> name;
        accounts[5].addmember(name);
        accounts[5].createddisplay();
    }
    else
    {
        cout<<"enter your token number: "<<endl;
        cin>>token;
        accounts[token].createddisplay();
    }
}