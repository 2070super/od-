#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    int ans=0;
    while(a!=0)
    {
        if(a%2==1)
        {
            ans++;
        }
        a=a/2;
    }
    cout<<ans;
}
// 64 位输出请用 printf("%lld")