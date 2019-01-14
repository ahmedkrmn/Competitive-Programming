#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
#include "stdio.h"
int main(){
    int n,in1,in2,w=0,h=0;
    char op;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf(" %c %d %d", &op, &in1, &in2);
        if (op=='+'){
            w = MAX(w, MAX(in1, in2));
            h = MAX(h, MIN(in1, in2));
        }
        else{
            if (MAX(in1, in2)>=w && MIN(in1, in2)>=h) printf("YES\n");
            else printf("NO\n");
        }
    }
    
}