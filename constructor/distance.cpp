#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;

public:
    friend float distance(point p1, point p2);
    point(int, int);
    void display(void)
    {
        cout << "(" << a << "," << b << ")";
    }
};
// this is a constructor and defenation of constructor is outside the class..
point ::point(int x, int y)
{
    a = x;
    b = y;
}
// this function is using private member of a point class so it need to be friend
float distance(point p1, point q1)
{
    int x, y;
    x = abs(p1.a - q1.a);
    x = x * x;
    y = abs((p1.b - q1.b));
    y = y * y;
    float dis = sqrt(x + y);
    return dis;
}

int main()
{
    point p(1, 2), q(2, 4);
    float dis = distance(p, q);
    cout << "The distnace between";
    p.display();
    q.display();
    cout << "is: " << dis << endl;
    return 0;
}