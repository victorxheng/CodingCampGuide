package javaCollections.stacksAndQueues;

import java.util.Stack;

public class Main {
    public static void main(String[] args) {
            MyQueue a = new MyQueue();
            Stack<Integer> c = new Stack<>();
            c.push(5);
            c.push(5);
            c.push(5);
            c.push(7);
            printStack(c);

            a.add(5);
            a.add(6);
            a.add(2);
            a.add(4);

            printItemInMyQueue(a);

            System.out.println(a.isEmpty());

            System.out.println(a.remove());

            a.clear();

            System.out.println(a.isEmpty());

        }
        public static void printItemInMyQueue(MyQueue a){
                MyQueue b = new MyQueue();
                while(!a.isEmpty()) {
                        b.add(a.peek());
                        System.out.println(a.remove());
                }
                while (!b.isEmpty()){
                        a.add(b.remove());
                }
        }
        public static void printStack(Stack <Integer> a){
                Stack <Integer> b = new Stack<>();
                while(!a.isEmpty()) {
                        b.push(a.peek());
                        System.out.println(a.pop());
                }
                while (!b.isEmpty()) {
                        a.push(b.pop());
                }
        }
}
