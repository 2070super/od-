#include <iostream>
#include <stack>
#include<vector>
#include<string>
#include<map>
#include<queue>
using namespace std;
int main()
{
    string s;
    queue<string> q;
    map<string, int> m;
    while (getline(cin, s))
    {
        s = s.substr(s.find_last_of('\\') + 1);
        int pos = s.find_last_of(' ');
        if (pos > 16) {
            s = s.substr(pos - 16);
        }
        if (m.find(s) == m.end())
        {
            q.push(s);
        }
        if (q.size() > 8)
        {
            q.pop();
        }
            
        ++m[s];
    }
    int size = q.size();
    for (int x = 0; x < size; x++)
    {
        cout << q.front() << " " << m[q.front()] << endl;
        q.pop();
    }
}