#include <iostream>
#include <queue>
using namespace std;


int main() {

    int a;
    int n;
    int b;
    int x;
    int i;
    int j;
    int k;
    int id_x;

    cin >> a;

    while(a--) {
        cin >> n >> b;
        queue<int> Qv, Qidx;
        int inQ[10] = {};
        for(i = 0; i < n; i++) {
            cin >> x;
            Qv.push(x), Qidx.push(i);
            inQ[x]++;
        }

        int time = 0;
        while(true) {
            k = Qv.front(), Qv.pop();
            id_x = Qidx.front(), Qidx.pop();

            int canPop(1);
            for(i = k+1; i < 10; i++)
                canPop &= inQ[i] == 0;
            if(canPop) {
                time++;
                if(id_x == b) {
                    cout << time << endl;
                    break;
                }
                inQ[k]--;
            } else {
                Qv.push(k), Qidx.push(id_x);
            }
        }
    }

    return 0;

}