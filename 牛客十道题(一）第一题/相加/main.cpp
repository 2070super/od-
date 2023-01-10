#include<iostream>
using namespace std;
int main()
{
	int sum,size;
	cin >> sum;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		sum -= i;
	}
	float ans = sum / size;
	if (ans - (int)ans != 0)
	{
		cout << "-1" << endl;
	}
	else
	{	
		int* p = new int[size];
		for (int j = 0; j < size; j++)
		{
			*(p + j) = (int)ans + j;
			cout << *(p + j) << endl;
		}
	}
}