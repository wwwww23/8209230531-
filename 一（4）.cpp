#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;

	cout << "output in short type:" << static_cast<short>(testUnint) << endl;

	cout << "output in int type:" << static_cast<int> (testUnint) << endl;

	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in oct unsigned int type:" << oct << testUnint << endl;
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;





	system("pause");
	return 0;





}