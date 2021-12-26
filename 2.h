#include <stdio.h>


int size_info() {
    int a;
    double b;
    float c;
    char d;
    long e;
    long double i;
    long long int j;
    printf("\n %lu - размер переменной int", sizeof(a));
    printf("\n %lu - размер переменной char", sizeof(d));
    printf("\n %lu - размер типа float", sizeof(c));
    printf("\n %lu - размер переменной double", sizeof(b));
    printf("\n %lu - размер переменной long double", sizeof(i));
    printf("\n %lu - размер типа long long int", sizeof(j));
}


