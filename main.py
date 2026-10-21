#simple ai
import login

print("WELCOME TO HOME AI\n")

while True:
    enter =input("")

    if enter == 'hello' or enter == 'hey':
        print('Hello.What can i help you today with.\n')

    if enter == 'calculator':
        import calculator
        calculator.calculate()

    if enter.lower() == 'break':
        break


        

    
