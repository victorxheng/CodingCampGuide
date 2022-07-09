# Non-Static Methods

Non-Static methods have to be called through an object
instance instead of a class. Some common non-static methods include
getting input from a Scanner

```java
public class ScannerInput {
    public static void main(String[] args) {
        // initialize the scanner
        Scanner sc = new Scanner(System.in);
        System.out.print("Input number: ");
        // nextInt is a non-static method because it had
        // to be called through the scanner object, not Scanner
        int num = sc.nextInt();
    }
}
```

## Other Examples of Non-Static Methods

- `System.out.println` where `println` is a non-static method of `System.out`
- `charAt` and `indexOf` of Strings
- `get`, `set`, etc from `ArrayList`
- And many more...

## Creating your own non-static method

To create a non-static method you omit the `static` keyword. For example

```java
public class Thing {
    public static void main(String[] args) {
        Thing t = new Thing();
        // calling my non-static method
        t.doStuff();
    }
    
    // Here, I create the non-static method. Notice how I
    // did not have the word `static`
    public void doStuff() {
        System.out.println("Did some stuff");
    }
}
```