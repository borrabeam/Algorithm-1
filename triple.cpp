#include <iostream>
// #include <bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    int arr[100001];
    int count = 0;
    int temp;
    int ans = 0;
   
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++)  {
      for(int j = i + 1; j < n; j++)  {
         if( arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
      // cout << arr[i] << endl;
   }

   for(int i = 0; i < n; i++) {
    if (arr[i] == arr[i + 1]) {
        count++;
        if (count == 2){
            ans++;
            count = 0;
        }
    }
    else {
        count = 0;
    }
}
   cout << ans << endl;
       
 
}








