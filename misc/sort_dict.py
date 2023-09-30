# Sort a dictionary by value
dict = {"b": 4, "a": 6, "r": 1, "e": 10}
# dict.items() will return a tuple ((b,4), (a,6), ...) . In lambda function the second element
# of tuple extracted for sorting.
sorted_tuple = sorted(dict.items(), key=lambda x: x[1])
sorted_dict = {item[0]: item[1] for item in sorted_tuple}
print(f"{sorted_dict=}")
