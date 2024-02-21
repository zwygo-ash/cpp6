
#include <iostream>

int main() {
	
	using namespace std;	// lazy approach, all names available

	// 更恰当的做法: 只使所需的对象可用
	using std::cout;	// make cout available
	using std::endl;	// make endl available
	using std::cin;		// make cin available
	
	// 下面出现的"<<"叫做插入运算符, 同时"<<"也是左移运算符
	// 因此这是一个运算符重载的例子
	cout << "Come up and C++ me some time." << endl;	// endl表示重启一行
	cout << "You won't regret it!" << endl;
	return 0;
}

// 2024年2月18日