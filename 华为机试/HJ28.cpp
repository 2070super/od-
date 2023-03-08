#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string s1;
    cin >> s1;
    int max = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        int low = i - 1, high = i;
        while (low >= 0 && high < s1.size() && s1[low] == s1[high])
        {
            low--;
            high++;
        }
        max = max(max, high - low - 1);
    }
    cout << max << endl;
}


// 64 位输出请用 printf("%lld")