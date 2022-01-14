
#include <iostream>
using namespace std;


int main()
{
    int n;
    int a;
    int x[10000];
    int ans = 0;

    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> x[i];
    }

    for (int j=0;j<n;j++){
        a = x[j];
        ans += a;
        if (j == 3){
            ans += a;
        }
        else if (j%4 == 3){
            ans += a;
        }
    }
    cout <<  ans << endl;

}
