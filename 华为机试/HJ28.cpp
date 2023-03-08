#include <iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string nums;
    getline(cin, nums);
    vector<string> ip;
    int h = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            h++;
        }
        else
        {
            ip[h].push_back(s[i]);
        }
    }
    string s1;
    for (int i = 0; i < ip.size(); i++)
    {
        int num = 0;

        for (int i = 0; i < ip[i].size(); i++)
        {
            num += pow(10, ip[i].size() - 1 - i);
        }
        int j = 7;
        while (num != 0)
        {
            s1[j] = num % 2;
            num = num / 2;
            j--;
        }
    }
    long long ans1;
    for (int i = 0; i < s1.size(); i++)
    {
        ans1 += s1[i] * pow(10, s1.size() - 1 - i);
    }
    cout << ans1;
}
// 64 位输出请用 printf("%lld")