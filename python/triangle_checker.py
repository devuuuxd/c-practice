side_one=int(input("Tell me first side size: "))
side_two=int(input("Tell me second side size: "))
side_three=int(input("Tell me third side size: "))

if side_one+side_two>=side_three or side_one+side_three>=side_two or side_two+side_three>=side_one:
    if side_one == side_two == side_three:
        print("It's an Equilateral Triangle!")
    elif side_one == side_two or side_two == side_three or side_one == side_three:
        print("Its an Isosceles Triangle!")
    else:
        print("Its a Scalene Triangle")
else:
    print("Not a valid Triangle")