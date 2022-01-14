#include <iostream>
using namespace std;

int main()
{
    int k;
    
    int n,m,x,y;


    cin >> k;
    while (k != 0){
        cin >> n >> m;
        while (k--)
        {
            cin >> x >> y;
            if (x == n or y == m)
                cout << "divisa" << endl;
            else if (x < n and y > m)
                cout << "NO" << endl;
            else if (x > n and y > m)
                cout << "NE" << endl;
            else if (x > n and y < m)
                cout << "SE" << endl;
            else if (x < n and y < m)
                cout << "SO" << endl;
        }
        cin >> k;
            
    }
    return 0;

}