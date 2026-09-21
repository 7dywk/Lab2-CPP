

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // 1. Оголошення змінних
    double alpha; // вхідний параметр (кут у радіанах)
    double z1;    // результат обчислення 1-го виразу
    double z2;    // результат обчислення 2-го виразу

    // 2. Введення даних
    cout << "Введіть значення кута alpha (у радіанах): ";
    cin >> alpha;

    // 3. Обчислення z1
    double numerator = sin(alpha) + sin(5 * alpha) - sin(3 * alpha);
    double denominator = cos(alpha) - cos(3 * alpha) + cos(5 * alpha);
    z1 = numerator / denominator;

    // 4. Обчислення z2
    z2 = tan(3 * alpha);

    // 5. Виведення результатів
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0; // кінець коду
}
// second push

