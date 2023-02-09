#include <iostream>
#include<map>
using namespace std;
int main() 
{
    int size;
    cin>>size;
    map<int,int> m;
    int index=0,value=0;
    for(int i=0;i<size;i++)
    {
        cin>>index>>value;
        m[index]+=value;
    }
    auto it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}
