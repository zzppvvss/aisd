/******************************************************************************
Реалзізувати сортування «перемешиванием»
*******************************************************************************/

#include <iostream>
using namespace std;
void swap(int* arr, int i) {
    int temp = arr[i];
    arr[i] = arr[i-1];
    arr[i-1] = temp;
}
void sort(int* mas, int start, int n)
{
    int left, right;
    left = start;
    right = n - 1;
    while (left <= right)
    {
        for (int i = right; i >= left; i--) {
            if (mas[i - 1] > mas[i]) swap(mas, i);
        }  
        left++;
        for (int i = left; i <= right; i++)
            if (mas[i - 1] > mas[i]) swap(mas, i);
        right--;
    }
}

int main() {
    const int r = 10;
    int mas[r];
    cout << "Введите массив чисел из " << r << " чисел" << endl;
    for (int i = 0; i < r; i++) {
        cin >> mas[i];
    }
    sort(mas,1,r);
    cout << "Вот что вышло:" << endl;
    for (int i = 0; i < r; i++) {
        cout << mas[i] << " ";
    }
    return 0;
}

