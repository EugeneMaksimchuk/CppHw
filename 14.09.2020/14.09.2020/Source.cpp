#include <iostream>
#include <cmath>
using namespace std;
void Dd(int* pa, int* pb, int* pc, int* pD)
{
	*pD = (*pb * *pb) - 4 * *pa * *pc;
	cout << "D=" << *pD << endl;
}
void Equation(int* pa, int* pb, int* pc, int *px1, int *px2, int *pD)
{
	
	
	cout << "Equation -> " << *pa << "x^2+" << *pb << "x+" << *pc << "=0" << endl;
	if (*pD > 0)
	{
		*px1 = *pb * (-1) + sqrt(*pD);
		cout << "x1=" << *px1 << endl;
		*px2 = *pb * (-1) - sqrt(*pD);
		cout << "x2=" << *px2;
	}
	else if (*pD == 0)
	{
		*px1 = *pb* (-1) + sqrt((*pb * *pb) - 4 * *pa * *pc);
		cout << "x1/2=" << *px1;
	}
	else if (*pD < 0)
	{
		cout << "mistake" << endl;
	}
	else
		cout << "error" << endl;
}
void main()
{
	int a = 0, b = 0, c = 0;
	int x1 = 0, x2 = 0;
	int* px1 = &x1;
	int* px2 = &x2;
	int D = 0;
	int* pa=&a, *pb=&b, *pc=&c, *pD=&D;
	cout << "Enter \"a\" -> ";
	cin >> a;
	cout << "Enter \"b\" -> ";
	cin >> b;
	cout << "Enter \"c\" -> ";
	cin >> c;
	Dd(pa, pb, pc, pD);
	Equation(pa,pb,pc, px1, px2, pD);
}