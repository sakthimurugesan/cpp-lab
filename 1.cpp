#include <iostream>
using namespace std;
struct student
{
    int roll;
    int mark[5];
    float avg = 0;
    int grade;
};
int main()
{
    struct student o[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> o[i].roll;
        for (int j = 0; j < 5; j++)
        {
            cin >> o[i].mark[j];
            o[i].avg += o[i].mark[j];
        }
        o[i].avg /= 5;
        if (o[i].avg > 70)
        {
            o[i].grade = 1;
        }
        else if (o[i].avg >= 50 && o[i].avg <= 70)
        {
            o[i].grade = 2;
        }
        else if (o[i].avg < 50)
        {
            o[i].grade = 3;
        }
        cout << "Rollno : " << o[i].roll << endl;
        cout << "Marks : ";
        for (int j = 0; j < 5; j++)
        {
            cout << o[i].mark[j] << " ";
        }
        cout << endl;
        cout << "Average : " << o[i].avg << endl;
        cout << "Grade : " << o[i].grade << endl;
    }
    return 0;
}