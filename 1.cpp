#include <iostream>
#include <string>
#include <Windows.h>
#include <string.h>
using namespace std;

int main(){
	
	int a, b;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите числа A и B. A < B ";
	cin >> a >> b;
	for (int i  = a; i <= b; i++){
		for (int j = 0; j < i; j++){
			cout <<i << ' ';
		}
		cout << endl;
	}
}
