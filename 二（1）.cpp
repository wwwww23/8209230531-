#include <iostream>
using namespace std;
int main()
{
	char ch[20];
	int i = 0;
	cout << "������һ���ַ���\n";
	cin >> ch;
	if (ch[i] >= 'a' && ch[i] <= 'z')
	{
		ch[i] -= 32;
		cout << ch[i] << endl;
	}
	else if (ch[i] >= 'A' && ch[i] <= 'Z')
	{
		ch[i] += 1;
		cout << (int)ch[i] << endl;
	}

		system("pause");
	    return 0;
}