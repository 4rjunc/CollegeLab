Z = {}

def union(A, B):
    for x in A and B:
        Z[x] = max(A[x], B[x])
    return Z

def compliment(X):
    for x in X:
        Z[x] = round(1 - X[x],2)
    return Z

input("Program to prove DeMorgans Theorem!")

A = {}
B = {}

no_items = int(input("Enter the numbers: "))
for _ in range(no_items):
    key = input("Enter the crispy set elements: ")
    value = float(input("Enter the Membership value for Set 1: "))
    A[key] = value    
    value = float(input("Enter the Membership value for Set 2: "))
    B[key] = value

LHS = compliment(union(A, B))
RHS = union(compliment(A), compliment(B))

print(f"Fuzzy sets given {A=} and {B=}")
if LHS == RHS:
    print(f"DeMorgans is proved \n Since {LHS} = {RHS}")
