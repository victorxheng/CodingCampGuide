package objectOrientedProgramming;

import java.util.Random;
import java.util.Scanner;

public class CardGameMain {
    public static void main(String[] args) throws InterruptedException {
        Player p1 = new Player(100);
        Player p2 = new Player(110);

        System.out.println("Welcome to the Best Card Game you have ever played!");
        Thread.sleep(3000);

        Scanner sc = new Scanner(System.in);

        System.out.println();
        System.out.println("Type in a player's name");
        String s1 = sc.nextLine();
        System.out.println("Type in other player's name");
        String s2 = sc.nextLine();

        Random r = new Random();
        if(r.nextDouble()< 0.5){
            System.out.println("Player 1 is " + s1);
            System.out.println("Player 2 is " + s2);
            System.out.println();
        }
        else{
            System.out.println("Player 1 is " + s2);
            System.out.println("Player 2 is " + s1);
            System.out.println();

            String temp = s1;
            s1 = s2;
            s2 = temp;
        }



        boolean isPlayerOnesTurn = true;

        Player currentPlayer;
        String currentName;
        Player opposingPlayer;
        String opposingName;

        while(true) {
            if(isPlayerOnesTurn){
                currentPlayer = p1;
                opposingPlayer = p2;
                currentName = s1;
                opposingName = s2;
                isPlayerOnesTurn = false;
            }
            else{
                currentPlayer = p2;
                opposingPlayer = p1;
                currentName = s2;
                opposingName = s1;
                isPlayerOnesTurn = true;
            }

            System.out.println();
            System.out.println(currentName +"'s turn!");
            System.out.println();
            Thread.sleep(1000);
            System.out.println("Choose a card number: ");
            currentPlayer.printCards();

            int selectedIndex;
            while (true) {
                System.out.println("Type the card number:");
                selectedIndex = sc.nextInt();
                if (selectedIndex >= 1 && selectedIndex <= 5) {
                    break;
                } else {
                    System.out.println("Number is out of range! Select a card, 1 through 5");
                }
            }

            currentPlayer.useCard(selectedIndex, opposingPlayer);
            System.out.println();
            System.out.println(currentName+" health: " + currentPlayer.getHealth());
            System.out.println(opposingName + " health: " + opposingPlayer.getHealth());
            System.out.println();

            if (opposingPlayer.getHealth() <= 0) {
                System.out.println(currentName + " wins! "+ opposingName + " loses!");
                break;
            }

            System.out.println("Type in anything to move on to the next turn.");
            sc.nextLine();
            sc.nextLine();



        }




    }
}
