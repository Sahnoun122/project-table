#include <stdio.h>
#include <stdlib.h>

int main(){
	int tab[]={1,2,3,4,5};
    int p=sizeof(tab)/sizeof(tab[0]);
    int i;
    printf("entre les number");

     for( int i=0;i<p; i++){
        printf("%d" ,tab[i]);
    }

    return 0;
   }