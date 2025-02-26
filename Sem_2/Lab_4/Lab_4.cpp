#include <random>
#include <iostream>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);
    
    int n, n1, n2, tmp;

    cout << "Enter N: ";
    cin >> n;

    if (n < 14)
    {
        cout << "N cannot be less than 14 !";
    }
    else
    {
        n1 = n - 1;

        int* arr = new int[n] {};
        int* arr1 = new int[n1] {};

        for (int i = 0; i < n; ++i)
        {
            arr[i] = dist(gen);
        }

        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << ' ';
        }

        cout << endl;

        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; ++i)
            {
                tmp = arr[i];
                arr[i] = arr[n - i - 1];
                arr[n - i - 1] = tmp;
            }

            n2 = n + 3;
            int* arr2 = new int[n2] {};
            for (int i = 0; i < 3; ++i)
            {
                arr2[i] = arr[i + 10] - 2;
            }
            for (int i = 3; i < n2; ++i)
            {
                arr2[i] = arr[i - 3];
            }
            for (int i = 0; i < n2; ++i)
            {
                cout << arr2[i] << ' ';
            }
            delete[]arr2;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                arr1[i] = arr[i];
            }

            for (int i = (n / 2); i < n1; i++)
            {
                arr1[i] = arr[i + 1];
            }

            for (int i = 0; i < n1 / 2; ++i)
            {
                tmp = arr1[i];
                arr1[i] = arr1[n1 - i - 1];
                arr1[n1 - i - 1] = tmp;
            }

            n2 = n1 + 3;
            int* arr2 = new int[n2] {};
            for (int i = 0; i < 3; ++i)
            {
                arr2[i] = arr1[i + 10] - 2;
            }
            for (int i = 3; i < n2; ++i)
            {
                arr2[i] = arr1[i - 3];
            }
            for (int i = 0; i < n2; ++i)
            {
                cout << arr2[i] << ' ';
            }
            delete[]arr1;
            delete[]arr2;
        }

        delete[]arr;
    }
    
	return 0;
}