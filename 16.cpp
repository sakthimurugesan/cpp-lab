#include <iostream>
using namespace std;
int main(){
    int n=7;
    for(int i=1;i<=7;i++){
        for(int j=7;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}