// #include <iostream>
// using namespace std;

// int main()
// {
//   int age;
//   cin >> age;
  
//   if(age <= 18) {
//     cout << "You cannot vote.\n";
//   } else {
//     cout << "You can vote.  Exercise your right!\n";
//   }
// }


// ---------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main() {
//     int score;

//     cin >> score;

//     if(score >= 80)
//         cout << "Excellent job." << endl;
//     else if ( 50 <= score and score < 80 ) 
//         cout << "Okay." << endl;
//     else 
//         cout << "Please try harder." << endl;
    
// }



// -------------------------------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//   int k;
//   for(k = 0;k > -57;k--) {
//       cout << k << endl;

    
//   }
// }

// ---------------------------------------------------


// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;

//   cin >> n;
//   for(int i = 0;i <= n;i++) {
//       if (i % 3 ==0)
//         cout << i << endl;
    
//   }
// }


// ---------------------------------------------


// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int hp = 100; // initial HP
//   int max_hp = hp;

//   for(int i=0; i<n; i++) {
//     int a;
//     cin >> a;
//     hp += a  // update HP
//     if (hp > max_hp)
//         max_hp =hp;
    


    
//   }
//   cout << max_hp << endl;
// }

// ---------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int hp = 100; // initial HP
//   int max_hp = hp;
   


  

//   for(int i=0; i<n; i++) {
//     int a;
//     cin >> a;
    
//     if (hp > 0)
//         hp += a;
//     if (hp > max_hp)
//         max_hp =hp;
    

    
//   }
//   cout << max_hp << endl;
// }


// ------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//   int height[1000];
//   int n;
//   cin >> n;
//   for(int i=0; i<n; i++) {
//     cin >> height[i];
//   }

//   int max_height = height[0];
//   int max_count = 0;
//   for(int i = 0;i < n;i++){
//     if (height[i] > max_height )
//     max_height = height[i];

//     else if (max_height == height[i])
//     max_count += 1;
//   }
  


//   cout << max_count << endl;
// }



// -----------------------------------


// #include <iostream>
// using namespace std;


// int main(){

//   int n;
//   cin >> n;

//   for (int i = 1; i<=n;i++){
//     for(int j = 0; j<n;j++){
//         if((i+j)%n == 0) cout << n;
//         else cout << (i+j)%n;
//       }
//       cout << endl;
    
//     }

// }





// -----------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   do {
//     int digit = n%10;
//     cout << digit << endl;
//     n /=  10;
//   } while(n > 0);
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void findDuplicates(int arr[], int len)
// {
//     bool ifPresent = false;
//     vector<int> al;
//     std::vector<int>::iterator it;
//     int count = 0;
//     for (int i = 0; i < len - 1; i++)
//     {
//         for (int j = i + 1; j < len; j++)
//         {
//             for (int k = j + 1; k < len; k++)
//             {
//                 if (arr[i] == arr[j] && arr[j] == arr[k])
//                 {
//                     it = std::find(al.begin(), al.end(), arr[i]);
//                     if (it != al.end())
//                     {
//                         break;
//                     }
//                     else
//                     {
//                         al.push_back(arr[i]);
//                         ifPresent = true;
//                         count += 1;
//                     }
//                 }
//             }
//         }
//     }
//     if (ifPresent == true)
//     {
//         cout << count;
//     }
// }

// int main()
// {
//     int time;
//     cin >> time;
//     int arr[100000];
//     for (int i = 0; i < time; i++)
//     {
//         cin >> arr[i];
//     }
//     int n = sizeof(arr) / sizeof(arr[0]);

//     findDuplicates(arr, n);

//     return 0;
// }