#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
 
bool isbrother(string s1, string s2){  //查看是否是兄弟单词
    if(s1.length() == s2.length()){ //兄弟单词一定要长度相等
        if(s1 == s2) //不能是同一个
            return false;
        sort(s1.begin(), s1.end());  //对两个字符串按字符字典序排序
        sort(s2.begin(), s2.end());
        if(s1 == s2) //排序后一样才是改变位置能办到的
            return true;
    }
    return false;
}
int main(){
    int n;
    while(cin >> n){
        vector<string> strs(n);
        for(int i = 0; i < n; i++) //输入n个字符串
            cin >> strs[i];
        string str;
        cin >> str; //字符串str
        int k;
        cin >> k;
        vector<string> brothers;
        for(int i = 0; i < n; i++){ //检查每个字符串是否是兄弟单词
            if(isbrother(str, strs[i]))
                brothers.push_back(strs[i]);
        }
        sort(brothers.begin(), brothers.end()); //对后续排序
        cout << brothers.size() << endl;
        if(brothers.size() >= k) //输出第k个
            cout << brothers[k - 1] << endl;
    }
    return 0;