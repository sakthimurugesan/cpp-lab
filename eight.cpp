#include <iostream>
using namespace std;
class currentBill
{
public:
    virtual double amount() = 0;
};
class light : public currentBill
{
public:
    double amount()
    {
        float w, h;
        cin >> w, h;
        return (w * h * 1.5) / 1000;
    }
};
class tv : public currentBill
{
public:
    double amount()
    {
        float w, h;
        cin >> w, h;
        return (w * h * 1.5) / 1000;
    }
};
class fan : public currentBill
{
public:
    double amount()
    {
        float w, h;
        cin >> w, h;
        return (w * h * 1.5) / 1000;
    }
};
int main()
{
    fan f;
    tv t;
    light l;
    cout << l.amount() + f.amount() + t.amount();
    return 0;
}