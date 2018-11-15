/*
	Calcola il determinante di matrici
	
	programmato da: Carlo Zambaldo
	ultimo aggiornamento: 15.11.2018
*/

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int n,m,p,q;
	
	// Richiedo l'inserimento di n,m,p
	cout<<"Inserire le dimensioni della matrice A come richiesto."<<endl;
	cout<<"Righe della matrice A: ";
	cin>>n;
	cout<<"Colonne della matrice A: ";
	cin>>m;
	
	cout<<"Inserire le dimensioni della matrice B come richiesto."<<endl;
	cout<<"Righe della matrice B: ";
	cin>>p;
	cout<<"Colonne della matrice B: ";
	cin>>q;
	
	// Inizializzo le matrici
	int A[n][m];
	int B[m][p];
	int C[n][p];
	srand(time(NULL));
	
	// inserisco dei numeri casuali nelle matrici A e B
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			A[i][j]=rand()%5;
		}
	}
	
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			B[i][j]=rand()%5;
		}
	}
	
	// Visualizzo le due matrici
	cout<<"Visualizzo le matrici:"<<endl<<endl;
	cout<<"- matrice A:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"- matrice B:"<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	// Calcolo il determinante della matrice
	for(int i=0; i<n; i++){
		break;
	}
	
	system("PAUSE");
	return 0;
}

