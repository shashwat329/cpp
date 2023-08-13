#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    friend complex sumcomplex(complex o1, complex o2);
    void setcomplexno(int a, int b)
    {
        x = a;
        y = b;
    }
    void getcomplexno(void)
    {
        cout << "the complex number is " << x << " + " << y << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setcomplexno(o1.x+o2.x,o1.y+o2.y);
    return o3;

}
int main()
{
    complex c1, c2,sum;
    c1.setcomplexno(2,4);
    c1.getcomplexno();
    c2.setcomplexno(4,5);
    c2.getcomplexno();
    sum = sumcomplex(c1,c2);
    sum.getcomplexno();
    return 0;
}