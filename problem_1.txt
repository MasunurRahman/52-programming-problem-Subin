#include <stdio.h>
#include <string.h>

int main() {
    int T, i, L;
    char N [101];
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%s",&N);
        L = strlen(N);
        if(N[L-1] == '0' || N[L-1] == '2' || N[L-1] == '4' || N[L-1] == '6' || N[L-1] == '8')
            printf("even\n");
        else
            printf("odd\n");
        
    }
    return 0;
}
