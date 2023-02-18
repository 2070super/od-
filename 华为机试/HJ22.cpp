#include <iostream>
#include<vector>
using namespace std;
int solution(int empty)
{
    int full=0;
    while(empty>=3)
    {   
        empty=empty-2;
        full++;
    }
    if(empty==2)
    {
        full++;
    }
    return full;
}
int main() 
{
    int n;
    vector<int> v;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            v.push_back(n);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<solution(v[i])<<endl;
    }

}
// 64 位输出请用 printf("%lld")