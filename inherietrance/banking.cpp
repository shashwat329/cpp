#include<iostream>
using namespace std;

class bankaccount{
   protected:
    int account_number;
    float balance;
    public:
    bankaccount(){};
    bankaccount(int acc_num,float inital_balance=0){
        account_number=acc_num;
        balance = inital_balance;
    }
    void deposit(float amount){
        balance = balance + amount;
    }
    void withdraw(float amount){
        balance = balance-amount;
    }
    void getbalance(void){
        cout<<"current balance of account number "<<account_number<<" is "<<balance<<endl;
    }
};
class savingaccount : public bankaccount{
    public:
    float interest;
    savingaccount(int acc_num,float intial_balance,float intrest_rate){
        account_number =acc_num;
        balance= intial_balance;
        interest= intrest_rate;
    }
    void applyintrest(){
         balance = balance*(1+interest);
    }
};
int main(){
    bankaccount b1(123);
    bankaccount b2(132,10000);
    b1.getbalance();
    b2.getbalance();
    b1.deposit(5000);
    b1.getbalance();
    b2.withdraw(200);
    b2.getbalance();
    savingaccount s1(100,3000,0.07);
    s1.getbalance();
    s1.deposit(3000);
    s1.getbalance();
    s1.applyintrest();
    s1.getbalance();
    return 0;
}