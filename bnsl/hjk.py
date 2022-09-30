from typing import Any



import pandas as pd
df = pd.read_excel('DIM_MATERIAL.xlsx')
print(df)
df.sort_values(by = ['MATERIAL_GROUP_DESC'])
print( df [['MATERIAL_DESC' , 'MATERIAL_GROUP_DESC']])
df.sort_values(by = ['MATERIAL_GROUP_DESC'])
print(df [['MATERIAL_DESC' , 'MATERIAL_GROUP_DESC']].sort_values(by = ['MATERIAL_GROUP_DESC']))

df.to_excel('./DIM_MATERIAL.xlsx', sheet_name='States', index=False)

