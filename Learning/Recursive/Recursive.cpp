// Recursive.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
void countdown(int num);
using namespace std;




int main()
{
	countdown(4);
	return 0;
}



void countdown(int num)
{
	cout << "Counting down . . ." << num << endl;
	if (num > 0) {
		countdown(num - 1);
	}
	cout << "Bingo!" << endl;
}


//函数可以实现递归
//默认参数
