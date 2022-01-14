// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,d,r;
    int i;
    while(1){
        int total=0;
        cin>>n>>d>>r;
        if(n==0 and d==0 and r==0)
            break;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(i=0;i<n;i++){
            if(a[i]+b[i]>d)
                total+=(a[i]+b[i]-d)*r;
        }
        
        cout << total << endl;
    }
    return 0;
}