#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==1){
        ;
    }
    else{
        int arr[n],m=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i+=2){
            if(arr[i+1]>arr[i]){
                m+=arr[i+1];
            }
            else{
                m+=arr[i];
            }
        }
        cout<<m;
    }
    return 0;
}