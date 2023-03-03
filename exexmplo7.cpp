#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

#define COL 3
#define LIN 5

void mostra_matriz1(int **p)
{
    for(int i=0; i<LIN; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
   		    cout << setw(5) << p[i][j] << " | "; 			
		}
		cout << endl;
	}	
}

void mostra_matriz2(int **p)
{
	int *aux;
	
    for(int i=0; i<LIN; ++i)
	{
		aux = *p;
		for(int j=0; j<COL; ++j)
		{
   		    cout << setw(5) << *aux << " | "; 
            aux++;			
		}
		p++;
		cout << endl;
	}	
}


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int k;
	int **mat;
	mat = (int**)malloc(LIN * sizeof(int));
	
	for(int i=0; i<LIN; ++i)
	{
		mat[i] = (int*)malloc(COL * sizeof(int));
	}
	
	k=0;
	for(int i=0; i<LIN; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
   		    mat[i][j] = ++k; 			
		}
	}

	for(int i=0; i<LIN; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
   		    cout << setw(5) << mat[i][j] << " | "; 			
		}
		cout << endl;
	}
		
	cout << "-------------------------------" << endl;
	mostra_matriz1(mat);	
	cout << "-------------------------------" << endl;
	mostra_matriz2(mat);
	
	free(mat);	

	return 0;	
}