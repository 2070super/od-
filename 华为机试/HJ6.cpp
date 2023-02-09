#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    long num;
    cin >> num;
    vector<int>v;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num == 0) {
            break;
        }
        while (num % i == 0) {
            num = num / i;
            v.push_back(i);
        }
    }  
    if(num!=1)
    {
        v.push_back(num);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

