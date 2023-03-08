#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    auto it=s.begin();
    while(it!=s.end())
    {
        if(*it==' ')
        {
            it=s.erase(it);
        }
        it++;
    }
    sort(s.begin(),s.end());
    cout<<s;
}
// 64 位输出请用 printf("%lld")