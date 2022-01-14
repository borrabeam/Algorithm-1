#include <iostream>
using namespace std;


int main(){
    int a;
    int b;
    int n;
    int k;
    int x[1000];
    int own_stock = 0;
    bool own_stat = false;
    int ans = 0;

    cin >> n >> k;
    for (int i=0;i<n;i++){
        cin >> x[i];
    }
    for (int j=0;j<n-1;j++){
        a = x[j];
        b = x[j+1];

        if ((b-a) >= k and own_stat == false) {
            own_stock = b;
            own_stat = true;
        }
        else if ((a-b) >= k and own_stat == true){
            ans += b - own_stock;
            own_stock = 0;
            own_stat = false;

        }         
    }
    
    cout << ans << endl;

}