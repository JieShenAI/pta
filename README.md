# pta
程序设计
//1.输出2位前面补0
	printf("%02d:%02d:%02d\n",h2,m2,count2);
//2.sscanf,过滤特定字符串
	sscanf(str.c_str(),"%d:%d:%d %d:%d:%d (+%d)",&h1,&m1,&s1,&h2,&m2,&s2,&day);
//1,2参考例子 蓝桥航班时间

//3.string转int
////函数c_str()就是将C++的string转化为C的字符串数组，c_str()生成一个const char *指针，指向字符串的首地址。
	string s = "123";
	sscanf(s.c_str(),"%d",&count);//刷oj常用

//4.int转字符串
	int a = 123456;
	char buf[100];
    sprintf(buf,"%d",a);
	[注]：进制转换，或格式输出参考c-_learning\%d%o%x%e%f.txt
//5.万能头文件
	#include <bits/stdc++.h>
