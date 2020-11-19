#include<stdio.h>
#include "tableau.h"


int main(){
    int T[50], i=0, s,afficher=0;
    
  
    for(i=0 ; i<6 ; i++){
  printf("saisi la valeur\n");
  scanf("%d",&T[i]);

    } 
    
for(i=0 ; i<6 ; i++){
  while (T[i]!=0 )
  
  {
    printf("l'element T[%d] est %d\n",i, T[i]);break;

  }
}


  /* code */


  afficherResultat();

return 0;
}