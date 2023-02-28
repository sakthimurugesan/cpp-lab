#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
struct times
{
    int h, m, s;
};
int main()
{
    times o[3];
    cin >> o[1].h >> o[1].m >> o[1].s;
    cin >> o[0].h >> o[0].m >> o[0].s;
    o[2].s=o[1].s-o[0].s;
    if(o[2].s<0){
        o[2].s=o[1].s-o[0].s+60;
        o[1].m-=1;
    }
    o[2].m=o[1].m-o[0].m;
    if(o[2].m<0){
        o[2].m=o[1].m-o[0].m+60;
        o[1].h-=1;
    }
    o[2].h=o[1].h-o[0].h;
    //cout<<o[2].h<<" "<<o[2].m<<" "<<o[2].s;
    ofstream file("input.txt",ios::in);
    string one=to_string(o[1].h)+" "+to_string(o[1].m)+" "+to_string(o[1].s)+"\n";
    string two=to_string(o[0].h)+" "+to_string(o[0].m)+" "+to_string(o[0].s)+"\n";
    string three=to_string(o[2].h)+" "+to_string(o[2].m)+" "+to_string(o[2].s)+"\n";
    file<<one<<two<<three<<endl;
    file.close();
    ifstream file1("input.txt",ios::out);
    string s;
    while(getline(file1,s)){
        cout<<s<<endl;
    }
    file1.close();
    return 0;
}