#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char endr;
	int r, c, n, x[50][50], y[50][50];
	cout << "Enter the no of rows: " <<endl;
	cin >> r;
	cout << "Enter the no of columns: " << endl;
	cin >> c;

	for (int i = 1; i < r; i++)
		{
			for (int j = 1; j < c; j++)
			{
				cout << "Enter the elements of the matrix x"<< i++ << j++ << endl;
				cin >> x[i][j];
			}
		}

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << "Enter the elements of the matrix y"<< i++ << j++ << endl;
				cin >> y[i][j];
			}
		}

		int sum[50][50];
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j <c; j++)
			{
				sum[i][j] = x[i][j] + y[i][j];
			}
		}
		for (int i = 0; i<r; i++)
        {
            for (int j = 0; j<c;j++)
            {
                cout<<sum[i][j];
            }
        }
        return o;
}
