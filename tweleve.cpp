#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, p, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    cin >> p >> a;
    try
    {
        if (p > v.size())
        {
            throw 1.1f;
        }
        else
        {
            cin >> a;
            v[p - 1] = a;
            for (auto x : v)
            {
                cout << x << " ";
            }
        }
    }
    catch (float f)
    {
        cout << "Index out of range";
    }
    return 0;
}