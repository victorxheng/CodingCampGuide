# Static Methods

## What are static methods?

Static methods are called directly from the class. For example, if you would
like to convert an Array called arr to a `String`, you would call `Arrays.toString(arr)`.

This method is static because `Arrays` is a java class, not an instance of a class.

## Creating your own static method

To create your own static method, you would need the following:

```
public static <type> <methodName>(<parameters>) {
    // body of code will go here
    // `return something` to return a value
}
```

`public` means that this method can be accessed outside of this class

`static` means that this method is static, as defined before

`<type>` can be any type that is the output of the function. `void` is used
when there is no return value.

`<methodName>` can be any method name. It should be in pascalCase

`<parameters>` are the inputs to the method

## Example

Here is a method that returns the sum of two numbers. It has two integers
as input and a single integer as the return value.

```java
public class Sum {
    public int getSum(int a, int b) {
        // the return keyword lets you return a value
        return a + b;
    }
}
```