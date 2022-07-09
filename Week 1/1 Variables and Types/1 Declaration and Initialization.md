# Variables and Types

### Variables

A variable stores data (numbers, letters, strings, arrays (like grids), etc)

`int year;`

### Types

The type of data that the variable represents

`String` `boolean` `int` etc


### Declaration

Where the variable is created. 
Shown by typing the type name followed by the variable name

`int variable;`

### Initialization

Where the variable's value is set.

`variable = 10;` or `int variable = 10;`

---
# Implementation

```java
public class Main{
    public static void main(String[] args) {
        int lastYear = 2021;//declaration and initialization
        int thisYear; //declaration
        thisYear = 2021;//initialization
        String hello = "Hello World!";
    }
}
```

### Reference Type and Object Initialization

Reference types AND Objects initialize with type, name, equals sign, then "new", type, then parenthesis and parameters.

`Object obj = new Object();`

`Scanner sc = new Scanner(System.in);`

### Naming Convention

All variable names are in pascalCase: first letter lower case, all words after start upper case.
`int helloWorld;`

All primitive types such as `int` are lower case.

All object types such as `Object` `Scanner` `ArrayList` are CamelCase: where all first letters are capitalized.