#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL , "rus");
	int a;
	cin >> a;
	if (a == 2) cout << " 28 ���� �������\n ";
	else if (a == 4) cout << "30 ���� ������\n";
	else if (a == 6) cout << "30 ���� ����\n";
	else if (a == 11) cout << "30 ���� ������\n";
	else if (a == 1) cout << "31 ���� ������\n";
	else if (a == 3) cout << "31 ���� ����\n";
	else if (a == 7) cout << "31 ���� ����\n";
	else if (a == 8) cout << "31 ���� ������\n";
	else if (a == 10) cout << "31 ���� �������\n";
	else if (a == 12) cout << "31 ���� �������\n";
	return 0;
} 
