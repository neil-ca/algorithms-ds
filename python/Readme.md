## DataFrames
A DataFrame is a data structure to store tabular data available in python's `pandas` package.
It is one of the most important data structures for algorithms and is used to process
traditional structured data.

|id   |  name  |  age |  decision  |
|:---:|:------:|:----:|:----------:|
|1    |fares   |32    |True        |
|2    |Elena   |18    |False       |
|3    |Steven  |40    |False       | 


For create a dataframe:
```python
import pandas as pd
df = pd.DataFrame([
        ['1', 'fares', 32, True],
        ['2', 'Elena', 18, False],
        ['3', 'Steven', 40, False]
])
df.columns = ['id', 'name', 'age', 'decision']
print(df)
```

### Terminologies of DataFrames
Let's look into some of the terminologies that are used in the context of a DataFrame:
 * Axis: In the pandas documentation, a single column or row of a DataFrame is called an axis.
 * Axes: If there is more than one axis, they are called axes as a group
 * Label: A DataFrame allows the naming of both columns and rows with what's called a label

### Creating a subset of a DataFrame
Fundamentally, there are two main ways of creating the subset of a DataFrame:
 * Column selection
 * Row selection

#### Column selection
In machine learning algorithms, selecting the right set of features is an important task. Out of all
of the features that we may have, not all of them may be needed at a particular stage
of the algorithm. In python, feature selection is achieved by column selection.
A column may be retrieved by name, as in the following:
```python
df[['name', 'age']]
```
The positioning of a column is deterministic in a DataFrame. A column can be retrieved by 
its position as follows:
```python
>>> df.iloc[:,3]
0 True
1 False
2 False
```
