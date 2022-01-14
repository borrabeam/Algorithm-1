#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std;

int main(){
    list<int> quque;
    int serve[1000];
    int T;
    int n;
    int q = 0, index = 0, size = 0;
    int id;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> T;
        if(T == 1){
            cin >> q;
            for(int i=0;i<q;i++){
                cin >> id; 
                quque.push_back(id);
            }
        }
        else if(T == 2){
            // cout << "check2" << " ";
            // cout << quque.front();
            serve[index] = quque.front();
            // cout << serve[index] << " ";
            index ++;
            quque.pop_front();
            // cout << quque.size() << endl;
        }
        }
    for(int j =0;j<index;j++){
        cout << serve[j] << endl;
    }
    cout << quque.size() << endl;
    }