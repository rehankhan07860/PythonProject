string = input("Enter a expression: ")

try:
    print("Resul: ", eval(string))
except Exception:
    print("You chutiya entered a wrong expression.")