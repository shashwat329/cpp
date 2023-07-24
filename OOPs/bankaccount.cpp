#include<iostream>
#include<string>

using namespace std;

class bankaccount
{
    private:
    string name;
    float balance;
    public:
    void settler(string name,float balance){
        this->name =name;
        this->balance=balance;
    }
    float balanceupdate(string action,float num=0){
        if(action =="credit"){
              return balance+num;
        }
        else if(action=="debit"){
            return balance-num;
        }
        
        return balance;
    }
};
int main(){
    string action;
    float amount;
    int token;
   bankaccount accounts[10];
   accounts[0].settler("shashwat",10000);
   accounts[1].settler("piyush",10000);
   accounts[2].settler("rahul",10000);
   accounts[3].settler("ravi",10000);
   accounts[4].settler("kamya",10000);
   cout<<"Welcome to shashwat's bank"<<endl<<"enter yout token number: ";
   cin>>token;
   cout<<"do want credit,debit or show balance: ";
   cin>>action;
   if(action =="balance"){
    cout<<"your balance is: "<<accounts[token].balanceupdate(action)<<endl;
   }
   else{
    cout<<"enter the amount: "; 
    cin>>amount;
    cout<<"your updated balance is "<<accounts[token].balanceupdate(action,amount)<<endl;
   }
   
    return 0;
}