#include <stdio.h>

class Horario{
public:
    int horas, minutos, segundos, dia = 24*60*60;;

    Horario(){}

    Horario(int horas, int minutos, int segundos ){
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    int get_s(){
        return horas * 60 * 60 + minutos * 60 + segundos;
    }

    int get_s(Horario &t){
        return t.horas * 60 * 60 + t.minutos * 60 + t.segundos;
    }

    Horario conv_s_to_horario(int s){
        Horario ans = Horario();
        ans.horas = s/(60*60);
        s %= 60*60;
        ans.minutos = s/60;
        s %= 60;
        ans.segundos = s;
        return ans;
    }


    //TODO: Implementar o operador de adição.
    Horario operator + (Horario b){
        int s = get_s() + get_s(b);
        if(s >= dia) s -= dia;
        return conv_s_to_horario(s);
    }

    //TODO: Implementar o operador de subtração.
    Horario operator - (Horario b){
        int s = get_s() - get_s(b);
        if(s < 0) s += dia;
        return conv_s_to_horario(s);
    }

};

int main(){
    Horario a, b, c;
    char op;

    scanf("%d:%d:%d", &a.horas, &a.minutos, &a.segundos);
    scanf("%d:%d:%d", &b.horas, &b.minutos, &b.segundos);
    scanf(" %c", &op);

    if(op == 'A'){
        c = a + b;
    } else if(op == 'S'){
        c = a - b;
    }

    printf("%02d:%02d:%02d\n", c.horas, c.minutos, c.segundos);
}