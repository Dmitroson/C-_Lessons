#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	double a;
	double b;
	double c;
	double p, S;
	
	cin >> a >> b >> c;
	
	p = (a + b + c) / 2;
	
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	
	cout << "Площадь треугольника: " << S;
	return 0;
}
