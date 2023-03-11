#include<iostream>
using namespace std;
 
int getSum(int n) { //求每个月兔子数
    if(n == 1 || n == 2) //n=1或2跳出递归
        return 1;
    return getSum(n - 1) + getSum(n - 2); //返回前两个月相加
}
 
int main(){
    int n;
    while(cin >> n){ //每次输入n
        cout << getSum(n) << endl;
    }
    return 0;
}