#include <iostream>
using namespace std;
class calc{
    public:
    void fun1(int a,int b,int c){
        cout<<a*b*c;
    }
    void fun1(int a,int b){
        cout<<a+b;

    }
};
int main(){
    calc c;
    int n;
    cin>>n;
    if(n==2 || n==3){
        if(n==2){
            int a,b;
            cin>>a>>b;
            c.fun1(a,b);
        }
        else if(n==3)
        {
            int a,b,c1;
            cin>>a>>b>>c1;
            c.fun1(a,b,c1);
        }
    }
    else{
        cout<<"Invalid input";
    }
    return 0;
}