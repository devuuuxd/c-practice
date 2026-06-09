inte=int(input("Tell me a Number: "))
if inte % 5 == 0 and inte % 11 == 0:
    print(inte,"is divisible by both 5 and 11!")
elif inte % 5 == 0:
    print(inte,"is divisible by only 5!")
elif inte % 11 == 0:
    print(inte,"is divisible by only 11!")
else:
    print("Not disible by Any!")