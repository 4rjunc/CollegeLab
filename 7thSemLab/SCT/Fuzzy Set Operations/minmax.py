def min_max_composition(R, S):
    result = set()
    for (a, b) in R:
        max_val = float('-inf')  # Initializing with negative infinity
        for (c, d) in S:
            if b == c:
                max_val = max(max_val, max(a, d))
        if max_val != float('-inf'):
            result.add((a, max_val))
    return result

# Example relation sets R and S
R = {(1, 2), (3, 4), (5, 6)}
S = {(2, 1), (4, 3)}

print(f"Max-Min Composition {R=} and {S=}")
print(min_max_composition(R, S))