#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "������һ����ʽ\n";
	cin >> a;
	cin >> c;
	cin >> b;
	switch (c)
	{
	case'+':cout << a << "+" << b << "=" << a + b << endl; break;
	case'-':cout << a << "-" << b << "=" << a - b << endl; break;
	case'*':cout << a << "*" << b << "=" << a * b << endl; break;
	case'%':cout << a << "%" << b << "=" << a %b << endl; break;
	case'/':if (b == 0)cout << "����\n";
		else cout << a << "/" << b << "=" << a / b << endl; break;
	default:cout << "����\n";

	}




	system("pause");
	return 0;
}