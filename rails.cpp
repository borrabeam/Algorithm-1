#include<iostream>
#include<stack>
 
using namespace std;
 
int N, c;
stack<int> cars;
 
void marshal() {
    for(;;) {
        while(cars.size() > 0) cars.pop();
        int j = 0;
        for(int i = 0; i < N; i++) {
            cin >> c;
            if(c == 0) return;
 
            while(j < N && j != c) {
                if(cars.size() > 0 && cars.top() == c) break;
                j++;
                cars.push(j);
            }
            if(cars.top() == c) cars.pop();
        }
        if(cars.size() == 0) 
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
 
int main() {
    for(;;) {
        cin >> N;
        if(N == 0) break;
 
        marshal();
        cout << endl;
    }
}