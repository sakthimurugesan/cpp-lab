#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]!='?' && b[i]!='?')
            {
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}