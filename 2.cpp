#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	int a, b;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите числа А и B. A > B\n";
	cin >> a >> b;
	while (a > b){
		a -= b;
	}
	cout << a;
}
