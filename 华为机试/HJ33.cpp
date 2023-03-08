#include<iostream>
#include<sstream>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    //输入IP
    string inputipstr;
    getline(cin, inputipstr);
    //截取ip中的数字
    vector<string> ipstr;
    string tmp = "";
    //存ip地址
    for (int i = 0; i < inputipstr.size(); ++i) {
        if (inputipstr[i] == '.') {
            ipstr.emplace_back(tmp);
            tmp = "";
        }
        else tmp += inputipstr[i];
    }
    ipstr.emplace_back(tmp);
    //数字转二进制
    string ipstr10 = "";
    for (int i = 0; i < 32; ++i)ipstr10.push_back('0');
    for (int i = 0; i < ipstr.size(); ++i) {
        int number = stoi(ipstr[i]);
        int tmpid = 7;
        while (tmpid >= 0) {
            int mod = number / pow(2, tmpid);
            ipstr10[8 * i + 8 - tmpid - 1] = to_string(mod)[0];
            if (mod != 0)number -= pow(2, tmpid);
            --tmpid;
        }
    }
    //二进制来计算10进制ip;
    long long res1 = 0;
    for (int i = 0; i < 32; ++i) {
        res1 += int(ipstr10[i] - '0') * pow(2, 32 - i - 1);
    }
    cout << res1 << endl;

    //转IP
    long long inputip10;
    cin >> inputip10;
    int tmpid = 31;
    for (int i = 0; i < 32; ++i)ipstr10[0] = '0';
    while (tmpid >= 0) {
        int mod = inputip10 / pow(2, tmpid);
        ipstr10[31 - tmpid] = to_string(mod)[0];
        if (mod != 0)inputip10 -= pow(2, tmpid);
        --tmpid;
    }
    string res2;
    int numbertmp = 0;
    for (int i = 0; i < 8; ++i) {
        numbertmp += int(ipstr10[i] - '0') * pow(2, 7 - i);
    }
    res2 += to_string(numbertmp) + '.';
    numbertmp = 0;
    for (int i = 8; i < 16; ++i) {
        numbertmp += int(ipstr10[i] - '0') * pow(2, 15 - i);
    }
    res2 += to_string(numbertmp) + '.';
    numbertmp = 0;
    for (int i = 16; i < 24; ++i) {
        numbertmp += int(ipstr10[i] - '0') * pow(2, 23 - i);
    }
    res2 += to_string(numbertmp) + '.';
    numbertmp = 0;
    for (int i = 24; i < 32; ++i) {
        numbertmp += int(ipstr10[i] - '0') * pow(2, 31 - i);
    }
    res2 += to_string(numbertmp);
    cout << res2 << endl;
    return 0;

}