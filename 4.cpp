#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p,n1;
    if (n < 10)
    {
        cout << n;
        return 0;
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            if (pow(10, i) == n)
            {
                p = i;
            }
            else if (pow(10, i + 1) > n && pow(10, i) < n)
            {
                p = i + 1;
            }
        }
    }
    int arr[p], sum = 0, i = 0;
    while (n != 0)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    sort(arr,arr+n,greater<int>());
    //reverse(arr,arr+n);
    for(auto x:arr){cout<<x<<" ";}cout<<endl;
    for(int k=0;k<p;k++)
    {
        for(int j=k+1;j<p;j++)
        {
            sum+=arr[k]+arr[j];
        }
    }
    cout<<sum;
    return 0;
}