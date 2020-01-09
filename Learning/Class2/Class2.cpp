// Class2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Time.h"
int main()
{
	using std::cout;
	using std::endl;
	Time process1(2,56);
	Time process2(5, 23);
	Time total;

	cout << "Process1 Time: ";
	process1.show();
	cout << "Process2 Time: ";
	process2.show();

	cout << "Total Time: ";
	total = process1 + process2;
	(process1 + process2).show();

	cout << "Diff Time: ";
	(process2 - process1).show();

	double adjust_weight = 2.4;
	cout << "Mult result: ";
	(total * adjust_weight).show();
}

