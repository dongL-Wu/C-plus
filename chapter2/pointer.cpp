#include <stdio.h>
#include <iostream>

/* ---------ָ�루*�� ���ĳ������ĵ�ַ -----------
	ָ�뱾���Ƕ��������ָ����и�ֵ�Ϳ������ҿ����Ⱥ�ָ��ͬ�Ķ���
	ָ�������ڶ���ʱ����ֵ����û�б���ʼ������ӵ��һ����ȷ����ֵ
	������ʽ�� *d  ����d�Ǳ�����  ����1. int ip;   2. int *ip1, *ip2; 3. double dp, *dp1;(dp��double���͵Ķ���dp1��double�Ͷ����ָ��)
	������ȡĳ������ĵ�ַ������Ҫʹ��ȡ��ַ��(&)

*/

int main()
{
	//int ival = 42;
	//std::cout << "the value of ival: " << ival <<std::endl;   //the value of ival: 42
	//std::cout << "the address of ival: " << &ival << std::endl;         // the address of ival: 00B5FE74  �����ֵ�ַ���������ģ����̶���

	//float ival2 = 32.3;
	//int *p = &ival;  //p���ival�ĵ�ַ�� ��p��ָ�����ival��ָ��
	//std::cout << p << std::endl;
	//std::cout << *p << std::endl;
	int i = 42;
	int *p = &i;
	*p = *p * *p;
	std::cout << *p;
	//p = 0;
	//std::cout << p;
	//std::cout << *p;



	return 0;
}