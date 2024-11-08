
#include <iostream>
#include <cmath>
#define pi 3.14159265
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, d;
	// Введение всех необходимых данных
	cout << "Введите длину меньшего основания" << endl;
	cin >> a;
	cout << "Введите длину большего основания" << endl;
	cin >> b;
	cout << "Введите длину первой боковой стороны" << endl;
	cin >> c;
	cout << "Введите длину второй боковой стороны" << endl;
	cin >> d;
	double alpha;
	cout << "Введите угол при основании" << endl;
	cin >> alpha;
	if (alpha <= 0 || alpha >= 180) {
		cout << "ERROR" << endl;
		return 0;
	}
	// Нахождение периметра. Формула: P = a + b + c + d --- сумма всех сторон
	int perimetr = a + b + c + d;
	// Нахождение высоты трапеции (высота нужна в формуле площади). Формула: h = sin(alpha) * a. Где a - боковая сторона трапеции, к которой прилежит угол
	int high = sin(alpha * pi / 180) * c;
	// Нахождение площади трапеции. Формула: S = 0.5 (a + b) * h --- полусумма оснований на высоту
	float ploshad = 0.5 * (a + b) * high;
	// Нахождение средней линии трапеции. Формула: m = 0.5 * (a + b) --- полусумма оснований
	float sred = 0.5 * (a + b);
	// Вывод найденных значений
	cout << "Периметр трапеции = " << perimetr << endl;
	cout << "Площадь трапеции = " << ploshad << endl;
	cout <<"Средняя линия трапеции = " << sred << endl;
}

