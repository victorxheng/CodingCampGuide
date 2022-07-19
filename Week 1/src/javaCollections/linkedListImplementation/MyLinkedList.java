package javaCollections.linkedListImplementation;

public class MyLinkedList {
    //credit: jan
    private Node firstNode;

    public void add(int element) {
        if (firstNode == null) {
            firstNode = new Node(element, null);
        } else {
            Node node = firstNode;
            while (!(node.equals(null))) {
                node = node.next;
            }
            node.next = new Node(element, null);
        }
    }

    public int get(int index) {
        Node node = firstNode;
        for (int i = 0; i < index; i++) {
            node = node.next;
        }
        return node.data;
    }

    public void remove(int index) {
        Node node = firstNode;
        for (int i = 0; i < index - 1; i++) {
            node = node.next;
        }
        node.next = node.next.next;
    }

    public void clear() {
        firstNode = null;
    }

    public int size() {
        int i = 0;
        Node node = firstNode;
        while (!(node.equals(null))) {
            node = node.next;
            i += 1;
        }
        return i;
    }
}
