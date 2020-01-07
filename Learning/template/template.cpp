// template.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
template <typename AnyType>
void Swap(AnyType &a, AnyType &b);//加入&则可以改变值

template <typename T>
void Swap(T* a, T* b, int n);
const int lim = 8;
void Show(int a[lim]);


struct job
{
	char name[40];
	double salary;
	int floor;
};

void ShowJob(job j);
template<>void Swap<job>(job& j1, job& j2);



int main()
{
	int i = 10;
	int j = 12;
	cout << "i , j = " << i << " , " << j << endl;
	Swap(i, j);
	cout << "Now i , j = " << i << " , " << j << endl;


	double a = 5.2;
	double b = 13.14;
	cout << "a , b = " << a << " , " << b << endl;
	Swap(a, b);
	cout << "Now a , b = " << a << " , " << b << endl;


	int d1[lim] = { 0,1,2,3,4,5,6,7 };
	int d2[lim] = { 7,6,5,4,3,2,1,0 };
	Swap(d1, d2,lim);
	Show(d1);
	cout << "and" << endl;
	Show(d2);	

	job Apple = { "Software Eng",30000,5 };
	job ChuangXiang = { "Hardware Eng",6000,2 };
	Swap(Apple, ChuangXiang);
	ShowJob(Apple);
	ShowJob(ChuangXiang);




	return 0;
}

template <typename AnyType>
void Swap(AnyType &a, AnyType &b)
{
	AnyType temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}


template<>void Swap<job>(job& j1, job& j2)//Swap函数优先使用该重载
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(int a[lim])
{
	for (int i = 0; i < lim; i++)
	{
		std::cout << a[i] << std::endl;
	}


}

void ShowJob(job j)
{
	cout << "Job Name: " << j.name << endl;
	cout << "Job Salary: " << j.salary << endl;
	cout << "Job Floor: " << j.floor << endl;

}

//模板
//模板的重载
//模板的显示具体化，优先选择job