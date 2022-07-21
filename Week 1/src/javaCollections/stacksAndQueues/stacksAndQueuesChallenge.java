package javaCollections.stacksAndQueues;

import java.util.Stack;

public class stacksAndQueuesChallenge {
    public static void main(String[] args) {
        //create a stack
        Stack<Integer> stack = new Stack<Integer>();

        //add the following to the stack: 5, 6, 2, 4
        stack.push(5);
        stack.push(6);
        stack.push(2);
        stack.push(4);

        //loop through the stack and print out each element along with removing it from the stack.
        while(!stack.isEmpty()){
            System.out.println(stack.pop());
        }

        //next question was to add isEmpty to MyStack. Reference MyStack


        //create your own MyStack, add 5, 6, 2, 4, then loop through MyStack using a while loop and print
        //out each element until it is empty.

        //create a stack
        MyStack stack2 = new MyStack();

        //add the following to the stack: 5, 6, 2, 4
        stack2.push(5);
        stack2.push(6);
        stack2.push(2);
        stack2.push(4);

        //loop through the stack and print out each element along with removing it from the stack.
        while(!stack2.isEmpty()){
            System.out.println(stack2.pop());
        }

        //add 5 6 2 4 to a Queue, and loop through it to print it out while removing each element
        //use Java Queue


    }
}
