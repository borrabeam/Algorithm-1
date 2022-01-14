#include <iostream>
using namespace std;

bool check_prime(int p)
{
    if (p <= 1) {
    return false;
    }
    for (int i = 2; i < p; i++) 
        if (p % i == 0) 
            return false; 
  
    return true; 
}

int main()
{
    int n;
    int k;
    int count=0;
    
    cin >> n;
    
    for (int i=1;i<=n;i++)
    {
       if (n%i == 0 and check_prime(i)){
           count++;
       }
    
    }

    cout << count << endl;
}