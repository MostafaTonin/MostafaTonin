from product import Product

class Inventory:
    def __init__(self, filename='inventory.txt'):
        self.filename = filename
        self.products = self.load_products()

    def load_products(self):
        products = []
        try:
            with open(self.filename, 'r') as file:
                for line in file:
                    barcode, name, price, quantity = line.strip().split(',')
                    products.append(Product(int(barcode), str(name), float(price), int(quantity)))
            print("Products loaded successfully from file.")
        except FileNotFoundError:
            print(f"Inventory file '{self.filename}' not found. Starting with an empty inventory.")
        except Exception as e:
            print(f"Error loading products from file: {e}")
        return products

    def save_products(self):
        try:
            with open(self.filename, 'w') as file:
                for product in self.products:
                    file.write(product.to_string())
        except Exception as e:
            print(f"Error saving products to file: {e}")

    def add_product(self, product):
        if self.find_product_by_barcode(product.barcode):
            print(f"Error: Product with barcode '{product.barcode}' already exists.")
        else:
            self.products.append(product)
            self.save_products()
            print("Products saved successfully to file.")



    def find_product_by_barcode(self, barcode):
        for product in self.products:
            if product.barcode == barcode:
                return product

        return None

    def find_product_by_name(self, name):
        for product in self.products:
            if name.lower() in product.name.lower():
                return product
        print(f"No product found with name containing '{name}'.")
        return None

    def update_product(self, barcode, quantity):
        product = self.find_product_by_barcode(barcode)
        if product:
            product.update_quantity(quantity)
            self.save_products()
            print(f"Product '{product.name}' updated successfully. New quantity: {quantity}.")
        else:
            print(f"Error: Product with barcode '{barcode}' not found. Update failed.")

    def delete_product(self, barcode):
        product = self.find_product_by_barcode(barcode)
        if product:
            self.products.remove(product)
            self.save_products()
            print(f"Product '{product.name}' deleted successfully.")
        else:
            print(f"Error: Product with barcode '{barcode}' not found. Deletion failed.")
