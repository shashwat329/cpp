#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    // declartion of constructor
    point(void);
    void print(void){
        cout<<"("<<x<<","<<y<<")"<<endl;

    }
};
point :: point(void){
    x = 0;
    y =0;
}
int main(){
    
    point p;
    p.print();
    return 0;
}