
#include <iostream>
using namespace std;


int main()
{
    int n;
    int x;
    int y;
    int z;
    int ans = 0;
    int a[100];
    int b[100];
    int k;

    cin >> n >> k;
    
    for (int i=0; i<n; i++){
        cin >> a[i];
        cin >> b[i];
    }
    
    for (int j=0;j<n;j++){
        
        
        if (0<k){
            x = a[j];
            y = b[j];
            z = x - y;
            if (z<0){
                z += abs(z);
                ans += z;
            }
            else{
                ans += z;
            }
            
            
        }
        else{
            x = a[j];
            y = b[j];
            z = x - y;
            ans += z;
        }
       
        

      
    }
    
    cout << ans << endl;
    // cout << yi << endl;
    // for (int)
}
