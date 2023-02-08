#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    int size;
    cin>>size;
    while(cin>>n)
    {
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]!=v[i])
        {
            cout<<v[i]<<endl;
        }
        else {
        continue;
        }
    }
}