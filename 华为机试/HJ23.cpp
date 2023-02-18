#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        vector<int> count(26, 0); //记录字母出现的次数
        for (int i = 0; i < s.length(); i++) //遍历字符串
            count[s[i] - 'a']++; //统计每个字母出现的次数
        int min = count[s[0] - 'a']; //以第一个出现的字符为始
        for (int i = 0; i < 26; i++)
            if (min > count[i] && count[i] > 0) //一定要找到最小但不是0的次数
                min = count[i];
        for (int i = 0; i < s.length();
                i++) //输出所有出现次数大于min的字符
            if (count[s[i] - 'a'] > min)
                cout << s[i];
        cout << endl;
    }
    return 0;
}