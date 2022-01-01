# years 
# money
# totalmoney abd returs = 10%

# COMPOUNDING INTREST LOGIC

years = int(input("Total no of years : "))
initial = int(input("Initial amount : "))
returns = int(input("Enter the return for a year : "))
total = initial
t = years
i = years
while(i!=0):
    intrest = returns/100
    print("Intrest is : ",intrest)
    intrestAmount = initial*intrest
    
    
    # intrestAmount = initial/10
    total =total+intrestAmount
    print("The intrest is : ",intrestAmount)
    print("In {} year total is : {} ".format(i,total))
    i = i-1
    initial = total
    
print("The initial : ",initial)
print("After {} years total is : {}".format(years,total))
    
    
    
    
