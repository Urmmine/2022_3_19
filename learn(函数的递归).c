#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数的递归
//函数直接或者间接调用自身的一种方法
//把大型复杂的问题层层转化为一个与原问题相似的规模较小的问题求解



//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件

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


//接收一个无符号整数 ，打印它的每一位数

//void print(unsigned int n)
//{
//	if (n > 9)//控制递归的执行(递归的限制条件)
//	{
//		print(n/10); //改变输入值(每调一次递归就越接近限制条件)
//	}
//	printf("%d ", n % 10);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//递归 函数自己调用自己
//	print(num);//打印参数部分数字的每一位
//
//	return 0;
//}


//两个条件缺一一定错，都有也不一定对
 
//栈溢出
/*写代码的时候：
1.不能死递归，得有跳出条件，每次递归毕竟跳出条件
2.递归层次不能太深
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


//编写函数<不允许创建临时变量>，求字符串长度

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
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	//arr数组名传参，传的是数组首元素的地址
//
//	return 0;
//}


//递归与迭代

//求n的阶乘

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}


//递归

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


//有一些功能可以用迭代的方式实现也可以用递归



//求第n个斐波那契数

//int count = 0;
////递归可以求解，但是效率太低
//
//int Fib(int n)
//{
//	//统计第三个斐波那契数的计算次数
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

//迭代(循环)

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



//汉诺塔问题

//步数

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
//	scanf("%d", &num);//塔数
//	int ret = Hanio_twice(num);
//	printf("完成%d层汉诺塔需要%d步\n", num, ret);
//	return 0;
//}

//顺序

void Hanio_Step(int n, char A, char B, char C)
{
	if (1 == n)
	{
		printf("%c->%c\n", A, C);
	}
	else
	{
		Hanio_Step(n - 1, A, C, B);
		//n-1个碟子从A经C移到B
		printf("%c->%c", A, C);
		Hanio_Step(n - 1, B, A, C);
		//n-1个碟子从B经A移到C
	}
}



int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanio_Step(n, 'A', 'B', 'C');
	return 0;
}




