#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形的三条边长："<<endl;
	cin >> a >> b >> c;
	if (a + b < c || a + c < b || b + c < a)
		cout << "这三条边不为三角形。" << endl;
	else
	{
		int sum = a + b + c;
		cout << "三角形周长为：" << sum << endl;
		if (a == b || b == c || a == c)
			cout << "该三角形为等腰三角形。" << endl;
		else
			cout << "该三角形不为等腰三角形。" << endl;
	}
	system("pause");
	return 0;
}
