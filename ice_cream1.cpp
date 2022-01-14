#include <iostream>
using namespace std;


int main(){
    
    int n;
    int num;
    int queue[100];
    int out[100];
    int index = 0;
    int out_index = 0;
    int ans = 0;
    int a;

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> num;
        if (num == 1){
            cin >> a;
            for (int j=0;j<a;j++){
                cin >> queue[index];
                index++;
            }
            
        }
        else if (num == 2){
            if(queue[out_index] != 0 ) {
                 out[out_index] = queue[out_index];
                 out_index++;
            }
        
        }
    }

    ans = index - out_index;

    for (int j = 0; j < out_index;j++){
        cout << out[j] << endl;
    }
    cout << ans << endl;
}