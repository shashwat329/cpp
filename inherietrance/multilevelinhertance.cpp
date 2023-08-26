#include<iostream>
using namespace std;
class student {
    protected:
    int roll;
    public:
    void setroll(int );
    void getroll(void);

};
void student:: setroll(int a){
    roll = a;
}
void student :: getroll(){
    cout<<roll<<endl;
}

class exam : public student {
    protected:
    float phy;
    float maths;
    public:
    void setmarks(float ,float);
    void getmarks(void);
};
void exam :: setmarks(float m1,float m2){
    phy = m1;
    maths = m2;
}
void exam :: getmarks (){
    cout<<"the marks of students are "<< phy<<" and "<<maths<<endl;
}
class result: public exam {
    protected:
    float percentage;
    public:
    void display();
};
void result :: display (){
    getroll();
    getmarks();
    cout<<"percentage of student is "<<(phy+maths)/2<<"%"<<endl;
}
int main(){
    result r1;
    r1.setroll(1);
    r1.setmarks(47,43);
    r1.display();
}