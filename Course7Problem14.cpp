
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

bool IsMatriceScalar(short Arr1[3][3], short Rows, short Cols)
{
	short FirstElement = Arr1[0][0];

	for (short i = 0 ; i < Rows ; i++)
	{

		for (short j = 0 ; j < Cols ; j++)
		{
			
			if (i == j && Arr1[i][j] != FirstElement)
			{
				return false;
			}

			if (i != j && Arr1[i][j] != 0)
			{
				return false;
			}

		}

	}

	return true;
	
}


int main()
{

	srand((unsigned)time(NULL));

	short Arr1[3][3] = { {10,0,0} , {0,10,0} , {0,0,10} };

	cout << "\n 3x3 matrix:\n";
	PrintMatrix(Arr1 , 3 , 3);

	if (IsMatriceScalar(Arr1 , 3 , 3))
	{
		cout << "\n Yes: Matrix is scalar!\n";
	}
	else
	{
		cout << "\n No: Matrix is not scalar!\n";
	}

	return 0;
}