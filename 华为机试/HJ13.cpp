#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int n=s.size();
        string tmp;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ')
                tmp=s[i]+tmp;
            else{  
                cout<<tmp;
                cout<<' ';
                tmp.clear();
            } 
        }
        cout<<tmp<<endl;
    }
}
// 64 位输出请用 printf("%lld")