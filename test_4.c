#define  _CRT_SECURE_NO_WARNINGS 1
for(��ʼ�����жϣ�����)
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		printf("%d ", i);
		//i = 5; //1,6,,6,,6,6,6,6...
		//i++;
		//i++;  //��������ѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)  //�ж���һ���Ⱥ��Ǹ�ֵ��0Ϊ�٣�ѭ��0��
	{
		printf("%d ", k);
	}
	return 0;
}


//do whileѭ��
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







