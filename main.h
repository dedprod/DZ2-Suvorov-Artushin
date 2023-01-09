//
// Created by macbook pro on 07.01.2023.
//

#ifndef DZ2_MAIN_H
#define DZ2_MAIN_H

#endif //DZ2_MAIN_H

template<typename T>
void s(T *a, T *b) {
    T *t = new T;
    *t = *a;
    *a = *b;
    *b = *t;
}
template<typename T>
void calc(T arr, int length) {
    int firstnull = -1;
    int secondnull = -1;
    int sum = 0;
    for (int i = length - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            firstnull = i;
        }
    }
    for (int g = firstnull + 1; g < length; g++) {
        if (arr[g] == 0) {
            secondnull = g;
        }
    }
    for (int z = firstnull; z < secondnull; z++) {
        sum = sum + arr[z];
    }
    std::cout << sum;
}
void bubblesort(int arr[], int num);
void bubblesortrev(int arr[], int num);
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();
void task11();
void task12();
void task13();
