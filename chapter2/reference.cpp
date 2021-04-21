#include <stdio.h>
#include <iostream>


//引用  &
/*对象引用是指给对象其了另一个名字，引用和对象将绑定在一起，修改其中的一个，另一个也会对应变换
	引用必须初始化, 即必须绑定一个对象，但该对象可以先不初始化 
	可同时声明变量和引用
	引用不能针对字面值（如0 ，3.14等）或者某个表达式的计算结果
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