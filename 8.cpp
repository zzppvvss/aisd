/******************************************************************************

   Обчислити площу трикутника заданого координатами своїх вершин.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{   setlocale(0,"");
    float a,b,c,S,p,a1,a2,b1,b2,c1,c2;
    cout << "Введите координаты вершины А" << endl;
    cin >> a1 >> a2;
    cout << "Введите координаты вершины B" << endl;
    cin >> b1 >> b2;
     cout << "Введите координаты вершины C" << endl;
    cin >> c1 >> c2;
    int ABx=b1-a1,ABy=b2-a2,BCx=c1-b1,BCy=c2-b2,CAx=a1-c1,CAy=a2-c2;
    a=sqrt(ABx*ABx+ABy*ABy);
    b=sqrt(BCx*BCx+BCy*BCy);
    c=sqrt(CAx*CAx+CAy*CAy);
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "S = " << S << " (см^2)";
    return 0;
}
