#include"Stock.h"
#include<iostream>


Stock::Stock()//默认构造函数
{
	std::cout << "Calling Default Constructor." << std::endl;
	company_ = "No Name";
	shares_ = 0;
	share_val_ = 0.0;
	total_val_ = 0.0;
}
Stock::Stock(const std::string& company, long shares, double share_val)//为了防止混淆，定义class时，成员名为company_
{
	std::cout << "Constructor using " << company << " called" << std::endl;
	company_ = company;
	if (shares < 0)
	{
		std::cout << "Num of shares can't be Negative" << std::endl
			<< company << " shares will be set to 0!" << std::endl;
		shares = 0;
	}
	else {shares_ = shares;}
	share_val_ = share_val;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "Bye," << company_ << std::endl;
}


void  Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Num of shares can't be Negative" << std::endl
			<< "Aborted!" << std::endl;
	}
	else
	{
		shares_ += num;
		share_val_ = price;
		set_tot();
	}
}

void  Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Num of shares can't be Negative" << std::endl
			<< "Aborted!" << std::endl;
	}
	else
	{
		shares_ -= num;
		share_val_ = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val_ = price;
	set_tot();
}

void Stock::show() const
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(3);
	std::cout << "Company: " << company_ << std::endl
		<< "Shares: " << shares_ << std::endl
		<< "Share Price: " << share_val_ << std::endl
		<< "Total Value: " << total_val_ << std::endl;
}

const Stock& Stock::topval(const Stock& s) const//返回Stock的引用，返回的是 Stock类的别名
{
	if (s.total_val_ > total_val_)
	{
		return s;
	}
	else
		return *this;//this为指针，*解除引用

}
