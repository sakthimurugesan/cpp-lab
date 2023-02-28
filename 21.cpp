#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char s1=s[0],s2=s[1];
    for(int i=2;i<s.length();i+=2){
        if(s[i]!=s1 || s[1+i]!=s2)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}