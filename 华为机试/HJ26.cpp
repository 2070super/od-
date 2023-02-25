#include <iostream>
#include <vector>
using namespace std;
string String_Sorting(string str)
{
    int len = str.size(); //获取字符串长度
    vector <char> vec; //用一个 char 型的向量存储按规则排序后的字符串中的字母字符
    //规则一：英文字母从 A 到 Z 排列，不区分大小写。
    //规则二：同一个英文字母的大小写同时存在时，按照输入顺序排列。
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < len; i++)
        {
            if ((str[i] - 'a' == j) || (str[i] - 'A' == j))
            {
                vec.push_back(str[i]); //将符合规则的字母字符先后写入向量
            }
        }
    }
    //规则三：非英文字母的其它字符保持原来的位置。
    for(int i = 0,k = 0;(i < len) && (k < vec.size()); i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = vec[k++];
        }
    }
    return str; //返回按规则排序好后的字符串
}
//主函数
int main()
{
    string str;
    while (getline(cin, str))
    {
        cout << String_Sorting(str) << endl;
    }
    return 0;
}