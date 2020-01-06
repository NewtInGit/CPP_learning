// Learning.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
const int defPrice = 28;
void printinfo(int b, double c=1.4 , int d=3);//默认形参必须全部放在右侧,声明需要提前赋默认值


struct GoodsInfo
{
	string name;
	float volume;
	double price;
};

int main()
{
	GoodsInfo a = {
	"Potato",
	0.2,
	defPrice
	};

	GoodsInfo b = a;
	std::cout << a.name << std::endl;
	std::cout << b.price<< std::endl;


	GoodsInfo googsList[2] =
	{
		{"To",2,3},
		{"Bo",2,3}
	};
	std::cout << googsList[1].price + googsList[0].price << std::endl;
	printinfo(1,5.0);
	// Invalid:
	// printinfo(1, d = 6);
	// 不能跳过
	return 0;
}


void printinfo(int b , double c , int d)
{
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;


}

//结构体的定义与调用
//函数默认值的操作