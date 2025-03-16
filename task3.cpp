﻿#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите n" << endl;
    int n;
    cin >> n;

    int* a = new int[n];

    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}