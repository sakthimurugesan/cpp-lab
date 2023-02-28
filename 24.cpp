#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count++;
        }
        if (count == n)
        {
            cout << "Yes";
            return 0;
        }
        else if (count > n)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "No";
    return 0;
}