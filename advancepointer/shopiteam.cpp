#include<iostream>
using namespace std;
class shopiteam{
    int price;
    int id;
    public:
    static int count;
    void setiteam(int x,int y){
        id = x;
        price =y;
        count++;
    }
    void show(){
        cout<<"iteam id is "<<id<<" and its price is "<<price<<endl;
    }
};
int shopiteam :: count = 0;
int main(){
    int i,price,id;
    shopiteam *ptr= new shopiteam[3];
    shopiteam *tempptr = ptr;
    for ( i = 0; i < 3; i++)
    {
        cout<<"enter the price and the id of iteam: ";
        cin>>price>>id;
        tempptr->setiteam(id,price);
        tempptr++;
    }
    tempptr = ptr;
     for ( i = 0; i < 3; i++)
    {
        tempptr->show();
        tempptr++;
    }
    cout<<"there are total "<<ptr->count<<" no of iteams in the shop"<<endl;
    delete[] ptr;
    return 0;
}