# Queues

You have a single machine, but you have a lot of tasks coming in.
Which task do you process first? One way to do it is to process the tasks
in the order they come in. The data structure that allows us to do this
is called a Queue.

### Definition

An ordered collection that allows adding the "back" element and removing the
"front" element, providing First-In, First-Out (FIFO) access. The first element
goes out first.

### Example

If I put the numbers 1, 2, 3, 4, 5 in a queue, and remove them in order, they
would be 1, 2, 3, 4, 5.

### Java Example

```java
public class Main {
    public static void main(String[] args) {
        Queue<String> lunchLine = new LinkedList<>();
        // Queue<String> lunchLine = new ArrayDeque<>();
        
        // add to a queue
        lunchLine.add("Remy");
        lunchLine.add("Aaron");
        
        // get the first element of a queue
        String remy = lunchLine.peek(); // should be "Remy"
        
        // remove the first element of a queue
        String remy2 = lunchLine.remove(); // removes "Remy" and returns "Remy"
        
        // check if queue is empty
        boolean empty = lunchLine.isEmpty(); // should be false
        
        // get size of queue
        int size = lunchLine.size(); // should be 1
    }
}
```

### Benefits

- A simple interface (not many methods)
- It is fast (all operations are constant time)

### Drawbacks

- Limited functionality (only First-In, First-Out)