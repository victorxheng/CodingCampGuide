package javaCollections.stacksAndQueues;

public class MyStack {
    private Node firstNode;

    public void push(int value) {
        firstNode = new Node(value, firstNode);
    }

    public int peek() {
        return firstNode.data;
    }

    public int pop() {
        int temp = firstNode.data;
        firstNode = firstNode.next;
        return temp;
    }

    //write a method that returns whether the stack is empty or not empty, call it isEmpty()
    public boolean isEmpty(){
        return firstNode == null;
    }
}
