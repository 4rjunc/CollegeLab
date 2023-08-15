class Calculator1:
    def sum(self, a, b):
        print("Sum: ", a + b)


class Calculator2:
    def multi(self, a, b):
        print("Multiplication: ", a * b)


class Calculator3(Calculator1, Calculator2):
    def divide(self, a, b):
        print("Division: ", a / b)


cal = Calculator3()
cal.divide(9, 3)
cal.multi(4, 4)
cal.sum(3, 9)
