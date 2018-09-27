#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int n(0),m(0);
    cout << "Input N : ";
    cin >> n;
    cout << "Input M : ";
    cin >> m;
    
    int ** matrix = new int*[n];
    for(int i = 0; i < n; ++i)
        matrix[i] = new int[m];
    

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m ; ++j)
        {
           if (i == j)
               matrix[i][j] = i;
            else if (i + 1 == j)
                matrix[i][j] = 2;
            else if (i - 1 == j)
                matrix[i][j] = 10;
            else
                matrix[i][j] = 0;
        }
        
    }
    cout << "\n";
    for(int i = 0; i < n ; ++i)
    {
        for(int j = 0; j < m ; ++j)
        {
            cout << setw(4) << matrix[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    
    for(int i = 0; i < n; ++i)
    {
        delete[]matrix[i];
        //delete []matrix;
    }
    cout << endl;
    return 0;
}

