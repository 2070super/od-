#include<iostream>
#include<string>

using namespace std;


int main()
{
    string s;
    cin >> s;
    int max = 0;
    int num = 0;
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        int a[127] = { 0 };
        num = 1;
        a[s[i]] += 1;
        for (int j = i + 1; j < size; j++)
        {
            if (a[s[j]] != 0)
            {
                break;
            }
            else
            {
                a[s[j]] += 1;
                num++;
            }
        }
        if (max < num)
        {
            max = num;
        }
    }
    cout << max << endl;
}