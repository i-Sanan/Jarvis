#simple ai
import login

print("JARVIS AI\n")

while True:
    enter =input("> ")

    if enter in ('hello', 'hi', 'hey'): 
        print('Hello.What can i help you today with.\n')

    elif enter == 'calculator':
        import calculator
        calculator.calculate()

    elif enter == "help":
        print("Commands: hello, calculator, help, break")

    
    elif enter.lower() == 'break':
        break

    else:
        print("I don't understand that command. Type 'help' for a list of commands.\n")


        

    
