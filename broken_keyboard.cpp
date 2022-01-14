#include <iostream>
#include <stdio.h>
 
using namespace std;
 
const int N = 100000 + 2;
char s[N];
int nexti[N];
 
int main()
{
    int current, last;
 
    while(fgets(s+1, N, stdin) != NULL) {
        current = last = 0;
        nexti[0] = 0;
        int i = 1;
        while(s[i] != '\n') {
            if(s[i] == '[')
                current = 0;
            else if(s[i]==']')
                current = last;
            else {
                nexti[i] = nexti[current];
                nexti[current] = i;
                if(last == current)
                    last = i;
                current = i;
            }
            i++;
       }
 
        for(i = nexti[0]; i; i = nexti[i])
            cout << s[i];
        putchar('\n');
    }
 
    return 0;
}