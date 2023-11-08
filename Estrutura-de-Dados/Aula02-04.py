x = 10
try:
    print(x)

except:
    print("Erro Desconhecido!")
else:
    print("Tudo certo")
finally:
    print("Fim do tratamento")
###############################################################
num =-1
if num <1:
    raise Exception("Erro! Valor não permitido")
