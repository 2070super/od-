#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<string> v1;
    for (int i = 0; i < num; i++)
    {
        string n;
        cin >> n;
        v1.push_back(n);
    }
    cin >> num;
    vector<string> v2;
    for (int i = 0; i < num; i++)
    {
        string n;
        cin >> n;
        v2.push_back(n);
    }
    sort(v2.begin(), v2.end());
    auto it = v2.begin();
    auto its = (++v2.begin());
    while (its != v2.end() && it != (--v2.end()))
    {
        if (*it == *(its))
        {
            it = v2.erase(it);
            its = ++it;
            continue;
        }
        it++;
        its++;
    }
    map<int,string> ans;
    vector<int> v(v2.size(),0);
    for (int j = 0; j < v1.size(); j++)
    {   
        int nums = atoi(v1[j].c_str());
        int n = nums;
        while (nums > 0)
        {
            char a = '0' + (nums % 10);
            int local = -1;
            for (int i = 0; i < v2.size(); i++)
            {
                if (*(v2[i].c_str()) == a)
                {
                    local = i;
                    break;
                }
            }
            if (local != -1)
            {
                if (!ans[local].empty())
                {
                    int loc = ans[local].find(to_string(n));
                    if (loc != -1&&loc%2==1)
                    {
                        nums = nums / 10;
                        continue;
                    }
                }
                string _tmp = to_string(j);
                string _tmp2 = to_string(n);
                ans[local] += _tmp + ' ' + _tmp2 + ' ';
                v[local]++;
            }
            nums = nums / 10;
        }
        
    }
    int size = 0;
    for (int i = 0; i < v.size(); i++)
    {
        size = size + v[i] * 2;
        if (v[i] != 0)
        {
            size+=2;
        }
    }
    cout << size << ' ';
    for(int i=0;i<v.size();i++)
    {
        if (v[i] == 0)
        {
            continue;
        }
        else
        {
            cout << v2[i] << ' ' << v[i] << ' ' << ans[i];
        }
    }
}
// 64 位输出请用 printf("%lld")