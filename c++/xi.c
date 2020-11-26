#include <stdio.h>

int main(){
    int ap = 0, re = 0;

    double meno = 50, maio = 0;

    for (int i = 0; i < 4; i++) {
        double a, b, c, media;
        printf("Insira as 3 notas do alunos %d: ",i+1);
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);

        media = (a+b+c)/3.0;

        if(a > maio) maio = a;
        if(b > maio) maio = b;
        if(c > maio) maio = c;

        if(a < meno) meno = a;
        if(b < meno) meno = b;
        if(c < meno) meno = c;

        if(media >= 6) ap++;
        else re++;
        printf("Media: %.1lf\n", media);
    }

    printf("Alunos aprovados: %d\n\nAlunos reprovados: %d\n\nMaior nota digitada: %.1lf\n\nMenor nota digitada: %.1lf\n",ap,re,maio,meno);

    return 0;
}