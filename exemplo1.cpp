#include <iostream>
using namespace std;

// Passagem de parâmetro por valor
void qualquer(int p1, int p2)
{
	p1++;
	p2++;
	cout << "p1 = " << p1 << " e p2 = " << p2 << endl;
}

int main(int argc, char** argv)
{
	int x;
	int y;
	
	x = 10;
	y = 20;
	
	cout << "x = " << x << " e y = " << y << endl;
	
	qualquer(x, y);
	
	cout << "x = " << x << " e y = " << y << endl;
	
	return 0;
}
