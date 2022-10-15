#include<iostream>
#define rows 10
#define colms 10
using namespace std;
int N;
class Matrix
{
    int arr[rows][colms];
public:
    void display();
    void operator+(Matrix x);
    void operator-(Matrix x);
    void operator*(Matrix x);
};

void Matrix()
{
    for (int i = 0;i<N;i++)
    {
        for (int j = 0;j<N;j++)
        {
            arr[i][j] = A[i][j];
        }
    }
}
void Matrix::display()
{
    for (int i = 0;i<N; i++)
    {
        for (int j = 0; j< N;j++)
        {
            cout <<mat[i][j]<<' ';

        }
        cout << endl;
    }
}

void Matrix::operator-(Matrix x)
{
    int mat[N][N];
    for (int i = 0; i< N; i++)
    {
        for (int j = 0; j<N;j++)
        {
            mat[i][j] = arr[i][j]-x.arr[i][j];
        }
    }
    for (int i = 0; i< N; i++)
    {
        for (int j = 0;j < N; j++)
        {
            cout <<mat[i][j]<<' ';
        }
        cout <<endl;
    }
}
void Matrix::operator*(Matrix x)
{
    int mat[N][N];
    for (int i = 0; i< N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                mat[i][j] += arr[i][k]*(x.arr[k][j]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0;j < N; j++)
        {
            cout << mat[i][j]<< ' ';
        }
        cout << endl;
    }
}
int main()
{
    N = 3;
    vector<vector<int> > arr1 = { {1, 2, 3}, {4, 5, 6}, {1, 3, 5} };
    vector<vector<int> > arr2 = { {1, 2, 3}, {4, 5, 8}, {8, 6, 9} };

    Matrix mat1, mat2;
    mat1.input(arr1);
    mat2.input(arr2);

    cout << "Addition of two given Matrix is : \n";
    mat1 + mat2;
    cout << "Substraction of two given Matrix is : \n";
    mat1 - mat2;
    cout << "Multiplication of two given Matrix is : \n;
    mat1 * mat2;

    return 0;
}
