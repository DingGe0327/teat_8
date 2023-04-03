#define  _CRT_SECURE_NO_WARNINGS 1
for(初始化；判断；调整)
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		printf("%d ", i);
		//i = 5; //1,6,,6,,6,6,6,6...
		//i++;
		//i++;  //不建议在循环体内修改循环变量，防止for循环失去控制
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)  //判断项一个等号是赋值。0为假，循环0次
	{
		printf("%d ", k);
	}
	return 0;
}


//do while循环
#include <stdio.h>
int main()
{
	int i = 0;
	do
	{
		printf("%d ", i);
		i++;
	} while (i < 10);
	return 0;
}







