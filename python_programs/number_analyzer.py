def odd_even(num):
    if (num%2==0):
        return 'Even'
    else:
        return 'Odd'
def square(num):
    print("The square of",num,"is",num*num)
def cube(num):
    print("The cube of",num,"is",num**3)

n=int(input("Enter a number"))
print("You entered : ",n)
print(odd_even(n))
square(n)
cube(n)