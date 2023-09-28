#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 100);
		}
	}
}

void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
			//printf("  %d ", arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}

bool returnNumberInMatrix(int arr[3][3], int Rows, int Colos, int num)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if (arr[i][x] == num)
				return 1;
		}
	}
	return 0;
}

void IntersectedNumbersInTwoMatrix(int arr1[3][3], int arr2[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if(returnNumberInMatrix(arr2, Rows, Colos, arr1[i][x]))
				cout<< arr1[i][x] <<" ";
		}
	}

}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[3][3], arr2[3][3];

	//int arr[3][3] = { {2,0,0},{0, 2, 0},{0, 0, 2} };
	fill3X3MatrixWithRandomNumbers(arr1, 3, 3);

	cout << "  The Matrix1: \n";
	printMatrix3X3(arr1, 3, 3);

	cout << "  The Matrix2: \n";
	fill3X3MatrixWithRandomNumbers(arr2, 3, 3);
	printMatrix3X3(arr2, 3, 3);

	
	IntersectedNumbersInTwoMatrix(arr1, arr2, 3, 3);





	return 0;
}



