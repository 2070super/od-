#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin,str);
   int ans=0;
    for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            ans++;
        }
        else
        {
            break;
        }
    }
        cout<<ans<<endl;
    }