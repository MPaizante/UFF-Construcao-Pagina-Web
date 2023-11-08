class Carro:
    velMax = 0;
    ligado = False
    cor = ""
    def __init__(self,v,l,c):
        self.velMax = v
        self.ligado = l
        self.cor = c
    def mostrar(self):
    
        print("Velocidade Maxima..:", self.velMax)
        print("Cor do carro.......:",self.cor)
        estado= "Sim" if c1.ligado else "Não"
        print("O carro está ligado: ",estado)
        print("---------------------------------------")
        
        

c1=Carro(200,False,"Balck")
c2=Carro(120,False,"White")
c3=Carro(350,False,"Red")

c1.mostrar()
c2.mostrar()
c3.mostrar()

