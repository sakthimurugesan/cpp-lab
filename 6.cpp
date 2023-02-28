#include <iostream>
using namespace std;
class base
{
public:
    virtual int cube(int x) = 0;
    virtual int square(int x) = 0;
};
class child : public base
{
public:
    int cube(int x)
    {
        return x * x * x;
    }
    int square(int x)
    {
        return x * x;
    }
    void print(int x)
    {
        cout << x;
    }
};
int main()
{
    child obj;
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        obj.print(obj.cube(n) + obj.square(n));
    }
    else
    {
        obj.print(obj.cube(n) - obj.square(n));
    }

    return 0;
}