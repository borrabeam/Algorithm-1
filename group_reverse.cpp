#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int g;
    while (1)
    {
        cin >> g;
      

        if (g==0) break;
        char s[110];
        getchar();
        cin >> s;
        int l=strlen(s);
        int nchar=l/g;
        for (int i=1;i<=g;i++)
        {
            int j=i*nchar;
            int t=nchar;
            while (t--) 
            cout << s[--j];
        }
        cout << endl;
    }
    return 0;
}