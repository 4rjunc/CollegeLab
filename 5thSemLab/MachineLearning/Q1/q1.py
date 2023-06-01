import pandas as pd
import matplotlib.pyplot as plt

#dictionay

dict= { 'DATE' : [31-1-2020, 29-2-2020, 30-3-2020, 31-4-2020],
        'PRICE' : [200, 456, 789, 789],
        'PRODUCT_ID' : [102, 103, 567, 432],
        'QUANTITY_PURCHASED' : [3, 1, 2, 2],
        'SERIAL_NO' : ['ABD123', 'ABD435', 'ABD890', 'ABD567'],
        'USER_ID' : ['USER2', 'USER4', 'USER12', 'USER13'],
        'USER_TYPE' : ['RICH', 'POOR', 'MIDDLE', 'RICH'],
        'USER_CLASS' : ['A', 'A', 'D', 'B'],
        'PURCHASE_WEEK' : ['TUE', 'WED', 'MON', 'MON']    
}

data = pd.DataFrame(dict)
print(data)
data.to_csv("testData.csv")