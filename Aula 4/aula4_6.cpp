#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2 = 50, n3, x = 3, y = 4, i = 5;

    x += 3; // é igual a x = x + 3 e tem valor x + 3

    x *= y + 1; // é igual a x = x * (y + 1) e tem valor x * (y + 1)

    x *= y++; // é igual a x = x * (y++) e tem valor x * (y++)

    y = i++; // é igual a y = i, i = i + 1; e tem valor i

    y = ++i; // é igual a i = i + 1, y = i; e tem valor i + 1

    cout << "Entre com um numero inteiro (n1): ";
    cin >> n1;
    n1 += n1 * 10;
    n2 = n1 / 5;
    n3 = n2 % 5 * 7;
    n2 *= n3-- % 4;
    cout << n2 << " " << n3 << " " << (n2 != n3 + 21) << endl;

    return 0;

}