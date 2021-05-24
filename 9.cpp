/******************************************************************************

Перерахувати всі розбиття N на цілі позитивні складові. N = 13

*******************************************************************************/

#include <iostream>
using namespace std;
int R[100];
void razb(int index, int max, int num);

int main() {
	int n;
	n = 13;
	razb(0, n, n);
}

void razb(int index, int num, int m)
{
	int i;
	if (!num)
	{
		cout << R[0];
		for (i = 1; i < index; i++) {
			cout << " " << R[i];
		}
		cout << "\n";
	}
	else
		for (i = 1; i <= min(m, num); i++) {
			R[index] = i;
			razb(index + 1, num - i, i);
		}
}
