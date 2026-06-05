num1=int(input("Tell me 1st Number: "))
num2=int(input("Tell me 2nd Number: "))
num3=int(input("Tell me 3rd Number: "))
if num1>num2 and num1>num3:
    print(num1,"is greater than",num2,"and",num3)
elif num2>num1 and num2>num3:
    print(num2,"is greater than",num1,"and",num3)
elif num3>num1 and num3>num2:
    print(num3,"is greater than",num1,"and",num2)
else:
    print("all are same")