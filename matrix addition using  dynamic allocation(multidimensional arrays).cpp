#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{

	//Declaring variables and getting input
	int r, c;
	cout << "Enter the no of rows: " << endl;
	cin >> r;
	cout << "Enter the no of columns: " << endl;
	cin >> c;
	cout<<endl;
	cout<<endl;


	//Setting the dynamic allocation of the two matrices
	int **x;
	int **y;
	x = new int* [r];
	for (int i = 0; i < r; i++)
	{
		x[i] = new int[c];
	}
	y = new int *[r];
	for (int i = 0; i < r; ++i)
	{
		y[i] = new int[c];
	}


	//Storing the elements of the 1st matrix
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter the elements of the matrix X" << i+1 << j+1<<endl;
			cin >> x[i][j];
		}
	}
	cout << endl;
	cout << endl;


	//Storing the 2nd matrix elements
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter the elements of the matrix Y" << i+1<<j+1<< endl;
			cin >> y[i][j];
		}
	}
	cout << endl;
	cout << endl;


	//Setting the dynamic allocation for the matrices sum
	int **sum;
	sum = new int* [r];
	for (int i = 0; i < r; i++)
	{
		sum[i] = new int[c];
	}



	//Calculating the sum of the two matrices
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum[i][j] = x[i][j] + y[i][j];
		}
	}


	//Displaying the sum of the two matrices
	cout << "The sum of the two matrices is: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "    " << sum[i][j] << " ";
			if (j == c - 1)
			{
				cout << endl;
			}
		}
	}
	return 0;
}

/*
Estifanos Bireda
UGR/6051/12
Section 3
*/
