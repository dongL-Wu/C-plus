#include <stdio.h>
#include <iostream>


//����  &
/*����������ָ������������һ�����֣����úͶ��󽫰���һ���޸����е�һ������һ��Ҳ���Ӧ�任
	���ñ����ʼ��, �������һ�����󣬵��ö�������Ȳ���ʼ�� 
	��ͬʱ��������������
	���ò����������ֵ����0 ��3.14�ȣ�����ĳ�����ʽ�ļ�����
*/

int main()
{

	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	std::cout << "the value of i:"<< i << std::endl;
	std::cout << "the value of r1: " << r1 << std::endl;

	i = i + 1;
	std::cout << "the value of i:" << i << std::endl;
	std::cout << "the value of r1: " << r1 << std::endl;


	/*r2 = 3.14159;
	std::cout << "the value of d:"<< d << std::endl;
	std::cout << "the value of r2:" << r2 << std::endl;*/

	/*r2 = r1;
	std::cout << "the value of r2:" << r2 << std::endl;*/

	/*i = r2;
	std::cout << "the value of i:" << i << std::endl;*/

	r1 = d;
	std::cout << "the value of r1: " << r1 << std::endl;

	int i, &r1 = i;
	i = 5;
	r1 = 10;
	std::cout << i << "  " << r1 << std::endl;
	

	return 0;
}