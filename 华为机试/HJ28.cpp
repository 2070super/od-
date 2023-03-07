#include <iostream>
#include<vector>
using namespace std;
bool isprime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
bool find(int num, vector<int>& evens, vector<bool>& used, vector<int>& match) {
    for (int i = 0; i < evens.size(); i++) {
        if (isprime(num + evens[i]) && !used[i]) {
            used[i] = true;
            if (match[i] == 0 || find(match[i], evens, used, match))
            {
                match[i] = num;
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> v1;
    vector<int> v2;
    int n;
    while (cin >> n) {
        if (n % 2 == 0) {
            v2.push_back(n);
        }
        else {
            v1.push_back(n);
        }
    }
    int count = 0;
    if (v1.empty() || v2.empty()) {
        cout << count << endl;
        exit(0);
    }
    vector<int> match(v2.size(), 0);
    for (int i = 0; i < v1.size(); i++) {
        vector<bool> used(v2.size(), false);
        if (find(v1[i], v2, used, match))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")