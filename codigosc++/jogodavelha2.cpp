#include <iostream>
#include <stdlib.h>

#define LIMPAR_TELA "clear"

class Casa
{
public:
   int dominado_por;

   Casa(void) {
      dominado_por = 0;
   }
};

class Linha
{
public:
   Casa casa1;
   Casa casa2;
   Casa casa3;
};

Linha linha1;
Linha linha2;
Linha linha3;

void domina_casa(int i, int j, int dominador)
{
   Linha *aux;

   if (j == 1)
      aux = &linha1;
   else if (j == 2)
      aux = &linha2;
   else if (j == 3)
      aux = &linha3;

   if (i == 1)
      aux->casa1.dominado_por = dominador;
   else if (i == 2)
      aux->casa2.dominado_por = dominador;
   else if (i == 3)
      aux->casa3.dominado_por = dominador;
}

int checa_casa(int i, int j)
{
   Linha *aux;

   if (j == 1)
      aux = &linha1;
   else if (j == 2)
      aux = &linha2;
   else if (j == 3)
      aux = &linha3;

   if (i == 1)
      return aux->casa1.dominado_por;
   else if (i == 2)
      return aux->casa2.dominado_por;
   else if (i == 3)
      return aux->casa3.dominado_por;
}

void desenhar_jogo()
{
   int j, i;
   int aux;

   std::cout << "+---+---+---+\n";
   for (j = 1; j <= 3; j++)
   {
      std::cout << "|";
      for (i = 1; i <= 3; i++)
      {
         aux = checa_casa(i,j);
         if (aux == 0)
            std::cout << "   ";
         else if (aux == 1)
            std::cout << " X ";
         else if (aux == 2)
            std::cout << " O ";
         std::cout << "|";
      }
      std::cout << "\n+---+---+---+\n";
   }
}

int checa_win()
{
   int aux1, aux2, aux3;
   int i;

   for (i = 1; i <= 3; i++)
   {
      aux1 = checa_casa(1,i);
      aux2 = checa_casa(2,i);
      aux3 = checa_casa(3,i);
      if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
         return aux1;
      aux1 = checa_casa(i,1);
      aux2 = checa_casa(i,2);
      aux3 = checa_casa(i,3);
      if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
         return aux1;
   }

   aux1 = checa_casa(1,1);
   aux2 = checa_casa(2,2);
   aux3 = checa_casa(3,3);
   if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
      return aux1;

   aux1 = checa_casa(1,3);
   aux3 = checa_casa(3,1);
   if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
      return aux1;

   return 0;
}

void loop_jogo(int jogador)
{
   int aux;
   int tmp_coluna, tmp_linha;
   int confirma;

   aux = 5;
   while (aux != 0)
   {
      system(LIMPAR_TELA);
      desenhar_jogo();

      confirma = 5;
      while (confirma != 1)
      {
         tmp_linha = 5;
         while ((tmp_linha < 1) || (tmp_linha > 3))
         {
            std::cout << "Jogador " << jogador << ". Em que linha deseja jogar? ";
            if ((scanf("%d",&tmp_linha)) == 0)
            {
               std::cout << "Huh?\n";
               getchar();
            }
         }

         tmp_coluna = 5;
         while ((tmp_coluna < 1) || (tmp_coluna > 3))
         {
            std::cout << "Jogador " << jogador << ". Em que coluna deseja jogar? ";
            if ((scanf("%d",&tmp_coluna)) == 0)
            {
               std::cout << "Huh?\n";
               getchar();
            }
         }

         confirma = 5;
         while ((confirma < 1) || (confirma > 2))
         {
            std::cout << "Jogador " << jogador << ". Confirma? (1 Sim / 2 Nao) ";
            if ((scanf("%d",&confirma)) == 0)
            {
               std::cout << "Huh?\n";
               getchar();
            }
         }
      }

      aux = checa_casa(tmp_coluna,tmp_linha);
      if (aux != 0)
      {
         std::cout << "Casa em uso. Escolha outra.";
         getchar(); getchar();
      }
   }

   domina_casa(tmp_coluna,tmp_linha,jogador);
}

