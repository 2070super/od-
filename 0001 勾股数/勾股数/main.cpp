#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
bool Primenumber(int a, int b, int c)
{
	if (a == b && b == 1) {
		return false;
	}
	for (int i = 2; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			return false;
		}
	}
	return true;
}

void Pythagorean(int first, int last)
{ 
	int flag = 0;
	for (int i=first; i < last;i++)
	{
		for (int j = i; j < last; j++)
		{
			float a = sqrt(pow(i, 2) + pow(j, 2));
			if (a - (int)a ==0&& (int)a<last)
			{	
				flag = 1;
				int b = (int)a;
				if (Primenumber(i, j, b) == true)
					printf("%d,%d,%d\n", i, j, b);
				else
					continue;
			}
			else
			{
				continue;
			}
		}
	}
	if (flag == 0)
	{
		printf("NA");
	}
}
int main()
{
	int first,last;
	scanf("%d", &first);
	scanf("%d", &last);
	Pythagorean(first, last);
}