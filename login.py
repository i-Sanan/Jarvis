
name = input("Enter your name: ").strip().lower()
password = int(input("Enter your password: "))

if password == 1234:
    print(f"Welcome {name.capitalize()}! You have successfully logged in.\n")
