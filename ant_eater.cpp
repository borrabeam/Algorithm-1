
#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
    int x[10000];
    int b = 0;

    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> x[i];
    }

    for (int j=0;j<n;j++){
        a = x[j];
        if (a >=1000 ){
            b += 1000;
            j += 1;
        }
        // else if (a > 1000000){
            
        // }
        else{
            b += a;
        }
    }

    cout << b << endl;

}