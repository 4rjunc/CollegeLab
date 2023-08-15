def decorator(func):
    def wrapper():
        print("Print before the function")
        func()
        print("Print After the funtion")
    return wrapper

@decorator
def welcome():
    print("Hello World")

welcome()
