#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x = 0 , int y=0 );
    void display(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};
// constructor time..
complex ::complex(int x, int y )
{
    a = x;
    b = y;
}
int main()
{
    complex c1, c2;
    complex c3(2);
    complex c4(1, 2);
    c1.display();
    c2.display();
    c3.display();
    c4.display();

    return 0;
}
// point to note..
// for defalut constructor defalut value should be given at the time of declaration only...
