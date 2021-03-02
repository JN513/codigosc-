void crivo(){

    primo[0] = primo[1] = 0;

    for(int i = 2; i <= 1000 ; i++) {
        if(primo[i]) {
            for(int j = i * i; j <= 1000; j += i)     //iteramos por todos os números divisíveis pelo primo i
                primo[j] = 0;
        }
    }
    printf("OK\n\n");
}