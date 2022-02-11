#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<vector>

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////vector容器构造
//void test01()
//{
//	vector<int>v1;//默认构造  无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//通过区间进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem构造
//	vector<int>v3(10, 100);//10个100
//	printVector(v3);
//
//	//拷贝构造  //常用
//	vector<int>v4(v3);
//	printVector(v4);
//}


//vector赋值操作
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	//赋值 operator=
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//	//assign方式赋值
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//	//n个elem方式赋值
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}

//vector容量和大小
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty())//为真代表容器为空
//		cout << "v1为空" << endl;
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1容量：" << v1.capacity() << endl;
//		cout << "v1大小：" << v1.size() << endl;
//	}
//	//重新指定大小
//	v1.resize(15,1);//利用重载版本，可指定默认填充值,参数2
//	printVector(v1);//如果重新指定的比原来长，默认0填充
//	
//	v1.resize(5);
//	printVector(v1);//如果重新指定的比原来短，超出部分自动删除
//}

//vector插入与删除
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	//尾插法
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//	//插入  第一个参数是迭代器
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//	//删除  参数也是迭代器
//	v1.erase(v1.begin());
//	printVector(v1);
//	//清空
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//}

//vector数据存取
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//利用【】访问数组元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//利用at访问数组元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	//获取第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//	cout << "最后一个元素为：" << v1.back() << endl;
//}

//vector容器互换
//1.基本使用
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前：" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//
//	cout << "交换后：" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
////2.实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小：" << v.size() << endl;
//	v.resize(3);//重新指定定大小
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小：" << v.size() << endl;
//	//resize只改变大小，不改变容量
//	//巧用swap收缩内存
//	vector<int>(v).swap(v);
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小：" << v.size() << endl;
//	//swap既改变大小，又改变容量
//}

//vector预留空间
void test01()
{
	vector<int>v;
	//利用reserve预留空间
	v.reserve(100000);
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}