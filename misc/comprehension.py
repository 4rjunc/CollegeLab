#List Comprehension
numbers = [1, 2, 3, 4, 5]
odd_number = [ num for num in numbers if num % 2 != 0]
print(f"Odd numbers {odd_number}")

# Dictionary Comprehension
fruits = ["apple", "banana", "cherry", "date"]
fruits_dict = {fruit : len(fruit) for fruit in fruits}
print(fruits_dict)

#test with out git config
