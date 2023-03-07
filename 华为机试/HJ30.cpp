#include <iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
char& change(char& c)
{
    string s = "0123456789ABCDEF";
    if (c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    }
    int local = s.find(c);
    vector<int>v;
    while (local != 0)
    {
        v.push_back(local % 2);
        local /= 2;
    }
    int n = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int num = 4 - 1 - i;
        n += v[i] * pow(2, num);
    }
    c= s[n];
    return c;
}
int main()
{
    string s, str;
    cin >> s;
    cin >> str;
    s += str;
    string str1, str2;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            str2.push_back(s[i]);
        }
        else
        {
            str1.push_back(s[i]);
        }
    }
    sort(str2.begin(), str2.end());
    sort(str1.begin(), str1.end());
    string s3;
    auto it1 = str1.begin();
    auto it2 = str2.begin();
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            s3.push_back(*it2);
            it2++;
        }
        else
        {
            s3.push_back(*it1);
            it1++;
        }
    }
    string s1;
    for (int i = 0; i < s3.size(); i++)
    {
        if (!(s3[i] >= '0' && s3[i] <= '9') && !(s3[i] >= 'a' && s3[i] <= 'f') && !(s3[i] >= 'A' && s3[i] <= 'F'))
        {
            s1.push_back(s3[i]);
            continue;
        }
        else
        {
            s1.push_back(change(s3[i]));
        }
    }
    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
    }
}