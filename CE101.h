#pragma once
#define CE101_range "本项目适用于水面舰船、潜艇、陆军飞机(包括机场维护工作区)和海军飞机上的设备电源线，包括川线。这些电源线由EUT以外的外部电源供电。对陆军飞机(包括机场维护工作区)和海军飞机上使用交流电源的设备，本项目的起始频率从电源频率的二次谐波开始；对安装在海军飞机上的设备，本项目只适用ASW飞机。当订购方有规定时，本项目也适用于空间系统。当EUT的工作电流过大，50μHLISN不能满足测试要求时，可以采用附录B中的替代方法，但需订购方同意。"
#define CE101_device "测试设备如下:\n a)测量接收机；  b)电流探头；  c)信号发生器;\nd)数据记录装置；  e)示波器，高阻输入阻抗；  f)阻器；  g)LISN "
#define CE101_limitation "电源线传导发射不应超过图8～图11中的限值，其中图8适用于潜艇，图9～图10适用于水面舰船和潜艇，图11适用于海军ASW飞机、陆军飞机(包括机场维护工作区);当订购方有规定时，图11 还适用于空间系统。"
#define CE101_set "a)按4.3.9及图2～图5进行基本配置。\n\nb)  校验 按图12配置.\n\nc)  EUT测试\n1)  按图13配置;\n2)  将电流探头置于距LISN 5cm处。5.4.3.3  测试步骤"
#define CE101_process "测试时，依照如下步骤进行：\na)  测试设备通电预热并达到稳定工作状态。\n\nb)校验\n1)  分别将IkHz、3kHz和10kHz校验信号施加到电流探头，信号电平至少低于限值6dB;\n2)  用示波器和电阻器测量电流电平，同时检查电流波形是否是正弦波；\n3)测量接收机按正常数据扫描方式扫描，确认测量值在示波器电流测量值的±3dB范围之内；\n4)  如果测量值偏差超过±3dB,则要在测试之前找出误差原因并纠正。\n\nc)  EUT测试\n1) EUT通电预热并达到稳定工作状态;\n2)将电流探头卡在一根待测电源线上;\n3)  测量接收机按表2设置带宽及测量时间，在适用的频率范围内扫描；\n4)  对其他受试电源线分别重复5.4.3.3c)3);\n5)基波电流的大小可以直接采用上述电流探头在基波频率上的测量数据；直流负载电流的大小可以用带直流电流测量功能的卡钳类仪表测量。"
#define CE101_content "************************实验CE101************************"
#include<iostream>
using namespace std;
#include "experiment.h"
#include"point.h"
#include"CE101_submarineDC.h"
#include"CE101_plane1.h"
#include"CE101_shipAndSubmarine400Hz.h"
class CE101 :
	public experiment
{
protected:
	vector<point>v1;//储存标准点的数组
	vector<point>v2;//储存仿真偏大点的数组
	vector<point>v3;//储存仿真偏小点的的数组

public:
	CE101()
		:experiment(CE101_range, CE101_device, CE101_limitation, CE101_process,
			CE101_set, CE101_content)//构造函数
	{
	}
    virtual void getdevice(const char* device)
    {
        if (device == "潜艇")
        {
            cout << "请选择实验：\n1.适用于潜艇的限值（DC）\n2.适用于潜艇和舰船的限值（400HZ）" << endl;
            int num = 0;
            cin >> num;
            switch (num)
            {
            case 1:
            {
                CE101_submarineDC DC;
                DC.function();
            }
            case 2:
            {
                CE101_shipAndSubmarine400Hz Hz400;
                Hz400.function();
            }

            }
        }
        else if (device == "舰船")
        {
            CE101_shipAndSubmarine400Hz Hz400;
            Hz400.function();
        }
        else if (device == " 飞机")
        {
            CE101_plane1 Cp;
            Cp.function();
        }
    }
};

