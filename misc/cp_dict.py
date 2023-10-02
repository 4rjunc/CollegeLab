#How to merge to dictionaries
a = {"a":1, "b":2}
b = {"c":3, "c":4}

z = {**a, **b}

print(z)
