#include<iostream>
using namespace std;
int main()
{
	const float p = 3.14;
	int i, j;
	cout << "������Բ׶�İ뾶��" << endl;
	cin >> i;
	cout << "Բ׶�İ뾶Ϊ��" << i << endl;
	cout << "������Բ׶�ĸߣ�" << endl;
	cin >> j;
	cout << "Բ׶�ĸ�Ϊ��" << j << endl;
	float k = ( j * p * i * i)/3;
	cout << "Բ׶�����Ϊ��" << k << endl;

	system("pause");
	return 0;
}