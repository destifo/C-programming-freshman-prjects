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

	for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << "Enter the elements of the matrix X"<< i+1 << j+1 << endl;
				cin >> x[i][j];
			}
		}

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << "Enter the elements of the matrix Y"<< i+1 << j+1 << endl;
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
		cout<< "The sum of the two matrices is: "<<endl;
		for (int i = 0; i<r; i++)
        {
            for (int j = 0; j<c;j++)
            {
                cout<< "    " <<sum[i][j]<< " ";
                if (j==c-1)
                {
                    cout<<endl;
                }
            }
        }
        return 0;
}
