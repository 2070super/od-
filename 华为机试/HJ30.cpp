#include<iostream>
#include<string>
using namespace std;
 
void JiaMi(string str)
{
    int length = str.length();
    for(int i=0; i<length; i++)
    {
        //小写字母
        if(str[i]-'a'>=0 &&str[i]-'z'<0)
        {
            str[i] -= 31;
        }
        else if(str[i] == 'z')
        {
            str[i] = 'A';
        }
        //大写字符
        else if(str[i]-'A'>=0 &&str[i]-'Z'<0)
        {
            str[i] += 33;
        }
        else if(str[i] == 'Z')
        {
            str[i] = 'a';
        }
        //数字
        else if(str[i]-'0'>=0 &&str[i]-'9'<0)
        {
            str[i] += 1;
        }
        else if(str[i] == '9')
        {
            str[i] = '0';
        }
    }
    cout<<str<<endl;
}
void JieMi(string str)
{
    int length = str.length();
    for(int i=0; i<length; i++)
    {
        //小写字母
        if(str[i]-'a'>0 &&str[i]-'z'<=0)
        {
            str[i] -= 33;
        }
        else if(str[i] == 'a')
        {
            str[i] = 'Z';
        }
        //大写字符
        else if(str[i]-'A'>0 &&str[i]-'Z'<=0)
        {
            str[i] += 31;
        }
        else if(str[i] == 'A')
        {
            str[i] = 'z';
        }
        //数字
        else if(str[i]-'0'>0 &&str[i]-'9'<=0)
        {
            str[i] -= 1;
        }
        else if(str[i] == '0')
        {
            str[i] = '9';
        }
    }
    cout<<str<<endl;
}
int main()
{
    string str1, str2;
    while(cin>>str1>>str2)
    {
        JiaMi(str1);
        JieMi(str2);
    }
    return 0;
}