#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
  
    vector<int> mask(4,0);
    vector<int> ip1(4,0);
    vector<int> ip2(4,0);
    char c;
    while (cin>>mask[0]>>c>>mask[1]>>c>>mask[2]>>c>>mask[3])//输入掩码
    {
        int flag = -1;//结果
        cin>>ip1[0]>>c>>ip1[1]>>c>>ip1[2]>>c>>ip1[3];//第一个ip地址
        cin>>ip2[0]>>c>>ip2[1]>>c>>ip2[2]>>c>>ip2[3];//第二个ip地址
        for(int i=0;i<4;i++)//两个ip地址和掩码每一段都要在0-255之间
        {
            if(mask[i]<0 || mask[i]>255 || ip1[i]<0 || ip1[i]>255 ||ip2[i]<0 || ip2[i]>255)
            {
                flag = 1;//格式非法
                break;
            }
        }
        for(int i=0;i<3;i++)//掩码的网络号全为1，主机号全为0
        {
            if(mask[i]<255 && mask[i+1]>0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)//格式非法，输出1
        {
            cout<<flag<<endl;
        }else{
            for(int i=0;i<4;i++)
            {
                if((mask[i]&ip1[i])!=(mask[i]&ip2[i]))//两个ip地址和掩码做AND操作
                {
                    flag = 2;
                    break;
                }else{//AND操作结果不相同
                    flag = 0;
                }
            }
            cout<<flag<<endl;
        }
    }
    return 0;
}