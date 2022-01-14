#include <iostream>
#include <vector>
#include <algorithm>



typedef unsigned int uint;

typedef long long int64;

typedef unsigned long long uint64;



using namespace std;



int main(){

    while(true){

            int64 M, N, run, num, i, tot=0;

            cin >> N >> M;

            if(M==0 && N==0)

                break;

            vector <int> vec(N);

            for(i=0; i<N; i++){

                cin >> num;

                vec[i] = num;

            }

            for(i=0; i<M; i++){

                        cin >> num;

                        if(binary_search(vec.begin(), vec.end(), num))

                            tot++;

            }

            cout << tot << endl;

    }

    return 0;

}
