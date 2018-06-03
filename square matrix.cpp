#include <iostream>
#include <ctime>
using namespace std;


const int row=3;
const int col=3;


void fillMatrix(int newMatrix[row][col]);
void printMatrix(const int matrix[row][col]);
int  countMainDiagonal(const int matrixSquare [row][col]);
int countRodDiagonal(const int matrixSquare [row][col]);
bool checkSumMainRod(const int matrixsquare1[row][col],const int matrixsquare2[row][col]);

int main()
{
	srand(time(NULL));
	int arr[row][col];
	fillMatrix(arr);
	printMatrix(arr);
	cout<<"main:"<<countMainDiagonal(arr)<<endl;
	cout<<"rod:"<<countRodDiagonal(arr)<<endl;
	int arr2[row][col];
	fillMatrix(arr2);
	printMatrix(arr2);
	cout<<"main:"<<countMainDiagonal(arr2)<<endl;
	cout<<"rod:"<<countRodDiagonal(arr2)<<endl;
	cout<<checkSumMainRod(arr,arr2)<<endl;
}


void fillMatrix(int newMatrix[row][col])
{
	for(int i=0;i<row;++i)
	{
		for(int j=0;j<col;++j)
		{
			newMatrix[i][j]=1+rand()%10;
		}
	}
}


void printMatrix(const int matrix[row][col])
{
	for(int i=0;i<row;++i)
	{
		for(int j=0;j<col;++j)
		{
			
			cout<<matrix[i][j]<<'\t';
			
		}
		cout<<"\n";	
	}
}


int countMainDiagonal(const int matrixSquare[row][col])
{
	int count =0;
	for(int i=0;i<row;++i)
	{
		count+=matrixSquare[i][i];
	}


	return count;
}
int countRodDiagonal(const int matrixSquare[row][col])
{
	int count=1;
	for(int i=0;i<row;++i)
	{
		count*=matrixSquare[i][row-1-i];
	}
	return count;
}
bool checkSumMainRod(const int matrixsquare1[row][col],const int matrixsquare2[row][col])
{

	int firstmatrix= countMainDiagonal(matrixsquare1)+countRodDiagonal(matrixsquare1);
	cout<<"firstmatix"<<firstmatrix<<endl;
	int secondmatrix= countMainDiagonal(matrixsquare2)+countRodDiagonal(matrixsquare2);
	cout<<"secondmatrix"<<secondmatrix<<endl;
	if(firstmatrix > secondmatrix)
	return true;
	return false;
}
