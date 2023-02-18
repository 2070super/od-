#include <iostream>
#include<string>
using namespace std;

int main() 
{
    string s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"}; //非必要的参照字典
    string password= {"bcdefghijklmnopqrstuvwxyza222333444555666777788899990123456789"};
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        str[i]=password[s.find(str[i])];
    }
    cout<<str<<endl;
}
// 64 位输出请用 printf("%lld")