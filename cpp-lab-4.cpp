#include <iostream>

using namespace std;

int main ()
{
    unsigned long int n, i;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "YES" << endl << n / 2 << endl; //если количество мисок кратно 4, то каждому человеку достаётся половина мисок
        for (i = 1; i < n / 4 + 1; i++)
        {
            cout << i << ", ";
        }
        for (i = 3 * n / 4 + 1; i < n + 1; i++)
        {
            if (i == n)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << ", ";
            }
        }
        cout << n / 2 << endl;
        for (i = n / 4 + 1; i < 3 * n / 4 + 1; i++)
        {
            if (i == 3 * n / 4)
            {
                cout << i;
            }
            else
            {
                cout << i << ", ";
            }
        }

    }

    else if ((n + 1) % 4 == 0)
    {
        cout << "YES" << endl;
        cout << (n + 1) / 2 << endl;
        for (i = 1; i < (n + 1) / 4 + 1; i++)
        {
            cout << i << ", ";
        }
        for (i = n - (n + 1)/ 4; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << i << endl;
            }
            else
            {
               cout << i << ", "; 
            }
        }
        cout << (n - 1) / 2  << endl;
        for (i = (n + 1) / 4 + 1; i < n - (n + 1)/ 4 ; i++)
            {
                cout << i <<", ";
            }
        cout << n << endl;
    }
    else //если на 4 не делится ни число, ни следующее за ним, то сумма нечётная, равные порции сделать нельзя
    {
        cout << "NO" << endl;
    }
    return 0;
}