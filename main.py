def binary_to_decimal():
    binary = input("Enter a binary number: ")

    try:
        print(f"The converted number is {int(binary, 2)}")
    except ValueError:
        print("Invalid binary number.")


def decimal_to_binary():
    decimal = input("Enter a decimal number: ")

    try:
        print(f"The converted number is {int(decimal):b}")
    except ValueError:
        print("Invalid decimal number.")


while True:
    print("1. Binary to Decimal")
    print("2. Decimal to Binary")
    print("3. Exit")

    choice = input("Choice: ")

    if choice == "1":
        binary_to_decimal()
    elif choice == "2":
        decimal_to_binary()
    elif choice == "3":
        print("Goodbye!")
        break
    else:
        print("Invalid option.")
