# LinkedLists

ArrayLists can be ineffective sometimes with all the expanding and extra memory of empty array slots.

Instead, we can use LinkedLists, which can add nodes quickly and insert quickly. However, accessing elements is slower.

### Linked List Definition

Stores a list of data using nodes that are linked.

### Implementation

For LinkedLists, we need to create a Node object.
```java
public class Node{
    //will store data and the next node.
    public int data;
    public Node next;
    
    public Node(int data, Node next){
        this.data = data;
        this.next = next;
    }
}
```

This is a Node. It stores data.

To create a LinkedList, we store data by creating a node for each data point and we link the next Node with the `public Node next;` variable.

