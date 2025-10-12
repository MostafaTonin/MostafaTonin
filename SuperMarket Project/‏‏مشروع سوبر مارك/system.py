from inventory import Inventory
from employee import Employee
from customer import Customer

class SupermarketSystem:
    def __init__(self):
        self.inventory = Inventory()

    def employee_menu(self):
        print("============================")
        print("======= Employee Menu ======")
        print("============================")
        name = input("Enter your name: ")
        if not name.isalpha():
            print("Name should be letter only:")
            name = input("Enter your name: ")
        age = input("Please enter your age: ")
        if not name.isalpha():
            print("Age should contain digits only:")
            age = input("Please enter your age: ")
        gender = input("Please enter your gender: ")
        if not gender.isalpha():
            print("Gender should be letter only:")
            gender = input("Enter your gender: ")
        employee = Employee(name, age, gender)
        print(f"Welcome {employee.get_name()}, you are logged in as {employee.get_role()}.")

        while True:
            print("\n1. Add Product")
            print("2. Update Product")
            print("3. Delete Product")
            print("4. Search Product by Name")
            print("5. Exit")
            choice = input("Choose an option: ")

            if choice == '1':
                barcode = input("Enter product barcode: ")
                name = input("Enter product name: ")
                price = input("Enter product price: ")

                try:

                    price = float(price)
                except ValueError:
                    print("Error: Price must be a valid number.")
                    continue
                quantity = input("Enter product quantity: ")
                try:
                    quantity = int(quantity)
                except ValueError:
                    print("Error: Quantity must be a valid integer.")
                    continue
                employee.add_product(self.inventory, barcode, name, price, quantity)

            elif choice == '2':
                barcode = input("Enter product barcode to update: ")
                quantity = input("Enter new quantity: ")
                try:
                    quantity = int(quantity)
                except ValueError:
                    print("Error: Quantity must be a valid integer.")
                    continue
                employee.update_product(self.inventory, barcode, quantity)

            elif choice == '3':
                barcode = input("Enter product barcode to delete: ")
                employee.delete_product(self.inventory, barcode)

            elif choice == '4':
                name = input("Enter product name to search: ")
                product = self.inventory.find_product_by_name(name)
                if product:
                    print(f"Found {product.name}: Price = {product.price}, Quantity = {product.quantity}")
                else:
                    print(f"No product found with name '{name}'.")

            elif choice == '5':
                print("Exiting Employee Menu.")
                break

            else:
                print("Invalid option! Please choose again.")

    def customer_menu(self):
        print("============================")
        print("====== Customer Menu ======")
        print("============================")

        name = input("Enter your name: ")
        if not name.isalpha():
            print("Name should be letter only:")
            name = input("Enter your name: ")

        mobile = input("Enter your mobile number: ")
        while not Customer.validate_mobile(mobile):
            mobile = input("Enter a valid mobile number: ")

        email = input("Enter your email: ")
        while not Customer.validate_email(email):
            email = input("Enter a valid email address: ")

        customer = Customer(name, mobile, email)
        print(f"Welcome {customer.get_name()}, you are logged in as {customer.get_role()}.")

        while True:
            print("\n1. Search Product")
            print("2. Checkout")
            print("3. Exit")
            choice = input("Choose an option: ")

            if choice == '1':
                search_name = input("Enter product name to search: ")
                product = self.inventory.find_product_by_name(search_name)
                if product:
                    print(f"Found {product.name}: Price = {product.price}, Quantity = {product.quantity}")
                    quantity = input("Enter quantity to add to cart: ")
                    try:
                        quantity = int(quantity)
                    except ValueError:
                        print("Error: Quantity must be a valid integer.")
                        continue
                    customer.add_to_cart(product, quantity)
                else:
                    print(f"No product found with name '{search_name}'.")

            elif choice == '2':
                customer.checkout()
                break

            elif choice == '3':
                print("Exiting Customer Menu.")
                break

            else:
                print("Invalid option! Please choose again.")
