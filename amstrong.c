int main(){
    int x,y,n,l,i,som;
    //initialisations ;
    printf("la liste des nombres d'armstrong est:");
    printf("0,1");
    n=2;
    x=2;
    while(n<7)
     //calcul de la lomgueur
    l=0;
    y=x; 
    while(y!=0){
        d=y%10;
        som+=pow(d,3);
        y/=10;
    }
    if(som==x){
        printf(",%d",x);
        n++;

    }
    x++;
    }
  return 0;
}