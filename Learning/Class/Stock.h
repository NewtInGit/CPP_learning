#pragma once
#ifndef STOCK_H_
#define STOCK_H_

#include<string>

class Stock
{
private:
	std::string company_;
	long shares_;
	double share_val_;
	double total_val_;
	void set_tot() { total_val_ = share_val_ * shares_; }

public:
	Stock();//默认构造函数
	Stock(const std::string& company, long shares = 0, double share_val = 0);//非默认构造函数，构造函数不需要写void，可设置默认值
	~Stock();//析构函数，用于完成清理工作
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};



#endif // !STOCK_H_
