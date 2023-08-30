#include <stdio.h>

int main(){

    char a[] = "hello";
    char b[] = "hello";
    int i=0;
    while(a[i]==b[i]){
        printf("%d", i);
        i++;
    }
}