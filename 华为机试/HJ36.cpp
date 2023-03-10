#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    string key, words;
    while(cin >> key >> words){
        vector<char> v;
        for(int i = 0; i < key.length(); i++){ //遍历字符串key
            key[i] = toupper(key[i]); //全部转大写
            auto it = find(v.begin(), v.end(), key[i]); //查找是否加入过了
            if(it == v.end()) //非重复加入
                v.push_back(key[i]);
        }
        for(char c = 'A'; c <= 'Z'; c++){ //从A遍历到Z
            auto it = find(v.begin(), v.end(), c); //没有出现过
            if(it == v.end())
                v.push_back(c); //才加入
        }
        string output = "";
        for(int i = 0; i < words.length(); i++){ //遍历要加密的字符串
            if(islower(words[i])) //遇到小写字符
                output += v[words[i] - 'a'] + 32; //需要在转出来的大写字母基础上加32
            else
                output += v[words[i] - 'A']; //大写字母直接替换
        }
        cout << output << endl;
    }
    return 0;
}