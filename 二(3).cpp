#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "�����������ε������߳���"<<endl;
	cin >> a >> b >> c;
	if (a + b < c || a + c < b || b + c < a)
		cout << "�������߲�Ϊ�����Ρ�" << endl;
	else
	{
		int sum = a + b + c;
		cout << "�������ܳ�Ϊ��" << sum << endl;
		if (a == b || b == c || a == c)
			cout << "��������Ϊ���������Ρ�" << endl;
		else
			cout << "�������β�Ϊ���������Ρ�" << endl;
	}
	system("pause");
	return 0;
}
