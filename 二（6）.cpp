#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "������������������\n";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int m = 1, n = 1, k = 2;
	while (k <= a && k <= b)
	{
		if (a % k == 0 && b % k == 0)
			m = k;
		k++;
	}
	n = (a * b) / m;
	cout << a << " " << b << "���Լ��Ϊ��"<<m<<endl;
	cout << a << " " << b << "���Լ��Ϊ��"<<n<<endl;

	
	system("pause");
	return 0;
}