#include<iostream>
using namespace std;
int main()
{
	 double each = 0.8,sum=0,ave;
	int day = 1;
	
	for (int i = 2; i <= 100; i = i * 2)
	{
		sum =sum+ each * i;
		ave = sum / day;
		day++;
	}
	
	cout << "ÿ��ƽ������" << ave<<endl;
	system("pause");
	return 0;
}