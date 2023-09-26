from pprint import pprint

A = {
    "a":0.2,
    "b":0.5,
    "c":0.8
}

B = {
    "a":0.7,
    "b":1.0,
    "c":0.3
}

Z = {} # A union B

for (key1,value1), (key2, value2) in zip(A.items(),B.items()):
    # print(f"{key1=}, {value1=}, {key2=}, {value2=}")
    if value1> value2:
        Z[key1] = value1
    elif value2 > value1:
        Z[key1] = value2
        
pprint(f"{A}  UNION {B} = {Z}")
