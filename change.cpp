#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    int a[1000];
    int temp = a[0];
    int x;
    int y;
    int result;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[i] = x - y;
    }

    if (k == 1 or k == 2)
    {
        for (int c = 0; c < k; c++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] < temp)
                {
                    temp = a[j];
                }
            }
            if (temp < 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] == temp)
                        a[i] = 0;
                }
                temp = 0;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        // cout << a[k] << endl;
        result += a[k];
    }
    cout << result << endl;
}
