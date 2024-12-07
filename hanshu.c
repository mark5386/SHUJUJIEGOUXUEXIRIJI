#include <stdio.h>
/*需求：
  计算1加到n的值，返回计算结果,n的值在调用函数时传入。
*/
//返回值类型   函数名  （参数列表）
//{
//	函数体
//	...
//	返回值
//}

int fun(int n)
{
	int sum = 0;//用来接收累加值
	for (int i = 1; i <= n; i++)//从 1 循环到 100，每次将值累加到变量 sum
	{
		sum += i;//累加
	}
	return sum;	//返回计算结果
}


int main(int argc, char const* argv[])
{
	int s = fun(100);//调用fun()函数接收返回值
	printf("s=%d\n", s);	//输出接收的计算结果
	return 0;
}
