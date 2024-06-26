﻿// trapetion.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
