
#include <iostream>

#include <cstdio>

int main() {
	using namespace std;
	
	// Q.为什么C++有多种整型？
	// A.不同的整型类型需要不同大小的内存，这很符合现实世界需求，就像超市总是售卖大小不一的瓶装水和饮料。
	// 另外，对于int和long等类型所占用的大小具有机器依赖性(取决于编译器和平台)，C++语言规范规定了其范围；
	// 例如int不一定比long小，但long类型一定大于或等于int类型的范围。


	// A. 
	short s = 80;
	unsigned val = 42110;
	long big_val = 3000000000L;		// 大于有符号整型的最大值(INT_MAX)，因此用long或unsigned int
	

	// Q.C++提供了什么措施来防止超出整型的范围？
	// A.C++提供了更大的内建整型如long long类型；其次可以通过条件判断是否大于MAX值，C++还提供了诸如static_cast<>()的类型转换


	// Q. 33L与33之间有什么区别？
	// A.33L是长整型long，33一般为int


	char grade1 = 65;
	char grade2 = 'A';
	cout << "grade1 = " << grade1 << ", grade2 = " << grade2 << endl;
	// 以上两条赋值语句并不安全等价
	// 前提是都应用于ASCII系统上，其次65是整型常量，'A'是一个字符类型常量


	// Q.如何使用C++来找出编码88表示的字符？指出至少两种方法
	char ch = 88;
	cout << "ch = " << ch << endl;
	cout << "88 in char is: " << char(88) << endl;
	cout << "again 88 in char is: " << static_cast<char>(88) << endl;
	printf("again again 88 in char is %c\n", 88);


	// Q.将long值赋给float变量会导致舍入误差，将long值赋给double变量呢？将long long值赋给double变量呢？
	// double比float所能够表示的范围更大，因此的确可以用来表示更大的整型；
	// 但是long和long long(更大的长整型)在转换为double时都可能导致误差，原因是：
	// 1. 数据太大超出double所能表示的范围
	// 2. 这些内建的数据类型在计算机底层使用二进制表示表示(无论是整型还是浮点类型)


	cout << 8 * 9 + 2 << endl;	// 74
	cout << 6 * 3 / 4 << endl;	// 4
	cout << 3 / 4 * 6 << endl;	// 0
	cout << 6.0 * 3 / 4 << endl;	// 4.5
	cout << 15 % 4 << endl;		// 3


	// Q.假设x1和x2是两个double变量，您要将它们作为整数相加，再将结果赋给一个整型变量。请编写一条完成这项任务的C++语句。
	// 如果要将它们作为double值相加并转换为int呢？
	double x1 = 0.5;
	double x2 = 0.5;
	int rx = static_cast<int>(x1) + static_cast<int>(x2);
	int resx = static_cast<int>(x1 + x2);
	cout << "rx = " << rx << ", resx = " << resx << endl;


	auto cars = 15;		// int
	auto iou = 150.37f;		// float
	auto level = 'B';	// char
	auto crat = U'/U00002155';	// char32_t
	auto fract = 8.25f / 2.5;	// double


	return 0;
}