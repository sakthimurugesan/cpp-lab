#include <iostream>
using namespace std;
class mycalculator
{
public:
    long int power(int n, int p)
    {
        int i = 1, fin = 1;
        while (i <= p)
        {
            fin *= n;
            i++;
        }
        return fin;
    }
};
int main()
{

    mycalculator m;
    int n , p;
    cin>>n>>p;
    try
    {
        if (n < 0 || p < 0)
        {
            throw 5;
        }
        else if (n == 0 && p == 0)
        {
            throw 1.1f;
        }
        else
        {
            cout<<m.power(n,p);
        }
    }
    catch (int v)
    {
        cout << "n and p should be non-negative";
    }
    catch (float f)
    {
        cout << "n and p should not be zero";
    }
    return 0;
}