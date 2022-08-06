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


    //Credit below: andrew
    public boolean isPrime(int n) {

        if(n < 2) {
            return false;
        }

        for(int i = 2; i <= Math.sqrt(n); i++) {
            if(n % i == 0) {
                return false;
            }
        }

        return true;
    }

    public int sumOfPrimes() {
        int sum = 0;
        Node temp = firstNode;
        while(temp != null) {
            if(isPrime(temp.data)) {
                sum += temp.data;
            }

            temp = temp.next;
        }

        return sum;
    }

    public void moveToFront() {
        Node current = firstNode;

        while (current.next != null) {
            current = current.next;
        }

        Node newNode = new Node(current.data, firstNode);

        firstNode = newNode;

        remove(size() - 1);
    }

    public void printOut() {
        Node current = firstNode;
        while(current != null) {
            System.out.println(current.data);
            current = current.next;
        }
    }
}
