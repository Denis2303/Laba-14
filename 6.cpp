#include <iostream>
#include <Windows.h>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	long long int n;
	cout << "Введите число Фибонначи\n";
	cin >> n;
	vector <long long int> a;
	a.push_back(0);
	a.push_back(1);
	int b = 1;
	while (a.back() < n){
		a.push_back(a[b] + a[b - 1]);
		b += 1;
	}
	if (n == 0){
		cout << 0;
	}
	else if (n == 1){
		cout << 1;
	}
	else{
	cout << b + 1;}
}
