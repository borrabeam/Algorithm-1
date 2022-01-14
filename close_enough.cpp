#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int l;
    int z = 0;
    int x[1000];
    cin >> n >>l;

 

    for (int i=0; i<n; i++){
        cin >> x[i];
    }
    for (int i=0;i<n;i++){
        for(int a=i+1; a<n;a++){
            if(abs(x[a] - x[i]) <= l){
                z++;         
            }
            // cout << x[i] << "  " << x[a] << endl ;

        }
    }

    cout << z << endl;


}