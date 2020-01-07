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
	Stock();//Ĭ�Ϲ��캯��
	Stock(const std::string& company, long shares = 0, double share_val = 0);//��Ĭ�Ϲ��캯�������캯������Ҫдvoid��������Ĭ��ֵ
	~Stock();//�����������������������
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};



#endif // !STOCK_H_
