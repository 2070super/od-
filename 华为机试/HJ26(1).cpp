#include <iostream>
#include<vector>
using namespace std;
#include<string>
int main()
{
    string s;
    vector<char> ans;
    getline(cin, s);
    for (int j = 0; j < 26; j++)
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - 'A' == j || s[i] - 'a' == j)
            {
                ans.push_back(s[i]);
            }
        }
    auto it = ans.begin();
    for (int i = 0, k = 0; (i < s.size()) && (k < ans.size()); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s[i] = ans[k++];
        }
    }
    cout << s;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")