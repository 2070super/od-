#include <iostream>
#include<string>
using namespace std;
string solution(string& s)
{
    if (s.size() < 8)
    {
        return "NG";
    }
    int num = 0, other = 0, big = 0, small = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i <= 'z'])
        {
            small = 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            big = 1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num = 1;
        }
        else
        {
            other = 1;
        }
    }
    if (num+big+other+small<3)
    {
        return "NG";
    }
    for (int i = 0; i < s.size() - 6; i++)
    {
        for (int j = i + 3; j < s.size() - 3; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1] && s[i + 2] == s[j + 2])
            {
                return "NG";
            }
        }
    }
    return "OK";
}
int main()
{
    string s;
    while (cin >> s)
    {

        cout << solution(s) << endl;
    }
}