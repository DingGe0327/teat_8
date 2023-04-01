#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input;
	printf("你还好吗(1/0)：");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("好");
	}
	else
	{
		printf("不好");
	}

	return 0;
}

#include <stdio.h>
int main()
{
	int line = 0;
	while (line <= 30000)
	{
		printf("学习:%d\n", line);
		line++;
	}
	if (line > 30000)
	{
		printf("好offer\n");
	}

	return 0;
}

函数

#include <stdio.h>
int main()
{
	int num1;
	int num2;
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n", sum);

	return 0;
}
#include <stdio.h>
int ADD(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int main()
{
	int num1;
	int num2;
	scanf("%d%d", &num1, &num2);
	int sum = ADD(num1, num2);
	printf("%d\n", sum);
	return 0;
}

数组
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[] = { 'a','b' };
	int i = 0;
	while (i <= 9)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}

运算符
#include <stdio.h>

int main()
{
	int a = 9 / 2;
	int d = 9 % 2;
	float b = 9 / 2;
	float c = 9.0 / 2;
	printf("%d\n", a);
	printf("%d\n", d);
	printf("%f\n", b);
	printf("%f\n", c);
	return 0;
}

int main()
{
	int a = 1;
	printf("%d\n", !a);
	return 0;
}

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", sizeof(arr)); //数组的总大小，单位是字节 40
	printf("%d\n", sizeof(arr[0]));//4

	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	return 0;
}

~按位取反
#include <stdio.h>
int main()
{
	int a = -2;
	printf("%d\n", ~a);
	return 0;
}

强制类型转换
#include <stdio.h>
int main()
{
	int a = (int)3.14;
	printf("%d\n", a);
	return 0;
}






























