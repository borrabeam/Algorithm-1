#include <iostream>

using namespace std;
    
    
    

int main(){
    int n;
    int x[1000];
    int j = 0;
    int trucks = 0;


    cin >> n;


    for (int i=0; i<n; i++){
        cin >> x[i];
    }
    for (int a=0;a<n;a++){
        j += x[a];
        if ((j + x[a+1] )> 1000){
            trucks++;

            j = 0;
        }
    }

if (x[n] <= 1000){
    trucks++;
}

    cout << trucks << endl;
}