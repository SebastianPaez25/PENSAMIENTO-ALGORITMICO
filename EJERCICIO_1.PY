valor_1 = 60

signo = "/"

valor_2 = 10

if signo == "+":
    print("RESULTADO ", valor_1 + valor_2)
elif signo == "-":
    print("RESULTADO ", valor_1 - valor_2)
elif signo == "*":
    print("RESULTADO ", valor_1 * valor_2)
elif signo == "/":
    if valor_2 == 0:
        print("NO SE PUEDE DIVIDIR ENTRE CERO")
    else:
        print("RESULTADO ", valor_1 / valor_2)
elif signo == "%":
    print("RESULTADO ", valor_1 * valor_2 / 100)
else:
    print("introduzca un signo valido")