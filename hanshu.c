#include <stdio.h>
/*����
  ����1�ӵ�n��ֵ�����ؼ�����,n��ֵ�ڵ��ú���ʱ���롣
*/
//����ֵ����   ������  �������б�
//{
//	������
//	...
//	����ֵ
//}

int fun(int n)
{
	int sum = 0;//���������ۼ�ֵ
	for (int i = 1; i <= n; i++)//�� 1 ѭ���� 100��ÿ�ν�ֵ�ۼӵ����� sum
	{
		sum += i;//�ۼ�
	}
	return sum;	//���ؼ�����
}


int main(int argc, char const* argv[])
{
	int s = fun(100);//����fun()�������շ���ֵ
	printf("s=%d\n", s);	//������յļ�����
	return 0;
}
