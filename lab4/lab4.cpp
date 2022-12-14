#include <iostream> //Таблиця множення
using namespace std;
int main()
{
    cout << "Multiplication table"<< endl;
    const int n = 9;
    int m[n][n];
    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < n; j++)
            {
            m[i][j] = (i + 1) * (j + 1);
            cout << m[i][j] << "\t";
            }
        cout << endl;
        }
}
