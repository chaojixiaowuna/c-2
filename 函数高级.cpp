//����Ĭ�Ϻ���
//��c++�У��������β��б��е��β��ǿ�����Ĭ��ֵ��
//�﷨������ֵ���� ������������ = Ĭ��ֵ��{}
//#include<iostream>
//using namespace std;
//int func(int a, int b, int c)
//{
//	return a + b + c;
//}
//int main()
//{
//	cout << func(10, 20, 30) << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int func(int a, int b=20, int c=30)
//{
//	return a + b + c;
//}
//int main()
//{
//	cout << func(10) << endl;
//	return 0;
//}
//��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ

//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//  ������ʵ��ֻ����һ����Ĭ�ϲ���

//����ռλ����
//C++�к������β��б��������ռλ������������ռλ�����ú���ʱ�������λ��
//�﷨������ֵ���� ���������������ͣ�{}
//void func(int a, int)
//{
//	cout << "this is a function" << endl;
//}
//int main()
//{
//	func(10,10);
//}

//��������
//������������ͬ����߸�����
//����������������
//ͬһ����������
//����������ͬ
//�����������Ͳ�ͬ ���߸�����ͬ ����˳��ͬ
//ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
//ע������ 
//1��������Ϊ���ص�����
//#include<iostream>
//using namespace std;
//void func(int& a)//10����һ���ڴ�ռ� ���Ϸ�
//{
//	cout << "����С��" << endl;
//}
//void func(const int& a)//�������Զ� int temp=10;const int &a=temp;
//{
//	cout << "��������" << endl;
//}
//int main()
//{
//	int a = 10;
//	func(10);//���õڶ���
//	func(a);//���õ�һ��
//	return 0;
//
//}
//2��������������Ĭ�ϲ���
#include<iostream>
using namespace std;
void func(int a,int b=20)
{
	cout << "chaojixiaojie" << endl;
}
void func(int a)
{
	cout << "chaojilaojie" << endl;
}
int main()
{
	func(10);//����  ��Ϊ��һ������Ҳ���Ե��� ������
	func(10, 30);//���õ�һ��
}