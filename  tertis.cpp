#include <iostream>

using namespace std;

int main()
{
    int board[] = {0,0,0,0,0,0,0,0,0,0};
    int n;
    int location;
    int total = 0;
    char alpah;

    
    
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> alpah >> location;
        location--;
        
        int max_height = 0;

        if (type == "i")
            board[location] += 4;


        else if (alpah == "o"){
            if(board[location + 1] > board[location])
                max_height = board[location + 1];
            
            else max_height = board[location];

            board[location] = max_height + 2;
            board[location + 1] = max_height + 2;
        }

        else if (alpah == "-"){
            for(int j = 0; j < 4; j++){
                if (board[j + x] > max)
                    max_height = board[j + x];
            }

            for(int j = 0; j < 4;){
                board[j + x] = max + 1;
            }
        }

        
    }
    for(int i = 0; i < 10; i++){
        if (board[i] > total)
            total = board[i];
    }
    cout << total << endl;
}
