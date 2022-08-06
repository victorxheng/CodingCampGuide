# Stacks

*A tree in computer science has a root node with left and right children.*

What if you wanted to visit every node in a tree? You would want a data
structure that easily lets you view the last item that you visited. This is where
stacks come in.

### Definition

An ordered collection that allows adding and removing the "top" element,
providing Last-In, First-Out (LIFO) access. 

### Example

Say for example, you had a stack, and you put the numbers 1, 2, 3, 4, 5.
When you start removing the numbers, it would be 5, 4, 3, 2, 1.

### Java Example

```java
public class Main {
    public static void main(String[] args) {
        // NOTE: Stack is not part of Collections framework
        // You should use a Deque instead
        Stack<Integer> numbers = new Stack<>();
        
        // adding to a stack
        numbers.push(1);
        numbers.push(2);
        numbers.push(3);
        numbers.push(4);
        numbers.push(5);
        
        // get the top number
        int five = numbers.peek(); // should be 5 because it is last
        
        // remove the top number
        int secondFive = numbers.pop(); // removes 5, and returns 5
        
        // check if stack is empty
        boolean isStackEmpty = numbers.empty();
        
        // get size of stack
        int size = numbers.size();
    }
}
```

### Benefits

- It is very fast to insert and remove an element
- Hides the implementation details, simple interface
- Space efficient

### Drawbacks

- Limited functionality