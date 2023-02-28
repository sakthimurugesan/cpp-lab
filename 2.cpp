#include <iostream>
#include <iomanip>
using namespace std;
struct grocery
{
    string icode;
    string brand;
    string iname;
    int qua;
    int amo;
    int tot = 0;
};
void msg(string brand, string iname, int tot)
{
    cout << "You have purchased " + brand + " " + iname << " for Rs." << tot << endl;
}
int main()
{
    int n;
    float total = 0;
    cin >> n;
    grocery o[n];
    for (int i = 0; i < n; i++)
    {
        cin >> o[i].icode;
        cin >> o[i].brand;
        cin >> o[i].iname;
        cin >> o[i].qua;
        cin >> o[i].amo;
        o[i].tot = o[i].amo * o[i].qua;
        total += o[i].tot;
        if (o[i].tot > 1000)
        {
            msg(o[i].brand, o[i].iname, o[i].tot);
        }
    }
    cout << fixed << setprecision(2) << total << endl;
    if (total > 1000)
    {
        cout << "You have a voucher of Rs.200" << endl;
    }
    else
    {
        cout << "No voucher" << endl;
    }

    return 0;
}