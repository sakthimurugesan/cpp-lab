#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    string *p=s;
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(*(p+j)<*(p+i))
            {
                string t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    for(auto x:s)
    {
        cout<<x<<endl;
    }

    return 0;
}