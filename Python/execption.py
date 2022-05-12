a = int(input("A: "))
b = int(input("B: "))
try:
    res = a / b
    print(res)
except:
    print("Error is handeld")
finally:
    print("End of the Finally")
print("End of the program")   