int joga_computador()
{
   int aux, aux1, aux2, aux3;
   int i, j;

   /* Level 1 AI */
   aux1 = checa_casa(2,2);
   if (aux1 == 0)
   {
      domina_casa(2,2,2);
      return 0;
    }

   for (j = 2; j >= 1; j--)
   {
      for (i = 1; i <= 3; i++)
      {
         /* Horizontais */
         aux1 = checa_casa(1,i);
         aux2 = checa_casa(2,i);
         aux3 = checa_casa(3,i);
         if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
         {
            aux = checa_casa(2,i);
            if (aux == 0)
            {
                domina_casa(2,i,2);
                return 0;
              }
            }
         else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
         {
               aux = checa_casa(3,i);
            if (aux == 0)
            {
                   domina_casa(3,i,2);
               return 0;
                }
            }
         else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
         {
               aux = checa_casa(1,i);
               if (aux == 0)
               {
                domina_casa(1,i,2);
               return 0;
               }
            }

         /* Verticais */
         aux1 = checa_casa(i,1);
         aux2 = checa_casa(i,2);
         aux3 = checa_casa(i,3);
         if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
         {
               aux = checa_casa(i,2);
               if (aux == 0)
               {
               domina_casa(i,2,2);
               return 0;
               }
            }
         else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
         {
               aux = checa_casa(i,3);
               if (aux == 0)
               {
               domina_casa(i,3,2);
               return 0;
               }
            }
          else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
          {
               aux = checa_casa(i,1);
               if (aux == 0)
               {
               domina_casa(i,1,2);
               return 0;
               }
            }
      }

      /* Diagonal Principal */
      aux1 = checa_casa(1,1);
      aux2 = checa_casa(2,2);
      aux3 = checa_casa(3,3);
       if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
       {
           aux = checa_casa(2,2);
           if (aux == 0)
           {
            domina_casa(2,2,2);
            return 0;
           }
        }
      else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
      {
          aux = checa_casa(3,3);
          if (aux == 0)
          {
             domina_casa(3,3,2);
             return 0;
           }
        }
      else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
      {
           aux = checa_casa(1,1);
           if (aux == 0)
           {
            domina_casa(1,1,2);
            return 0;
           }
        }

      /* Diagonal Secundaria */
      aux1 = checa_casa(3,1);
      aux3 = checa_casa(1,3);
      if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
      {
           aux = checa_casa(2,2);
           if (aux == 0)
           {
            domina_casa(2,2,2);
            return 0;
          }
        }
      else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
      {
           aux = checa_casa(1,3);
           if (aux == 0)
           {
             domina_casa(1,3,2);
             return 0;
            }
        }
      else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
      {
           aux = checa_casa(3,1);
           if (aux == 0)
           {
            domina_casa(3,1,2);
            return 0;
            }
        }
   }

   /* Level 2 AI */

   /* Defesa */
   aux1 = checa_casa(1,1);
   aux2 = checa_casa(3,3);
   if ((aux1 == 1) && (aux2 == 1))
   {
       aux = checa_casa(2,1);
       if (aux == 0)
       {
         domina_casa(2,1,2);
         return 0;
        }
    }

    aux1 = checa_casa(3,1);
    aux2 = checa_casa(1,3);
    if ((aux1 == 1) && (aux2 == 1))
    {
       aux = checa_casa(2,1);
       if (aux == 0)
       {
          domina_casa(2,1,2);
          return 0;
        }
    }

    aux1 = checa_casa(2,1);
    aux2 = checa_casa(3,2);
    aux3 = checa_casa(1,2);
    if ((aux1 == 1) && (aux2 == 1))
    {
       aux = checa_casa(3,1);
       if (aux == 0)
       {
           domina_casa(3,1,2);
           return 0;
        }
    }
    if ((aux1 == 1) && (aux3 == 1))
    {
       aux = checa_casa(1,1);
       if (aux == 0)
       {
            domina_casa(1,1,2);
            return 0;
        }
    }
    if ((aux3 == 1) && (aux2 == 1))
    {
       aux = checa_casa(1,1);
       if (aux == 0)
       {
            domina_casa(1,1,2);
            return 0;
        }
    }

    aux1 = checa_casa(2,3);
    if ((aux1 == 1) && (aux2 == 1))
    {
       aux = checa_casa(3,3);
       if (aux == 0)
       {
            domina_casa(3,3,2);
            return 0;
        }
    }
    if ((aux1 == 1) && (aux3 == 1))
    {
       aux = checa_casa(1,3);
       if (aux == 0)
       {
            domina_casa(1,3,2);
            return 0;
        }
    }

    aux1 = checa_casa(1,1);
    aux2 = checa_casa(2,2);
    aux3 = checa_casa(3,3);
    if ((aux1 == 2) && (aux2 == 1) && (aux3 == 1))
    {
       aux = checa_casa(3,1);
       if (aux == 0)
       {
            domina_casa(3,1,2);
            return 0;
        }
    }

      /* Ataque */
      for (i = 1; i <= 3; i++)
      {
        aux1 = checa_casa(1,i);
        aux2 = checa_casa(2,i);
        aux3 = checa_casa(3,i);
        if ((aux1 == 2) && (aux2 == 0) && (aux3 == 0))
        {
             aux = checa_casa(2,i);
           if (aux == 0)
           {
                  domina_casa(2,i,2);
                  return 0;
            }
        }
        if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
        {
             aux = checa_casa(1,i);
           if (aux == 0)
           {
                  domina_casa(1,i,2);
                  return 0;
            }
        }
        if ((aux3 == 2) && (aux1 == 0) && (aux2 == 0))
        {
             aux = checa_casa(1,i);
           if (aux == 0)
           {
                  domina_casa(1,i,2);
                  return 0;
            }
        }

        aux1 = checa_casa(i,1);
        aux2 = checa_casa(i,2);
        aux3 = checa_casa(i,3);
        if ((aux1 == 2) && (aux2 == 0) && (aux3 == 0))
        {
             aux = checa_casa(i,2);
           if (aux == 0)
           {
                  domina_casa(i,2,2);
                  return 0;
            }
        }
        if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
        {
             aux = checa_casa(i,1);
           if (aux == 0)
           {
                  domina_casa(i,1,2);
                  return 0;
            }
        }
        if ((aux3 == 2) && (aux1 == 0) && (aux2 == 0))
        {
             aux = checa_casa(i,1);
           if (aux == 0)
           {
                  domina_casa(i,1,2);
                  return 0;
            }
        }
    }
    aux1 = checa_casa(1,1);
    aux2 = checa_casa(2,2);
    aux3 = checa_casa(3,3);
    if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
    {
        aux = checa_casa(1,1);
       if (aux == 0)
       {
              domina_casa(1,1,2);
              return 0;
        }
    }

    aux1 = checa_casa(3,1);
    aux3 = checa_casa(1,3);
    if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
    {
        aux = checa_casa(1,3);
       if (aux == 0)
       {
              domina_casa(1,3,2);
              return 0;
        }
    }

   aux1 = checa_casa(1,1);
   if (aux1 == 2)
   {
      aux2 = checa_casa(2,2);
      aux3 = checa_casa(3,3);
      if ((aux3 == 0) && (aux2 == 0))
      {
         aux1 = checa_casa(3,2);
         aux2 = checa_casa(1,2);
         if ((aux1 != 1) && (aux2 != 1))
         {
            aux1 = checa_casa(2,1);
            aux2 = checa_casa(2,3);
            if ((aux1 != 1) && (aux2 != 1))
            {
                    aux = checa_casa(3,3);
                      if (aux == 0)
                    {
                        domina_casa(3,3,2);
                   return 0;
                    }
                }
         }
        }
   }

    for (i = 1; i <= 3; i++)
    {
        aux1 = checa_casa(1,i);
        aux2 = checa_casa(2,i);
        aux3 = checa_casa(3,i);
        if (aux1 == 0)
        {
            domina_casa(1,i,2);
            return 0;
        }
        else if (aux2 == 0)
        {
            domina_casa(2,i,2);
            return 0;
        }
        else if (aux3 == 0)
        {
            domina_casa(3,i,2);
            return 0;
        }

        aux1 = checa_casa(i,1);
        aux2 = checa_casa(i,2);
        aux3 = checa_casa(i,3);
        if (aux1 == 0)
        {
            domina_casa(i,1,2);
            return 0;
        }
        else if (aux2 == 0)
        {
            domina_casa(i,2,2);
            return 0;
        }
        else if (aux3 == 0)
        {
            domina_casa(i,3,2);
            return 0;
        }
    }
}

