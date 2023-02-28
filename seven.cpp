#include <iostream>
#include <ctype.h>
using namespace std;
class base
{
public:
    virtual void game() = 0;
};
class child : public base
{
public:
    void game()
    {
        int tot = 0;
        for (int i = 0; i < 4; i++)
        {
            char c;
            cin >> c;
            if (islower(c))
            {
                tot -= 5;
            }
            else
            {
                tot += 10;
            }
        }
        cout << tot;
    }
};
int main()
{
    child c;
    c.game();
    return 0;
}