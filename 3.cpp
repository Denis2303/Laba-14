#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	int n;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите число N\n";
	cin >> n;
	int a, b;
	a = 0;
	b = 0;
	while (a < n){
		b += 1;
		a += b;
	}
	cout <<"K = " << b << " —умма = " << a;
}
