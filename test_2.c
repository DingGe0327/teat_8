#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 80;
	if (age < 10)
	{
		printf("少年\n");
	}
	////else if (60 >= age >= 18)
	////else if(18<=age<=40)
	else if (age > 18 && age < 60)
	{
		printf("中年\n");
	}
	else
	{
		printf("老年");
	}
	
	return 0;
}

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a==1)
		if (b == 2)
		{
			printf("hehe");
		}
		else
		{
			printf("haha");
		}
	return 0;
}

#include <stdio.h>

int main()
{
	int n ;
	//int i = 0;
	scanf("%d", &n);
	//if (n % 2 == 0)
	if (0 == n % 2)
	{
		printf("偶数");
	}
	else
	{
		printf("奇数");
	}
	return 0;
}

int main()
{
	int i = 0;
	int n = 0;
	for(i=0;i<=100;i++)
	{
		//if (1 == i % 2)
		if (i % 2 == 1)
		{
			printf("%d ", i);
			i++;
			n++;
		}
	}

	return 0;
}

#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)  //（）里面是整型
	{
		case 1:
		    printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期日\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}
	return 0;
}
