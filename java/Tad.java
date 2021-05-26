
class Fracao{
    private float numerador;
    private float denominador;

    public Fracao(float _numerador, float _denominador){
        this.numerador = _numerador;
        this.denominador = _denominador;
    }

    public void setNumerador(float _numerador){
        this.numerador = _numerador;
    }

    public float getNumerador(){
        return numerador;
    }

    public void setDenominador(float _denominador){
        this.denominador = _denominador;
    }

    public float getDenominador(){
        return denominador;
    }

    public float get_resultado(){
        return numerador/denominador;
    }
}

public class Tad {
    public static void main(String[] args) {
        Fracao fracao = new Fracao(14, 15);

        Fracao fracao2 = new Fracao(11, 5);

        fracao.setNumerador(12);
        fracao.setDenominador(3);

        System.out.println(fracao.get_resultado());
        System.out.println(fracao2.get_resultado());
    }
}
