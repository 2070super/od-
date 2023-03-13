#include <iostream>
using namespace std;

int main() 
{
    double ans;
    cin>>ans;
    double a=ans;
    for(int i=1;i<5;i++)
    {
        ans=ans/2;
        a+=ans*2;
    }
    ans=ans/2;
   cout<<a<<endl;
   cout<<ans;
}
// 64 位输出请用 printf("%lld")