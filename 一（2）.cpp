#include<iostream>
using namespace std;
int main()
{
	const float p = 3.14;
	int i, j;
	cout << "请输入圆锥的半径：" << endl;
	cin >> i;
	cout << "圆锥的半径为：" << i << endl;
	cout << "请输入圆锥的高：" << endl;
	cin >> j;
	cout << "圆锥的高为：" << j << endl;
	float k = ( j * p * i * i)/3;
	cout << "圆锥的体积为：" << k << endl;

	system("pause");
	return 0;
}