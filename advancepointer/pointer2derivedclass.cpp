#include<iostream>
using namespace std;
class baseclass{
    public:
    int varbase;
    void display(){
        cout<<"baseclass's varbase is "<<varbase<<endl;
    }
};
class derviedclass : public baseclass{
    public:
    int vardervived;
    void display(){
        cout<<"baseclass's varbase is "<<varbase<<endl;
        cout<<"dervivedclass's varbase is "<<vardervived<<endl;

    }
};
int main(){
    baseclass * base_class_pointer;
    baseclass obj_base;
    derviedclass obj_dervived;
    base_class_pointer =&obj_dervived;
    base_class_pointer->varbase = 1;
    base_class_pointer->display();
    obj_dervived.varbase=2;
    obj_dervived.vardervived=3;
    obj_dervived.display();


    // creating dervived class pointercs
    derviedclass *dervived_class_pointer;
    dervived_class_pointer =&obj_dervived;
    dervived_class_pointer->varbase=100;
    dervived_class_pointer->vardervived=200;
    dervived_class_pointer->display();
    return 0;
}