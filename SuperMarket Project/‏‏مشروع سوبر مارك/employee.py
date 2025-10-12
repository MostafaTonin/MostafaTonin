from abc import ABC, abstractmethod
from product import Product

class Parent(ABC):
    @abstractmethod
    def get_role(self):
        pass

class Person:
    def __init__(self, name):
        self.__name = name

    def get_name(self):
        return self.__name

2
class Member:
    def __init__(self, age, gender):
        self.age = age
        self.gender = gender

class Employee(Person, Member):
    def __init__(self, name, age, gender):

        self.age = age
        self.gender = gender
        super().__init__(name)

    def get_role(self):
        return "Employee"

    def add_product(self, inventory, barcode, name, price, quantity):
        try:
            product = Product(barcode, name, price, quantity)
            inventory.add_product(product)
        except ValueError as e:
            print(e)  # Print the error message

    def update_product(self, inventory, barcode, quantity):
        inventory.update_product(barcode, quantity)

    def delete_product(self, inventory, barcode):
        inventory.delete_product(barcode)
