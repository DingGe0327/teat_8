#define  _CRT_SECURE_NO_WARNINGS 1
//while
#include <stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			break;           //whileѭ���У�break�������õ�ֹͣѭ��

		printf("%d ", i);
		i++;
	}
	return 0;
}

int main()
{
	int i = 0;
	while (i <= 10)
	{
		//i++;
		if (i == 5)
		{
			//i++;
			continue;  //continue������������������ѭ������ʣ����δִ�е���䣬����������һ�ε�ѭ�������ж�
		}

		printf("%d ", i);
		i++;
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int ch = getchar();
	printf("%c", ch);
	putchar(ch);

	//int ch2 = 0;
	//scanf("%c", &ch2);
	//printf("%c", ch2);
	//return 0;
}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		else
			putchar(ch);
	}
	return 0;
}












