#include<iostream>
#include"LIst.h"
#include"BinaryTree.h"
using namespace std;
typedef void(*VFUNC)(void);
/*
typedef void (*)()     VE;
int   arr[i]     int []*/
void PrintTable(VFUNC table[])//VFUNC * table���������涼��ָ�룬��0����
{
	cout << "���ָ��" << table << endl;
	for (size_t i = 0; table[i] != nullptr; ++i)
	{
		cout << "vatable" << i<<" ��   "<< table[i];
		VFUNC vf = table[i];
		vf();

	}
}
//��̬ʹ���麯������ʵ��
//�麯���ڱ���׶����ɣ��洢�ھ�̬�����Ƽ��ѻ����������������Ϊ�麯����
//�麯����ָ�����ڹ��캯����ʼ���б�׶γ�ʼ����

class Base1
{
public:
	virtual void func1() { cout << "����base1����1" << endl; }
	virtual void func2() { cout << "����base1����2" << endl; }
	int a;

};

class Base2
{
public:
	virtual void func1() { cout << "����base2����1" << endl; }
	virtual void func2() { cout << "����base2����2" << endl; }
	int a;

};

class Base3
{
public:
	virtual void func1() { cout << "����base3����1" << endl; }
	virtual void func2() { cout << "����base3����2" << endl; }
	int aaa;

};

class Derive : public Base2,public Base1,public Base3
{
public:
	virtual void func1() { cout << "���������ຯ��1" << endl; }
	virtual void func3() { cout << "���������ຯ��3" << endl; }
	virtual void func4(){}
	int a;
};
//
//
//class Derive2 :public Base1
//{
//public:
//	virtual void func1() { cout << "���ǵڶ��������ຯ��1" << endl; }
//};

void test_duotai(Base1 &base)
{
	base.func1();
}
void test1()
{
#if 0
	PNode phead=nullptr;
	ListInit(&phead);
	int a[6] = { 1,2,3,4,5,6 };
	for (int i = 1; i <= sizeof(a) / sizeof(a[0]); i++)
	{
		push_back(&phead, a[i - 1]);
	}
	print(phead);
	cout << "---------------------------"<<endl;
	//pop_front(&phead);
	pop_back(&phead);
	PNode pos = find(phead, 3);
	Insert(&phead, pos, 1999);
	print(phead);
	cout << "---------------------------" << endl;
	erase(&phead, find(phead, 3));
	print(phead);
	cout << "---------------------------" << endl;
#endif
	int a1[7] = { 1,5,5,4,877,-4,1888888 };

		int ssss[1000] = { 0 };
		int i;
	for (i = 1; i <= 999; ++i)
	{
		ssss[i] =i;
	}
	quick_sort2(ssss, 0, 999);
	for (int i = 0; i < sizeof(ssss)/sizeof(ssss[0]); i++)
	{
		cout << ssss[i] << endl;
	}


}
int& swap(int&a, int&b)
{
	int t = a;
	a = b;
	b = t;
	return a;

}

void test2() {
	int a = 1;
	int & ra = a;
	int b = 20;
	int& c=swap(ra, b);
	cout << a << b << endl;
	c = 3;//��ı�a��ֵ
	ra = 2;//
	a = 100;
	cout<<ra << a << c << endl;
	//��a��ra��c�ĸı䶼��ͬʱ�ı�3��ֵ


	int abb[] = {1,2,3,4,5 };
	int* ptr = (int*)(&abb + 1);
	printf(" %d %d",*(abb+1) ,*(ptr ));
}
#if 0
int main()
{
	Base1 b;
	PrintTable((VFUNC*)(*(int*)&b));//ȡ����b��ͷ�ĸ��ֽڡ���ǿתΪint* ���ٽ����ã�Ȼ��ǿתΪ������������VFUNC*  
	cout << "_________________________________________" << endl;
	Derive D;
	PrintTable((VFUNC*)(*(int*)&D));
	PrintTable
	(
		(VFUNC*)
		(*(int*)
		(
			(char*)
			&D+sizeof(Base2)
			)
			)
	); //ȡ����D��ͷ�ĸ��ֽڡ���ǿתΪint* ���ٽ����ã�Ȼ��ǿתΪ������������VFUNC*,��Ҫ����ƫ��������ȡ��

	cout << "_________________________________________" << endl;

	D.Base1::a = 1;
	D.Base2::a = 0;
	cout << D.Base1::a <<"  "<< D.Base2::a<< endl;

	D.a = 2;
	cout << D.a << endl;

	Base3 b3;
	cout <<"�������С:"<<sizeof(D)<<endl <<"�����С:"<<sizeof(b)<<sizeof(b3)<< endl;
	//D.func1();
	//D.Base1::func1();
	//
	//Base1* pb=&D;
	//pb->func1();
	//b.func1();
	//Base1* pb2 = new Derive();
	//Base1* pb3 = new Derive2();
	//
	//pb2->func1();
	//pb3->func1();
	//cout << "1111111111111111111111111" << endl;
	//test_duotai(b);
	//test_duotai(D);
	//Derive2 dd;
	//test_duotai( dd);

	//������̳��˻�������  8��base1�����ָ���һ��int  Ȼ����������2��8�����Լ���int����20
	test1();
	//ysf_test();
	//test2();
	test_tree();
 	return 0;

}
#endif
//�����һ�����飬