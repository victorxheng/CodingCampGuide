package javaCollections.stacksAndQueues;

public class MyQueue {
    private Node firstNode;
    private Node lastNode;

    public void add(int value) {
        if (lastNode == null) {
            // if queue is empty
            lastNode = new Node(value, null);
            firstNode = lastNode;
        } else {
            lastNode.next = new Node(value, null);
            lastNode = lastNode.next;
        }
    }

    public int peek() {
        return firstNode.data;
    }

    public int remove() {
        int temp = firstNode.data;
        firstNode = firstNode.next;
        if (firstNode == null) {
            lastNode = null;
        }
        return temp;
    }

    public boolean isEmpty(){
        if(firstNode == null){
            return true;
        }
        return false;
    }
    public void clear(){
        firstNode = null;
        lastNode = null;
    }

}
