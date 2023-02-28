#include <iostream>
using namespace std;
struct dept
{
    string name;
    string empid;
    int yoe;
    int salary;
    float tot;
};
int main()
{
    int n;
    cin >> n;
    dept o[n];
    for (int i = 0; i < n; i++)
    {
        cin >> o[i].name >> o[i].empid >> o[i].yoe >> o[i].salary;
        if (o[i].yoe >= 10)
        {
            o[i].tot = o[i].salary + (0.1f * o[i].salary);
        }
        else if (o[i].yoe >= 5 && o[i].yoe <= 9)
        {
            o[i].tot = o[i].salary + (0.05f * o[i].salary);
        }
        else if (o[i].yoe >= 1 && o[i].yoe <= 4)
        {
            o[i].tot = o[i].salary + (0.02f * o[i].salary);
        }
        cout << "Name : " << o[i].name << endl;
        cout << "Empid : " << o[i].empid << endl;
        cout << "Year of experience : " << o[i].yoe << endl;
        cout << "Salary : " << o[i].tot << endl;
    }
    return 0;
}