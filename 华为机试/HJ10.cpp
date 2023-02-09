#include <iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<char,int> m;
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {   
        m[str[i]]+=1;
    }
   cout<<m.size()<<endl;
}