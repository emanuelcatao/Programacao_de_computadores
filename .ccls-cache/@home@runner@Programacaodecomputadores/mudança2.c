/**#include <stdio.h>
void troca(int a[5]){
        a[0] = 10;
}

int main(){
        int a[5]={1,2,3,4,5};
        printf("Antes de chamar a função :\n");
        for(int i = 0; i<5; i++) printf("a[%d] = %d\n", i, a[i]);
        troca(a);
        printf("Depois de chamar a função:\n");
        for(int i = 0; i<5; i++) printf("a[%d] = %d\n", i, a[i]);
        return 0;
}**/