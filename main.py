#Variables
userInput=""
while True:
    #We ask the user
    print("What type of number system you want to convert?")
    print("1. Binary")
    print("2. Decimal")
    print("3. Exit")

    #We recieve the input
    userInput=input("")

    if userInput=="1":
        print("What binary number you want to convert to decimal?")
        userInput=input("")
        #Converts the binary to decimal
        changedNumber=int(userInput,2)
        #Print the result
        print("The converted number is "+str(changedNumber))
        print("")

    if userInput=="2":
        print("What decimal number you want to convert to binary?")
        userInput=int(input(""))
        #Print the result
        print("The converted number is "+f"{userInput:b}") #Converts the decimal to binary (f"{userInput:b})
        print("")
    if userInput=="3":
        print("Goodbye!")
        break
