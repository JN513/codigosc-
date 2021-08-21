# include < stdio.h >

int main() {
    int k=0,sum,num,g,s;
    bool d;
    printf("DIGITE NUMERO: ");
    scanf("%d",&num);

    do {
        for(sum=0;num!=0;sum+=s) {
            g=num%10; //se extrae el ultimo digito
            num/=10; //se divide el numero entre 10 para que cambie
            s=g*g; //se eleva el residuo de la division al cuadrado
        }
        if(sum==1){ //si el sumador da 1 se termina el programa
            d=true;}

        else{ //sino se mira la posibilidad de que en la siguiente
        num=sum; //iteraccion el numero de uno, este ciclo se prueba 21 veces
        k++;
        if(k==20) //dado caso que el sumar no de uno en las 21 iteracciones finaliza el programa
        {sum=1; //cierro el ciclo forzadamente ya que no se encontro el valor esperado
        d=false;
        } 
        
        } 
    } while(sum!=1); //se evalua la condicion de que solo finaliza cuando la suma de uno

    if(d==true)
    printf("\nEL NUMERO ES FELIZ");
    else
    printf("\nEL NUMERO NO ES FELIZ");
}