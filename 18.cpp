#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int o=0,tw=0,t=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1){o++;}
        else if(a==2){tw++;}
        else if(a==3){t++;}
    }
    if(o>tw && o>t){
        cout<<1;
    }
    else if(o<tw && tw>t){
        cout<<2;
    }
    else if(o<t && t>tw){
        cout<<3;
    }
    else if(o==t){
        cout<<3;
    }
    else if(o==tw){
        cout<<2;
    }
    else if(tw==t){
        cout<<3;
    }
    return 0;
}