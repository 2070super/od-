#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int ans = 0;
    int b = 0;
    for (int i = s.size() - 1; i >= 2; i--,b++)
    {
        int o;
        if (s[i] >= 'A')
        {
            switch (s[i])
            {
            case('A'):o = 10; break;
            case('B'):o = 11; break;
            case('C'):o = 12; break;
            case('D'):o = 13; break;
            case('E'):o = 14; break;
            case('F'):o = 15; break;
            }
        }
        else
        {
            o = s[i] - '0';
        }
        ans = ans + o * pow(16, b);
    }
    cout << ans << endl;
}