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
	//���캯��
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
		cout << "���÷�Χ��" << endl;
		cout << range << endl;
		cout << endl;
		cout << endl;
		cout << "�豸��" << endl;
		cout << device << endl;
		cout << endl;
		cout << endl;
		cout << "���ã�" << endl;
		cout << set << endl;
		cout << endl;
		cout << endl;
		cout << "����:" << endl;
		cout << process << endl;
		cout << content << endl;
	}
	virtual void getdevice(const char*dev)
	{

	}
	virtual void function()
	{

	}
	virtual void get_standard_statastic()//���ݴ洢
	{

	}
	virtual void statistic_analyze()//���ݷ���
	{
		
	}
	virtual void data_simulation()//����ģ��
	{

	}
	virtual void show_standard_data()//չʾ��׼����
	{

	}
};

