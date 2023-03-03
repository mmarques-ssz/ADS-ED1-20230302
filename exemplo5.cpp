#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int *v;
	int *backup_v;
	
	v = (int*)malloc(10 * sizeof(int));
	backup_v = v;
	
	// Populando a estrutura
	for(int i=0; i<10; ++i)
	{
		v[i] = i+1;
	}
	
	// Percorrendo e mostrando os valores da estrutrura 
	// (como em um Array 
	for(int i=0; i<10; ++i)
	{
		cout << i+1 << "º elemento: " << v[i] << endl;
	}
	cout << "-------------------------------" << endl;
	
	for(int i=0; i<10; ++i)
	{
		cout << i+1 << "º elemento: " << v[i] << endl;
	}
	cout << "-------------------------------" << endl;	
	
	for(int i=0; i<10; ++i)
	{
		cout << i+1 << "º elemento: " << *v << endl;
		v++;
	}
	cout << "-------------------------------" << endl;
	
	v = backup_v;
	for(int i=0; i<10; ++i)
	{
		cout << i+1 << "º elemento: " << *v << endl;
		v++;
	}
    cout << "-------------------------------" << endl;
    
    free(v);
	
	return 0;
}