int main()
{
   int i;
   int tipo_de_jogo = 5;
   int jogador = 0;
   int aux;

   while ((tipo_de_jogo < 0) || (tipo_de_jogo > 2))
   {
      system(LIMPAR_TELA);

      std::cout << "[1] Jogador contra Jogador\n";
      std::cout << "[2] Jogador contra Computador\n";
      std::cout << "[0] Sair\n";

      if ((scanf("%d",&tipo_de_jogo)) == 0)
      {
         std::cout << "Huh?\n";
         getchar();
      }
   }

   if (tipo_de_jogo == 0)
      return 0;

   else if (tipo_de_jogo == 1)
   {
      for (i = 0; i < 9; i++)
      {
         jogador++;
         if (jogador > 2)
            jogador = 1;

         loop_jogo(jogador);

         aux = checa_win();
         if (aux != 0)
         {
            system(LIMPAR_TELA);
            desenhar_jogo();

            std::cout << "Vencedor: Jogador " << aux << "!";
            getchar(); getchar();
            return 0;
         }
      }
   }

   else if (tipo_de_jogo == 2)
   {
      for (i = 0; i < 9; i++)
      {
         jogador++;
         if (jogador > 2)
            jogador = 1;

         if (jogador == 1)
            loop_jogo(jogador);
         else if (jogador == 2)
            joga_computador();

         aux = checa_win();
         if (aux != 0)
         {
            std::system(LIMPAR_TELA);
            desenhar_jogo();

            if (aux == 1)
               std::cout << "Vencedor: Jogador!";
            else if (aux == 2)
               std::cout << "Vencedor: Computador!";

            getchar(); getchar();
            return 0;
         }
      }
   }

   if (tipo_de_jogo != 0)
   {
      system(LIMPAR_TELA);
      desenhar_jogo();

      std::cout << "Empate!";
      getchar(); getchar();
      return 0;
   }
}
