﻿#include <iostream>

using namespace std;

int f(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return f(n - 1) + f(n - 2);
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите n" << endl;
    int n;
    cin >> n;
    cout << f(n) << endl;
}