#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�����ĵݹ�
//����ֱ�ӻ��߼�ӵ��������һ�ַ���
//�Ѵ��͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С���������



//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}
//
//int main()
//{
//
//	return 0;
//}


//����һ���޷������� ����ӡ����ÿһλ��

//void print(unsigned int n)
//{
//	if (n > 9)//���Ƶݹ��ִ��(�ݹ����������)
//	{
//		print(n/10); //�ı�����ֵ(ÿ��һ�εݹ��Խ�ӽ���������)
//	}
//	printf("%d ", n % 10);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//�ݹ� �����Լ������Լ�
//	print(num);//��ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}


//��������ȱһһ��������Ҳ��һ����
 
//ջ���
/*д�����ʱ��
1.�������ݹ飬��������������ÿ�εݹ�Ͼ���������
2.�ݹ��β���̫��
*/

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//
//	return 0;
//}


//��д����<����������ʱ����>�����ַ�������

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return (1 + my_strlen(str+1));
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	//arr���������Σ�������������Ԫ�صĵ�ַ
//
//	return 0;
//}


//�ݹ������

//��n�Ľ׳�

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}


//�ݹ�

//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n * Fac(n - 1));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}


//��һЩ���ܿ����õ����ķ�ʽʵ��Ҳ�����õݹ�



//���n��쳲�������

//int count = 0;
////�ݹ������⣬����Ч��̫��
//
//int Fib(int n)
//{
//	//ͳ�Ƶ�����쳲��������ļ������
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}

//����(ѭ��)

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//��ŵ������

//����

//int Hanio_twice(int num)
//{
//	if (1 == num)
//	{
//		return 1;
//	}
//	else
//		return 2 * Hanio_twice(num - 1);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//����
//	int ret = Hanio_twice(num);
//	printf("���%d�㺺ŵ����Ҫ%d��\n", num, ret);
//	return 0;
//}

//˳��

void Hanio_Step(int n, char A, char B, char C)
{
	if (1 == n)
	{
		printf("%c->%c\n", A, C);
	}
	else
	{
		Hanio_Step(n - 1, A, C, B);
		//n-1�����Ӵ�A��C�Ƶ�B
		printf("%c->%c", A, C);
		Hanio_Step(n - 1, B, A, C);
		//n-1�����Ӵ�B��A�Ƶ�C
	}
}



int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanio_Step(n, 'A', 'B', 'C');
	return 0;
}




