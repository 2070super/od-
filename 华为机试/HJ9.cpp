#include <iostream>
using namespace std;

int main() {
    int a[10]={};
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {  int num=s[i]-'0';
        if(a[num]==0)
        {
            a[num]++;
            cout<<num;
        }
        else 
        {
            continue;
        }
    }
   
}