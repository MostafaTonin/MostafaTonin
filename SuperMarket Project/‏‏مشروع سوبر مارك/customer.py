from employee import Person

class Customer(Person):
    def __init__(self, name, mobile, email):
        super().__init__(name)  # Inherit name from Person
        self.mobile = mobile
        self.email = email
        self.cart = {}  # Cart using dictionary to store products and quantities

    def get_role(self):
        return "Customer"

    def add_to_cart(self, product, quantity):
        if product in self.cart:
            self.cart[product] += quantity  # Update quantity if the product is already in the cart
        else:
            self.cart[product] = quantity  # Add product to cart
        print(f"{quantity} of {product.name} added to your cart.")

    def checkout(self):
        total = sum(product.price * quantity for product, quantity in self.cart.items()) # important product as a key and quantity as a key value
        print(f"Your total amount is: {total}.")
        return total

    @staticmethod
    def validate_mobile(mobile):
        if not mobile.isdigit():
            print("Error: Mobile number should contain only digits.")
            return False
        if len(mobile) != 9:
            print("Error: Mobile number should be exactly 9 digits long.")
            return False      # it will be access from customer menu in system module
        if not mobile.startswith(('77', '78', '71', '73', '70')):
            print("Error: Mobile number should start with 77, 78, 71, 73, or 70.")
            return False
        return True

    @staticmethod
    def validate_email(email):
        if '@gmail.com' not in email:
            print("Error: Email must contain the '@gmail.com' symbol.")
            return False
        return True
