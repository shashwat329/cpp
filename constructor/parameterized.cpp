#include<iostream>
using namespace std;
class point{
    int a,b;
    public:
    point(int ,int );
    void display(void){
        cout<<"("<<a<<","<<b<<")"<<endl;
    }

};
point :: point(int x ,int y){
    a =x;
    b =y;
}
int main(){
    point p1(1,2),p2(2,3),p3(3,4);
    cout<<"points are "<<endl;
    p1.display();
    p2.display();
    p3.display();



    return 0;
}