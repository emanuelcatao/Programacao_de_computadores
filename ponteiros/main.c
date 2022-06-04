/**#include <stdio.h>
void troca(int a, int b){
        int temp;
        temp=a;
        a=b;
        b=temp;
}

int main(){
        int a=2,b=3;
        printf("Antes de chamar a função :\na=%d\nb=%d\n",a,b);
        troca(a,b);
        printf("Depois de chamar a função:\na=%d\nb=%d\n",a,b);
        return 0;
}**/