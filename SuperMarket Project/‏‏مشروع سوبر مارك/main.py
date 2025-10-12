from system import SupermarketSystem

def main():
    system = SupermarketSystem()

    print("================================================")
    print("  Welcome to the Supermarket Management System")
    print("================================================")

    while True:
        print("\nMain Menu:\n1. Employee\n2. Customer\n3. Exit")
        choice = input("Choose an option: ")

        if choice == '1':
            system.employee_menu()
        elif choice == '2':
            system.customer_menu()
        elif choice == '3':
            print("Exiting the system. Goodbye!")
            break
        else:
            print("Invalid option! Please choose again.")

if __name__ == "__main__":
    main()
