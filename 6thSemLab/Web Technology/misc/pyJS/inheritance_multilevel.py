class Animal:
    def speak(self):
        print("I am an animal")

class Dog(Animal):
    def bark(self):
        print("Bow Bow")

class DogChild(Dog):
    def food(self):
        print("I am hungry")

d = DogChild()
d.food()
d.bark()
d.speak()
