// Lab 5.5 

#include <iostream>
#include <Windows.h>
using namespace std;

int gcd(int n, int m) 
{
    if (m == 0) 
        return n;
    else
        return gcd(m, n % m);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, m;
    cout << "Введіть два натуральні числа: ";
    cin >> n >> m;

    int result = gcd(n, m);
    cout << "НСД(" << n << ", " << m << ") = " << result << std::endl;

    return 0;
}

