#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    char c;
    string ans;
    string word;
    while(cin.get(c))//逐个字符输入
    {
        if(isalpha(c)) word+=c;//判断是否是英文字母，如果是的话加到单词里
        else{
            if(!word.empty()){//若有单词还没加入
                if(!ans.empty()){//ans不为空，word加入的时候需要添加空格
                    ans=word+' '+ans;
                }else{//若ans为空，直接加入word
                    ans=word;
                }
            }
            word.clear();//word已经加入了结果中，清空
        }
    }
    cout<<ans<<endl;
    return 0;
}