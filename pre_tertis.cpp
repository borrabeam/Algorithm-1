#include <iostream>

using namespace std;

int main()
{
    int board[] = {0,0,0,0,0,0,0,0,0,0};
    int n;
    int location;
    int total = 0;
    
    string alpha;

    
    
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> alpha >> location;
        location--;
        
        int max_height = 0;

        if (alpha == "i")
            board[location] += 4;
        

        else if (alpha == "o"){
            if(board[location + 1] > board[location])
                max_height = board[location + 1];
            
            else 
                max_height = board[location];
            
            board[location] = max_height + 2;
            board[location + 1] = max_height + 2;
        }

        else if (alpha == "-"){
            for(int j = 0; j < 4;j++){
                if (board[location + j] < max_height)
                    max_height = max_height;
                else
                    max_height = board[location + j];
                
                
                
            }

            for(int j = 0; j < 4;j++){
                board[location + j] = max_height + 1;
            }
        }

        
    }
    
    for(int i = 0; i < 10; i++){
        if (board[i] > total)
            total = board[i];
    }
    cout << total << endl;
}
