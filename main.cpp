#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    int col;
    cout << "Enter size of square Matrix A: ";
    cin >> col;
    double mat[col][col];
    cout << "\nEnter values into matrix (from left to right)\n";
    for (int i = 0 ; i < col ; i++)
        for (int j = 0 ; j < col ; j++)
            cin >> mat[i][j];
    //print
    cout << "\nMatrix A: " <<endl;
    for (int i = 0 ; i < col ; i++)
    {
        for (int j = 0 ; j< col ; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }
    int large = 2*col;

    double work[col][large];
    for (int i = 0 ; i < col ; i++)
        for (int j = 0 ; j < col ; j++)
            work[i][j] = mat[i][j];

    for (int i = 0 ; i < col ; i++)
        for (int j = col ; j < large ; j++)
        {
            if (j == i+col)
                work[i][j] = 1;
            else
                work[i][j] = 0;
        }

    //finding inverse
    double n = 0;
    for (int k = 0 ; k < col ; k++)
    {
        for (int i = 0 ; i < col ; i++)
        {
            if (i != k)
            {
                for (int j = k ; j < large ; j++)
                {
                    if (j == k)
                        n = work[k][k];
                    work[k][j] /= n;
                    work[k][j] *= work[i][k];
                }
                for (int j = k ; j < large ; j++)
                {
                    work[i][j] -= work[k][j];
                    if (j == k)
                        n = work[k][k];
                    work[k][j] /= n;
                }
            }
        }
    }
    //finding inverse

    double inverse[col][col];
    int mm = col;
    for (int i = 0 ; i < col ; i++)
    {
        mm = col;
        for (int j = 0 ; j < col ; j++)
        {
            inverse[i][j] = work[i][mm];
            mm++;
        }
    }

    //print
    cout << "\nInverse of Matrix A: " <<endl;
    for (int i = 0 ; i < col ; i++)
    {
        for (int j = 0 ; j< col ; j++)
            cout << setw(15) << inverse[i][j];
        cout << endl;
    }

    getch();
    return 0;
}

