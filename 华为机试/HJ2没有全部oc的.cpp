#include <iostream>
#include<string>
using namespace std;
 
int main() {
    string s;
    getline(cin,s);
    char b;
    cin>>b;
    int o;
    if(b>='a'&&b<='z')
     o=b-'a';
     else
      {
        o=b-'A';
      }
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(o==s[i]-'a'||o==s[i]-'A')
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}