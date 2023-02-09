#include <iostream>
using namespace std;

int main() 
{
    double x;
    cin>>x;
    int num=(int)x;
    double num2=x-num;
    if(num2>=0.5)
    {
        num++;
    }
    cout<<num;
}
