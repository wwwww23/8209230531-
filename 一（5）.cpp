#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	cout << "请输入华氏度：" << endl;
	cin >> i;
	double k = (i - 32) / 1.8;
	double j = k;
	cout << "转化为摄氏度为：" <<setprecision(4)<<j<< endl;
	system("pause");
	return 0;
}
