#include <iostream>
#include <fstream>
using std::ofstream; 
using namespace std;
 
int main()
{
ofstream fout;
fout.open("sort.txt");
int n,i,j,t;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    fout<<a[i]<<" ";
}
fout.close();
ifstream file;
file.open("sort.txt");
int num;
int b[n];
i=0;
while(file>>num)
{
cout<<endl;
    a[i]=num;
    cout<<num<<endl;
    i++;
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
file.close();
    return 0;
}
