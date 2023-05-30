#pragma once
#include<iostream>
#include<string>
using namespace std;
class experiment
{
protected:
	string range;
	string device;
	string limitation;
	string process;
	string set;
	string content;
public:
	//构造函数
	experiment()
	{

	}
	experiment(string r, string d, string l, string p, string s, string c)
	{
		range = r;
		device = d;
		limitation = l;
		process = p;
		set = s;
		content = c;

	}
	 void show(const char*dev)
	{
		cout << content << endl;
		cout << "适用范围：" << endl;
		cout << range << endl;
		cout << endl;
		cout << endl;
		cout << "设备：" << endl;
		cout << device << endl;
		cout << endl;
		cout << endl;
		cout << "配置：" << endl;
		cout << set << endl;
		cout << endl;
		cout << endl;
		cout << "步骤:" << endl;
		cout << process << endl;
		cout << content << endl;
	}
	virtual void getdevice(const char*dev)
	{

	}
	virtual void function()
	{

	}
	virtual void get_standard_statastic()//数据存储
	{

	}
	virtual void statistic_analyze()//数据分析
	{
		
	}
	virtual void data_simulation()//数据模拟
	{

	}
	virtual void show_standard_data()//展示标准数据
	{

	}
};

