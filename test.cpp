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
////vector��������
//void test01()
//{
//	vector<int>v1;//Ĭ�Ϲ���  �޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//ͨ��������й���
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n��elem����
//	vector<int>v3(10, 100);//10��100
//	printVector(v3);
//
//	//��������  //����
//	vector<int>v4(v3);
//	printVector(v4);
//}


//vector��ֵ����
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
//	//��ֵ operator=
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//	//assign��ʽ��ֵ
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//	//n��elem��ʽ��ֵ
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}

//vector�����ʹ�С
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
//	if (v1.empty())//Ϊ���������Ϊ��
//		cout << "v1Ϊ��" << endl;
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������" << v1.capacity() << endl;
//		cout << "v1��С��" << v1.size() << endl;
//	}
//	//����ָ����С
//	v1.resize(15,1);//�������ذ汾����ָ��Ĭ�����ֵ,����2
//	printVector(v1);//�������ָ���ı�ԭ������Ĭ��0���
//	
//	v1.resize(5);
//	printVector(v1);//�������ָ���ı�ԭ���̣����������Զ�ɾ��
//}

//vector������ɾ��
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
//	//β�巨
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//	//����  ��һ�������ǵ�����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//	//ɾ��  ����Ҳ�ǵ�����
//	v1.erase(v1.begin());
//	printVector(v1);
//	//���
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//}

//vector���ݴ�ȡ
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//���á�����������Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//����at��������Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	//��ȡ��һ��Ԫ��
//	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;
//}

//vector��������
//1.����ʹ��
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
//	cout << "����ǰ��" << endl;
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
//	cout << "������" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
////2.ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�С��" << v.size() << endl;
//	v.resize(3);//����ָ������С
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�С��" << v.size() << endl;
//	//resizeֻ�ı��С�����ı�����
//	//����swap�����ڴ�
//	vector<int>(v).swap(v);
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�С��" << v.size() << endl;
//	//swap�ȸı��С���ָı�����
//}

//vectorԤ���ռ�
void test01()
{
	vector<int>v;
	//����reserveԤ���ռ�
	v.reserve(100000);
	int num = 0;//ͳ�ƿ��ٴ���
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