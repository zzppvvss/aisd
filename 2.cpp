/******************************************************************************

Задано ціле число. Виведіть його значення в текстовому вигляді 
(наприклад, одна тисяча двісті тридцять чотири).

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
void calculate(int N);
int main()
{   setlocale(0,"");
    int N;
    cout << "Введите число, текстовый вид которого необходимо вывести" << endl;
    cin >> N;
    if (N<0){
        cout << "минус ";
        N=-1*N;
        calculate(N);
       
    }
    else {
        calculate(N);
    }
  return 0;  
}

void calculate(int N){
switch (N/1000){
    case 1: cout << "одна тысяча"; break;
    case 2: cout << "две тысячи"; break;
    case 3: cout << "три тысячи"; break;
    case 4: cout << "четыре тысячи"; break;
    case 5: cout << "пять тысяч"; break;
    case 6: cout << "шесть тысяч"; break;
    case 7: cout << "семь тысяч"; break;
    case 8: cout << "восемь тысяч"; break;
    case 9: cout << "девять тысяч"; break;
    }
    switch (N/100){
    case 1: cout << " сто"; break;
    case 2: cout << " двести"; break;
    case 3: cout << " триста"; break;
    case 4: cout << " четыреста"; break;
    case 5: cout << " пятьсот"; break;
    case 6: cout << " шестьсот"; break;
    case 7: cout << " семьсот"; break;
    case 8: cout << " восемьсот"; break;
    case 9: cout << " девятьсот"; break;   
    }
    switch ((N % 100) / 10){
    case 2: cout << " двадцать"; break;
    case 3: cout << " тридцать"; break;
    case 4: cout << " сорок"; break;
    case 5: cout << " пятьдесят"; break;
    case 6: cout << " шестьдесят"; break;
    case 7: cout << " семьдесят"; break;
    case 8: cout << " восемьдесят"; break;
    case 9: cout << " девяносто"; break;
    }
    if(N % 100 < 20 & N % 100 >= 10)
    switch (N % 100 ){
    case 10: cout << " десять"; break;
    case 11: cout << " одинадцать"; break;
    case 12: cout << " двеннадцать"; break;
    case 13: cout << " тринадцать"; break;
    case 14: cout << " четырнадцать"; break;
    case 15: cout << " пятнадцать"; break;
    case 16: cout << " шестнадцать"; break;
    case 17: cout << " семнадцать"; break;
    case 18: cout << " восемнадцать"; break;
    case 19: cout << " девятнадцать"; break;   
    }
    else{
     switch (N % 10 ){
    case 1: cout << " один"; break;
    case 2: cout << " два"; break;
    case 3: cout << " три"; break;
    case 4: cout << " четыре"; break;
    case 5: cout << " пять"; break;
    case 6: cout << " шесть"; break;
    case 7: cout << " семь"; break;
    case 8: cout << " восемь"; break;
    case 9: cout << " девять"; break;
    case 0: cout << " ноль"; break;
    }    
    }
}
