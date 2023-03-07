#include <iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
bool same(string a, string b)
{
    if (a.size() == b.size() && a != b)
    {
        map<char, int>str1;
        map<char, int>str2;
        for (int i = 0; i < a.size(); i++)
        {
            str1[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            str2[b[i]]++;
        }
        auto it = str1.begin();
        while (it != str1.end())
        {
            if (str2.find(it->first) == str2.end() || str2[it->first] != it->second)
            {
                return false;
            }
            it++;
        }
    }
    else
    {
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<string> d;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        d.push_back(s);
    }
    string s;
    vector<string> w;
    vector<string>ans;
    int num = 0;
    while (cin >> s)
    {
        w.push_back(s);
    }
    for (int i = 0; i < s.size(); i++)
    {
        int j;
        for (j = 0; j < d.size(); j++)
        {
            
            if (same(d[j], w[i]))
            {
                ans.push_back(d[j]);
                num++;
            }
        }
    }
    int k = *(s.end()-1) - '0'-1;
    sort(ans.begin(), ans.end());
    cout << num << endl;
    if (k < ans.size())
    {
    cout << ans[k] << endl;
    }
    
}
