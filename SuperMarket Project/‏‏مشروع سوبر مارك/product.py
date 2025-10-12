class Product:
    def __init__(self, barcode, name, price, quantity):
        self.barcode = barcode
        self.name = name
        self.price = price
        self.quantity = quantity

    def update_quantity(self, quantity):
        self.quantity = quantity

    def to_string(self):
        return f"{self.barcode},{self.name},{self.price},{self.quantity}\n"

