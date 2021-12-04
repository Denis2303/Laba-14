#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	double p;
	double a = 1000;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout <<"¬ведите процент P\n";
	cin >> p;
	p = p/100 + 1;
	int x;
	while (a <= 1100){
		x += 1;
		a *= p;
	}
	cout << "„исло мес€цев = " << x << "\n»тоговый размер вклада = " << a;
}
