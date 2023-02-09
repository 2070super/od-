#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
 string str;
 vector<string> v;
 int size;
 cin>>size;
 for(int i=0;i<size;i++)
 {
    cin>>str;
    v.push_back(str);
 }
 sort(v.begin(),v.end());
 auto it=v.begin() ;
 while(it!=v.end())
 {
    cout<<*it<<endl;
    it++;
 }
}
// 64 位输出请用 printf("%lld")