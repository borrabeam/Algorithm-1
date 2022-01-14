#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    long int i,n,m,s;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>m;
        s=(m*567/9+7492)*235/47-498;
        s=(s%100)/10;
        s=abs(s);
        cout << s << endl;
    }

    return 0;
}