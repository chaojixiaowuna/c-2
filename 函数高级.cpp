//函数默认函数
//在c++中，函数的形参列表中的形参是可以有默认值的
//语法：返回值类型 函数名（参数 = 默认值）{}
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
//如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值

//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//2、如果函数声明有默认参数，函数实现就不能有默认参数
//  声明和实现只能有一个有默认参数

//函数占位参数
//C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法：返回值类型 函数名（数据类型）{}
//void func(int a, int)
//{
//	cout << "this is a function" << endl;
//}
//int main()
//{
//	func(10,10);
//}

//函数重载
//函数名可以相同，提高复用性
//函数重载满足条件
//同一个作用域下
//函数名称相同
//函数参数类型不同 或者个数不同 或者顺序不同
//注意：函数的返回值不可以作为函数重载的条件
//注意事项 
//1、引用作为重载的条件
//#include<iostream>
//using namespace std;
//void func(int& a)//10不是一个内存空间 不合法
//{
//	cout << "超级小桀" << endl;
//}
//void func(const int& a)//编译器自动 int temp=10;const int &a=temp;
//{
//	cout << "超级老桀" << endl;
//}
//int main()
//{
//	int a = 10;
//	func(10);//调用第二个
//	func(a);//调用第一个
//	return 0;
//
//}
//2、函数重载碰到默认参数
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
	func(10);//报错  因为第一个函数也可以调用 二义性
	func(10, 30);//调用第一个
}