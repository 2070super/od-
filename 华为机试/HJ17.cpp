#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x = 0, y = 0;
    auto start = s.begin(), end = s.begin();
    vector<string>v;
    while (end != s.end()) {

        if (*start != ';' && start != s.end()) {
            start++;
        }
        else {
            string str;
            for (auto it = end; it != start; it++) {
                str.push_back(*it);
            }
            start++;
            end = start;
            v.push_back(str);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        int num = 0;
        if (v[i].size() == 3 && v[i][1] >= '0' && v[i][1] <= '9' && v[i][2] >= '0' &&
            v[i][2] <= '9') {
            num = num + (v[i][1] - '0') * 10 + (v[i][2] - '0');
        }
        if (v[i].size() == 2 && v[i][1] >= '0' && v[i][1] <= '9') {
            num = num + (v[i][1] - '0');
        }
        switch (v[i][0]) {
        case'A':x = x - num; break;
        case'W':
            y = y + num;
            break;
        case'S':
            y = y - num;
            break;
        case'D':x = x + num; break;
        default:
            break;
        }

    }
    cout << x << ',' << y << endl;
}