#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	cout << "�����뻪�϶ȣ�" << endl;
	cin >> i;
	double k = (i - 32) / 1.8;
	double j = k;
	cout << "ת��Ϊ���϶�Ϊ��" <<setprecision(4)<<j<< endl;
	system("pause");
	return 0;
}
