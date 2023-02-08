#include iostream
#includestring
using namespace std;

int main() 
{
   string str;
   getline(cin,str);
   if(str.size()%8!=0)
   {
    str.append(8-str.size()%8,'0');
    } 
    for (int i = 0; i str.size(); i += 8)
    {
        cout  str.substr(i, 8)  endl;
    }
}