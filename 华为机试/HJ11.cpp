#include <iostream>
#include <string>
using namespace std;

int main() 
{
 int num;
 cin>>num;
 string str=to_string(num);
 for(int i=str.size()-1;i>=0;i--)
 {
    cout<<str[i];
 }
}
// 64 位输出请用 printf("%lld")