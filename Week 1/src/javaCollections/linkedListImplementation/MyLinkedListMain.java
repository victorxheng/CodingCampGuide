package javaCollections.linkedListImplementation;

public class MyLinkedListMain {
    public static void main(String[] args) {

        //credit: Andrew
        
        MyLinkedList l = new MyLinkedList();


        l.add(1);
        l.add(3);
        l.add(4);
        l.add(5);
        l.add(7);

        l.moveToFront();
        System.out.println(l.sumOfPrimes());

        System.out.println(l.get(0));

        l.printOut();
        System.out.println(l.size());
    }
}
