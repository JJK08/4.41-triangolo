#include <stdio.h>

int main(void) {
    int n;
    int i;
    printf("quanta lunghezza del lato di un triangolo vuoi?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==n-1||j==0||j>=i) {
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}