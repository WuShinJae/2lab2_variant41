#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Integer9 - визначення першої цифри (сотень) тризначного числа
    cout << "Integer9." << endl;
    int A, hundredsDigit;
    cout << "Enter three-digit number A = ";
    cin >> A;
    hundredsDigit = A / 100; // одна операція цілочисельного ділення
    cout << "First digit (hundreds) = " << hundredsDigit << endl;

    // Boolean40 - чи може кінь за один хід перейти з поля (x1,y1) на (x2,y2)
    cout << "\nBoolean40." << endl;
    int x1, y1, x2, y2;
    cout << "Enter x1 y1 x2 y2 = ";
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    bool knightMove = (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
    cout << "Knight can move in one move: " << boolalpha << knightMove << endl;

    // Math19 - обчислення математичного виразу
    cout << "\nMath19." << endl;
    const double pi = 3.141592;
    double x, num, denom, y;
    cout << "Real argument x = ";
    cin >> x;
    num = 2 * pi * pow(sin(pi + 2 * x), 2) * cbrt(fabs(3 * x - 5 * exp(2 * x)));
    denom = pow(3, x) * log(sin(17 * pi / 180));
    y = num / denom;
    cout << "Function y = " << y << endl;

    return 0;
}
