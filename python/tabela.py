class tabela():
    def __init__(self, tamanhomax):
        self.placa=[None]*(tamanhomax)
        self.valor=[None]*(tamanhomax)
        self.tamanho=-1
        self.tamanhomax=tamanhomax
    def imprimir(self):
        if self.tamanho>=-1:
            print("     Placa     Valor\n")
            for elem in range(0,self.tamanho+1):
                print("     "+str(self.placa[elem])+"     "+str(self.valor[elem]))
        else:
            print("Nao existe tabela , é necessario criar uma.")
    def ordenar_lista(self):
        if self.tamanho>=-1:
            lista=[]
 
            for elem in range(0,self.tamanho+1):
                lista.append(str(self.placa[elem])+"-"+str(self.valor[elem]))
 
            lista.sort()
            for elem in range(0,len(lista)):
                palavra=str(lista[elem])
                palavra=palavra.split("-")
                self.placa[elem]=(palavra[0])
                self.valor[elem]=(palavra[1])
 
 
 
        else:
            print("Nao existe tabela, é necessario criar uma,")
 
    def busca(self,placa):
        posicao=-1
        if self.tamanho>=-1:
            for elem in range (0,self.tamanho+1):
                if str(placa.upper())==str(self.placa[elem]):
                    posicao=elem
                    print("Sua placa'"+str(placa)+"' esta  localizada na posição "+str(posicao+1))
                    posicao=posicao
                    return posicao
                    break
                elif (elem == self.tamanho and posicao == -1):
                    print("Não foi encontrada nenhuma placa '"+str(placa)+"' cadastrada no sistema.")
                    return -1
        else:
            print("A tabela está vazia portanto nao é possivel encontrar a placa desejada.")
 
    def busca_binaria(self, placa):
        inicio=0
        final=self.tamanho
        rodando=True
        placa=placa.upper()
        cont=0
 
        while rodando==True:
 
            meio=(inicio+final)//2
            if inicio <=final:
                meio=(inicio+final)//2
                if meio==1:
 
                    if str(self.placa[meio-1])==str(placa):
                        cont=cont+1
                        print("A placa '"+ str(placa )+"' esta na posição "+str(meio)+" e foram necessario "+str(cont)+" palpites para achar")
                        rodando=False
                        break
 
                if str(self.placa[meio])==str(placa):
                    cont=cont+1
                    print("A placa '"+ str(placa )+"' esta na posição "+str(meio+1)+" e foram necessario "+str(cont)+" palpites para achar")
                    rodando=False
                    break
                for elem in range(0,len(placa)):
 
                    palavra=str(self.placa[meio])
                    if palavra[elem]==placa[elem]:
                        pass
                    if palavra[elem]>placa[elem]:
 
                        final=meio-1
                        break
                    if palavra[elem]<placa[elem]:
 
                        inicio=meio+1
                        break
                cont=cont+1
            else:
                print("a placa'"+str(placa)+"' nao esta na tabela")
                break
 
 
 
 
 
 
    def inserir(self,placa,valor):
        if self.tamanho>=-1:
            if self.tamanho+1 < self.tamanhomax:
                self.placa[self.tamanho+1]=placa.upper()
                self.valor[self.tamanho+1]=valor
                print("A placa "+str(placa.upper())+" foi adicionada a tabela.")
                self.tamanho=self.tamanho+1
            else :
                print("Nao tem mais espaço para a inserção de novos cadastros, voce deve excluir algum ou iniciar uma nova tabela.")
        else:
            print("Nao existe tabela, é necessario criar uma.")
    def excluir(self,placa):
        if self.tamanho>=-1:
            posicao=self.busca(placa)
 
            if posicao ==-1:
                pass
            else:
                print("A placa "+str(self.placa[posicao])+" foi excluida.")
                for elem in range(posicao,self.tamanho):
                    self.placa[elem]=self.placa[elem+1]
                    self.valor[elem]=self.valor[elem+1]
                self.placa[self.tamanho]=None
                self.valor[self.tamanho]=None
                self.tamanho=self.tamanho-1
        else:
            print("A tabela esta vazia nao é possivel excluir nenhum elemento.")
 
    def destruir(self):
        self.tamanho=-2
        print("Destruido")