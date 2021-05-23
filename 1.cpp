/******************************************************************************

    Напишіть метод, що знаходить максимальне та мінімальне з 10 чисел

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{   setlocale(0,"");
    int mas[10];
    cout << "Введите 10 чисел, максимальное и минимальное из которых надо найти" << endl;
    for (int i=0; i<10;i++) cin >> mas[i];
    int min=mas[0];
    int max=mas[0];
    for (int i=0; i<10;++i){
      if(mas[i]>max) max=mas[i];
      if(mas[i]<max) min=mas[i];
    }
    

    cout << "min = " << min << endl << "max = " << max;
    return 0;
}

