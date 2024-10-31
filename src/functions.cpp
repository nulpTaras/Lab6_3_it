//
// Created by Taras Neridnyi on 31.10.2024.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


void create(int* &a, const int size, const int Low, const int High)
{
    a = new int[size];
    for (int i=0; i<size; i++)
        a[i] = Low + rand() % (High-Low+1);
}

void print(int* a, const int size) {
    for (int i=0; i<size; i++)
        cout << setw(4) << a[i] << " ";
}

int findSum(int* a, const int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum += pow(a[i],2);
    }
    return sum;
}
