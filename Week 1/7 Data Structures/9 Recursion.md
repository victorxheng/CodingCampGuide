# Recursion

What if you wanted to traverse a tree in order? Since a tree has both left
and right nodes, doing a simple for loop would not work. This is why you need
to use recursion

### Two problem solving techniques

#### Iteration (Iterative)

A programming technique in which you describe actions to be
repeated using a loop (for or while loop)

#### Recursion (Recursive)

A programming technique in which you describe actions to be
repeated using a method that calls itself.

### Iteration vs Recursion Example

```java
public class Main {
    // print numbers 1 to 10 using a for loop
    public static void iterativePrint() {
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
        }
    }
    
    // print numbers 1 to 10 using recursion
    public static void recursivePrint() {
        recursivePrintHelper(1);
    }
    private static void recursivePrintHelper(int n) {
        // base case, where the program ends
        if (n > 10) {
            return;
        }
        // do the task
        System.out.println(n);
        // recursive case, where the program calls itself
        recursivePrintHelper(n + 1);
    }
}
```

### Recursion with return values

```java
public class Main {
    public int peopleInLine() {
        if (isFirst()) {
            return 1;
        }
        return peopleInLine() + 1;
    }
}
```

### Recursion with more than one recursive call

```java
public class Main {
    public int fib(int n) {
        if (n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
}
```