#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<vector<int>> v(num, vector<int>(num, 0));
    int x = 0, y = 0, flag = 1, i = 1;
    while (x != num)
    {
        v[x][y] = i;
        if (x == 0)
        {
            y = 0;
            x = flag;
            flag++;
        }
        else
        {
            x--;
            y++;
        }
        i++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 0)
            {
                break;
            }
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")