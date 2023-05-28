# Syntax
All functions in **Statistics in C** return a `float` output.

## Table of Contents
1. Getting the Length of an Array in C
2. Addition
3. Subtraction
4. Multiplication
5. Division

Can't find the other functions? Don't worry, I'll add them in here eventually.

## Getting the Length of an Array in C
The functions here take in arrays of data to compute. They also need the length of that array (the total number of data points/elements in your dataset).

To do that in C, you have to do the following:

```
int length_of_array = sizeof(dataset_array[]) / sizeof(dataset_aray[0])
```

In that example, the total length of your dataset is stored within the `length_of_array` variable.

You can use that variable whenever you are using your dataset within the function of your choice.

## Addition
```
add(float addends[], int number_of_addends)
```

The `add()` function takes in an array of **addends**. These should be in **float**.

## Subtraction
```
subtract(float subtrahends[], int number_of_subtrahends)
```

The `subtract()` function takes in an array of **subtrahends**. These should be in **float**.

## Multiplication
```
multiply(float factors[], int number_of_factors)
```

The `multiply()` function takes in an array of **factors**. These should be in **float**.

## Division
```
divide(float factors[], int number_of_factors)
```

The `factors()` function takes in an array of **factors**. These should be in **float**.
