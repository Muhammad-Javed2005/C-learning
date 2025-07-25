x1 = int(input("Enter value of x1 : "))
x2 = int(input("Enter value of x2 : "))
y1 = int(input("Enter value of y1 : "))
y2 = int(input("Enter value of y2 : "))


print(f"The point is 1 is ({x1} , {y1})")
print(f"The point is 2 is ({x2} , {y2})")

dist  = ((((x1-x2)**2) + ((y1-y2)**2) )**0.5)


print(f"The distance between point ({x1} , {y1}) and ({x2} , {y2}) is {dist}")

