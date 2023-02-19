#include <iostream>   
#include <vector>
#include <algorithm>
using namespace std;

int main()
 {
    int num;
    cin >>num;
    int n;
    vector<int> v;
    while(cin>>n)
    {
        v.push_back(n);
    }
    vector<int> high(num,1);
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i]>v[j])
            {
                high[i]=max(high[i],high[j]+1);   
            }
        }
    }
    vector<int> low(num,1);
    for(int i=num-1;i>=0;i--)
    {
        for(int j=num-1;j>i;j--)
        {
            if(v[i]>v[j])
            {
                low[i]=max(low[i],low[j]+1);
            }
        }
    }
    int size=0;
    for(int i=0;i<num;i++)
    {
        if(size<high[i]+low[i])
        {
            size=high[i]+low[i];
        }
    }
    size--;
    int ans=num-size;
    cout<<ans<<endl;
 }

// 64 位输出请用 printf("%lld")