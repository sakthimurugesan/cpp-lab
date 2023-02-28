#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //cout<<arr[i]<<endl;
    }
    sort(arr,arr+n);
    for(auto x:arr){cout<<x<<" ";}
    return 0;
}