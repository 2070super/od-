#include <iostream>
using namespace std;
#include<vector>
#include<string>
#include <ctype.h>
int main() 
{
    vector<int> v(4,0);
    string str;
    getline(cin,str);
    auto it =str.begin();
    while(it!=str.end())
    {
        if((*it>='a'&&*it<='z')||(*it<='A'&&*it>='Z'))
        {
            v[0]++;
        }
        else if(*it>='0'&&*it<='9')
        {
            v[2]++;
        }
        else if(*it==' ')
        {A
            v[1]++;
        }
        else 
        {
            v[3]++;
        }
        it++;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
// 64 位输出请用 printf("%lld")