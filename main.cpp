/*Щигарцова Татьяна группа БВ215

Задание 3. Написать функции, которые получают указатель
на статический массив и его размер. Функция распределяет положительные, отрицательные и нулевые элементы
в отдельные динамические массивы.*/

#include <iostream>
using namespace std;

int* FillPositiveElements (int* source, int* size){
    int new_size = 0;
    int* temp = new int [new_size];
    for (int i = 0, j = 0; i < *size; ++i){
        if (source [i] <= 0 ) continue;
        temp [j] = source [i];
        j++;
        new_size++;
    }
    *size = new_size;
    return temp;
}
int* FillNegativeElements (int* source, int* size){
    int new_size = 0;
    int* temp = new int [new_size];
    for (int i = 0, j = 0; i < *size; ++i){
        if (source [i] >= 0 ) continue;
        temp [j] = source [i];
        j++;
        new_size++;
    }
    *size = new_size;
    return temp;
}

int* FillNullElements (int* source, int* size){
    int new_size = 0;
    int* temp = new int [new_size];
    for (int i = 0, j = 0; i < *size; ++i){
        if (source [i] != 0 ) continue;
        temp [j] = source [i];
        j++;
        new_size++;
    }
    *size = new_size;
    return temp;
}
//Функция вывода массива на экран

void PrintArray (int* arr, int size){
    cout << "{ ";
    for (int i = 0; i < size; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "}" << endl;
}

int main() {
    int size = 10;
    int* arr = new int[10] {0, -20, 30, 40, -50, 10, 0, 10, -30, 50};
    PrintArray(arr, size);

   // arr = FillPositiveElements (arr, &size);
   //  PrintArray(arr, size);

  //  arr = FillNegativeElements (arr, &size);
  //  PrintArray(arr, size);

    arr = FillNullElements (arr, &size);
    PrintArray(arr, size);

    return 0;
}
