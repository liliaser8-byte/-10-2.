#include <iostream>
#include <cmath>    // для log() і pow()
#include <windows.h>
using namespace std;

// Функція для обчислення суми
double calculateSum(double x) {
    double sum = 0.0;
    for (int k = 1; k <= 7; k++) {
        double numerator = pow(log(3 * x), k);   // (ln(3x))^k
        double denominator = pow(2 + x, k);      // (2 + x)^k
        sum += numerator / denominator;          // додавання до суми
    }
    return sum;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    // Перевірка на коректність значення (x > 0, бо log(3x) визначений лише при x>0)
    if (x <= 0) {
        cout << "Помилка: x має бути більше 0!" << endl;
        return 1;
    }

    double result = calculateSum(x);
    cout << "Результат обчислення суми: " << result << endl;

    return 0;
}