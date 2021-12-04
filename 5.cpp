#include <iostream>
#include <Windows.h>
using namespace std;

int Evc(int a, int b){
	if ( a == 0){
		return b;
	}
	else if (b == 0){
		return a;
	}
	else if ( a >= b){
		return Evc(a%b, b);
	}
	else if ( b >= a){
		return Evc(a, b%a);
	}
}

int main(){
	int a , b;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите числа A и B\n";
	cin >> a >> b;
	cout << "НОД = " << Evc(a, b);
}
