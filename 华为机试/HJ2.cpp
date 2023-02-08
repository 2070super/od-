#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char ch;
    getline(cin, str);
    cin >> ch;
    int ans = 0;
    if (ch >= 'A' && ch <= 'Z')
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (ch == str[i] || ch + 32 == str[i])
            {
                ans++;
            }
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (ch == str[i] || ch - 32 == str[i])
            {
                ans++;
            }
        }
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (ch == str[i])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}