
# calculator.py

def calculate():
    print("--- Jarvis Calculator ---")

    try:
        num1 = float(input("Enter first number: "))
        operator = input("Enter operator (+, -, *, /): ")
        num2 = float(input("Enter second number: "))

        if operator == "+":
            result = num1 + num2

        elif operator == "-":
            result = num1 - num2

        elif operator == "*":
            result = num1 * num2

        elif operator == "/":
            if num2 == 0:
                print("Jarvis: Cannot divide by zero!")
                return
            result = num1 / num2

        else:
            print("Jarvis: Invalid operator!")
            return

        print("Jarvis:", num1, operator, num2, "=", result)

    except ValueError:
        print("Jarvis: Please enter valid numbers.")


if __name__ == "__main__":
    calculate()
