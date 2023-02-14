#include <fstream>
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    int A = 0, B = 0, C = 0, D = 0, E = 0, error = 0, pri = 0;
    vector<string>str;
    string s;
    while (getline(cin, s)) {
        str.push_back(s);
    }
    for (int j = 0; j < str.size(); j++) {
        vector<int> ip;
        vector<int> subnet;
        int flag = 0;
        int num = 0;
        int x = 0;//编译器抽风被迫修改
        for (int i = 0; i < str[j].size(); i++)
        {
            if ((str[j][i] >= '0' && str[j][i] <= '9') || (str[j][i] == '.'&&str[j][i-1]!='.') || str[j][i] == '~')
            {   
                if (str[j][i] >= '0' && str[j][i] <= '9') {
                    num = num * 10 + (str[j][i]-'0');
                }
                if (str[j][i] == '.' && flag == 0) {
                    ip.push_back(num);
                    num = 0;
                }
                if (str[j][i] == '.' && flag == 1) {
                    subnet.push_back(num);
                    num = 0;
                }
                if (str[j][i] == '~') {
                    flag = 1;
                    ip.push_back(num);
                    num = 0;
                }
            }
            else
            {
                error++;
                x = 1;
                break;
                
            }
        }
        if(x==1)continue;
        subnet.push_back(num);
        for (int i = 0; i < ip.size(); i++) //ip查错
        {
            if (ip[i] < 0 || ip[i] > 255)
            {
                error++;
                break;
                continue;
            }
        }
        if (ip[0] == 0 || ip[0] == 127)
        {
            continue;
        }
        int mask = 0;
        while (mask < 4 && subnet[mask] == 255)
        {
            mask++;
        }
        if (mask == 4)
        {
            error++;
            continue;
        }
        while (mask < 4 && subnet[mask] == 0)
        {
            mask++;
        }
        if (mask != 4)
        {
            error++;
            continue;
        }
        
        if (ip[0] >= 1 && ip[0] <= 126)
        {
            A++;
        }
        else if (ip[0] >= 192 && ip[0] <= 223)
        {
            C++;
        }
        else if (ip[0] >= 240 && ip[0] <= 239)
        {
            D++;
        }
        else if (ip[0] >= 128 && ip[0] <= 191)
        {
            B++;
        }
        else if (ip[0] > 240 && ip[0] <= 255)
        {
            E++;
        }
        if (ip[0] == 10)
        {
            pri++;
        }
        else if (ip[0] == 172 && (ip[1] >= 16 && ip[1] <= 31))
        {
            pri++;
        }
        else if (ip[0] == 192 && ip[1] == 168)
        {
            pri++;
        }
    }
    cout << A << " " << B << " " << C << " " << D << " " << E << " " << error << " " << pri << endl;

}
