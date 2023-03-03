#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	//cout << time(0) << endl;
	int r1;
	int r2;
	srand(time(0));
	r1 = rand();
	cout << r1 << " - " << r1%100 << endl; // 0..32767

	for(int i=1; i<=10; ++i)
	{
   	   // rand() % (max+1 - min) + min
	   r2 = rand() % (80+1 - 50) + 50;
	   cout << r2 << " - " << endl; // 0..32767
	}	

	
	return 0;
}