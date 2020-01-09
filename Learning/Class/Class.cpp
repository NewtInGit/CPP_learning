// Class.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Stock.h"

int main()
{
	using std::cout;
	using std::endl;
	const Stock example("Company name", 2000, 146);//常量
	Stock stock1("Apple Tec", 250, 15);
	Stock stock2 = Stock("Xiaomi", 150, 10);

	cout << "Buy and Sell Function" << endl;
	stock1.buy(15,15.812);
	stock1.show();
	stock1.sell(200, 14.24);
	stock1.show();

	cout << "Comparing..." << endl;
	Stock top = stock1.topval(stock2);//隐式调用stock1，显式调用stock2
	top.show();

	cout << "Assigning stock1 to stock2" << endl;
	stock2 = stock1;
	cout << "Listing stock1 and stock2" << endl;
	stock1.show();
	stock2.show();

	

	cout << "Using construtor to reset stock1" << endl;
	stock1 = Stock();
	stock1.show();

	cout << "Show const Stock class" << endl;
	example.show();

	return 0;
}

//查看构建函数，哪种会被调用，什么时候会被清理
//常量stock如何使用成员函数（定义和声明时添加const）