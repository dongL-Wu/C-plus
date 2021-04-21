#include <stdio.h>
#include <iostream>

/* ---------指针（*） 存放某个对象的地址 -----------
	指针本身是对象，允许对指针进行赋值和拷贝，且可以先后指向不同的对象
	指针无需在定义时赋初值，若没有被初始化，将拥有一个不确定的值
	声明形式： *d  其中d是变量名  例：1. int ip;   2. int *ip1, *ip2; 3. double dp, *dp1;(dp是double类型的对象，dp1是double型对象的指针)
	如果想获取某个对象的地址，则需要使用取地址符(&)

*/

int main()
{
	//int ival = 42;
	//std::cout << "the value of ival: " << ival <<std::endl;   //the value of ival: 42
	//std::cout << "the address of ival: " << &ival << std::endl;         // the address of ival: 00B5FE74  （发现地址是随机分配的，不固定）

	//float ival2 = 32.3;
	//int *p = &ival;  //p存放ival的地址， 或p是指向变量ival的指针
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