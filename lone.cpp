#include <stdio.h>
#include <stack>
#include <queue>
#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while(testcase--) {
        int N, S, Q;
        int i, j, k;
        queue<int> station[105];
        stack<int> carrier;
        cin >> N >> S >> Q;
        for(i = 0; i < N; i++) {
            int n, x;
            cin >> n;
            while(n--) {
                cin >> x;
                station[i].push(x-1);
            }
        }
        int carrypos = 0, ret = 0;
        while(true) {
            while(!carrier.empty() &&
                (station[carrypos].size() < Q || carrier.top() == carrypos)) {
                    if(carrier.top() != carrypos)
                        station[carrypos].push(carrier.top());
                carrier.pop();
                ret++;
            }
            while(!station[carrypos].empty() && carrier.size() < S) {
                carrier.push(station[carrypos].front());
                station[carrypos].pop();
                ret++;
            }
            int empty = carrier.empty();
            for(i = 0; i < N; i++)
                empty &= station[i].empty();
            if(empty)
                break;
            carrypos++;
            carrypos %= N;
            ret += 2;
        }
        cout << ret << endl;
    }
    return 0;
}
