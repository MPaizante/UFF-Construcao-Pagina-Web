class Carro:
    velMax = 0;
    ligado = False
    cor = ""

c1=Carro()
c2=Carro()
c3=Carro()

c1.velMax = 200
c1.cor= "Preto"
c1.ligado = False
estado = "sim" if c1.ligado else "nao"
print(c1.velMax)
print("Cor do carro",c1.cor)
print("O carro está ligado: "+ str(estado))

