#include "ruzaevaas.h"

/**
 * Введение в дисциплину
 */
void ruzaevaas::lab1()
{
  cout << "hello world!" << endl;
}


/**
 * Метод Гаусса с выбором главного элемента
 */
void ruzaevaas::lab2()
{
	double maxi;
	int k, u;
	double eps=0.000001;

 k=0;
	while (k<N)
	{
 maxi=abs(A[k][k]);
 u=k;
		for (int i=k+1;i<N;i++) {
			if (abs(A[i][k])>maxi) {
 maxi=abs(A[i][k]);
 u=i;
			}
		}

		for (int j=0;j<N;j++) {
			swap(A[k][j], A[u][j]);
		}

		swap(b[k], b[u]);
		for (int i=k;i<N;i++) {
			double c=A[i][k];
			if (abs(c)<eps) continue;
			for (int j=0;j<N;j++) {
 A[i][j]=A[i][j]/c;
			}

 b[i]=b[i]/c;
			if (i==k) continue;
			for (int j=0;j<N;j++) {
				A[i][j]=A[i][j]-A[k][j];
			}

			b[i]=b[i]-b[k];
		}

		k++;
	}

	for (k=N-1;k>=0;k--) {
		x[k]=b[k];
		for (int i=k-1; i>=0;i--) {
			double c= A[i][k];
			for (int j=0;j<N; j++) { 
				A[i][j]=A[k][j]*c+A[i][j]; 
			}
			b[i]=-b[k]*c+b[i];
		}
	}
}



/**
 * Метод прогонки
 */
void ruzaevaas::lab3()
{

}



/**
 * Метод Холецкого
 */
void ruzaevaas::lab4()
{

}



/**
 * Метод Якоби или Зейделя
 */
void ruzaevaas::lab5()
{

}



/**
 * Метод минимальных невязок
 */
void ruzaevaas::lab6()
{

}



/**
 * Метод сопряженных градиентов
 */
void ruzaevaas::lab7()
{

}


void ruzaevaas::lab8()
{

}


void ruzaevaas::lab9()
{

}


std::string ruzaevaas::get_name()
{
  return "Ruzaeva A.S.";
}
