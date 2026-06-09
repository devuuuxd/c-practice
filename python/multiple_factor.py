inte=int(input("Tell me a Number: "))
for i in range(1,inte+1):
    if inte%i==0:
        print(i,"is factor of",inte)
    i+=1