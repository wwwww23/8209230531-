#include <iostream>
#include<cctype>
#include<stdio.h>
using namespace std;
int main(void)
{
	
	int le = 0, num = 0, b = 0, e = 0;
	char ch;
	cout << "������һ���ַ���\n";
	cin >> ch;
	while((ch = getchar()) != '\n')
	{
		if (ch <= 'z' && ch >= 'a')
			le++;
		else if	(ch <= 'Z' && ch >= 'A')
			
			le++;

		else if (ch >= '0' && ch <= '9')
			num++;
		else if (ch == ' ')
			b++;
		else e++;
	}
	cout << "��ĸ����" << le << "��������" << num << "�ո�����" << b << "�����ַ�����" << e << endl;
	system("pause");
	return 0;
}