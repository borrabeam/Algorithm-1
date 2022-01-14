
#include <iostream>
using namespace std;

int sum_from_one_to_n(int n)
{
    if (n == 0) return 0;

    return (n*(n+1)) /2;
}



int main()
{
    int a,b;

    cin >> a >> b;

    cout << sum_from_one_to_n(b) - sum_from_one_to_n(a-1) << endl;


}