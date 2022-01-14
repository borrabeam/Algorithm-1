// #include <iostream>

// using namespace std;
    

// bool check_prime(int p)
// {
// //   if (p <= 1) {
// //     return false;
// //   }
//   for (int i = 2; i < p; i++){
//         if (p % i == 0) {
//             return false;
//         } 
//     }
//     return true; 
// }


// int main(){
//     int a;
//     int b;

//     cin >> a >> b;


//     while (!check_prime(a) && !check_prime(b)) 
//     {
//         for (int i = 2; i <= a and i <= b; i++){
//             if (a%i == 0 and b%i ==0){
//                 a /= i;
//                 b /= i;
//             }
//         }

//     }
//     cout << a << '/' << b << endl;
// }


#include <iostream>
using namespace std;

bool check_prime(int n) {
  for(int i = 2 ; i < n ; i ++) {
    if(n % i == 0) {
      return false;
    }
  }
  return true;
}

int main()
{
    int a;
    int b;

    cin >> a >> b;

    
    while (!check_prime(a) && !check_prime(b))
    {
        for(int i = 2; i <= a && i <= b ; i ++) {
            if(a % i == 0 && b % i == 0) {
                a /= i;
                b /= i;
            }
        }
    }
    cout << a << "/" << b << endl;
}