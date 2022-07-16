package furnitureStore;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

public class FurnitureMain {
    private static int cash = 100;
    private static ArrayList<Furniture> yourInventory = new ArrayList<>();
    private static ArrayList<Furniture> store = new ArrayList<>();
    //store: add one of every furniture

    public static void main(String[] args) {
        store = new ArrayList<>(List.of(new RemysChair(), new WoodenChair(), new CushionedChair))
        //starting cash
        int numebrOfDays = 100;
        System.out.println("Welcome to the Furniture Store game!");
        for(int i = 0; i<numebrOfDays; i++){
            //what goes on each turn???
            System.out.println("Cash: " + cash);
            System.out.println("Day number: " + i);
            System.out.println();
            System.out.println("Your Furniture: ");
            yourInventory.forEach(System.out::println);
            System.out.println();

            //first ask work or buy, keep asking until they either say work or buy
            Scanner sc = new Scanner(System.in);
            while(true){
                System.out.println("Type work or buy");
                String input = sc.nextLine();
                if(input.equalsIgnoreCase("work")){
                    //work
                    work();
                    break;
                }
                else if(input.equalsIgnoreCase("buy")){
                    buy();
                    break;
                }
                System.out.println("Invalid Statement.");
                System.out.println();
            }
        }
        System.out.println("You earned " + cash + " cash in " + numebrOfDays + " days.");

    }
    public static void work(){
        //loop through all furniture
        for(Furniture f:yourInventory){
            cash += f.getDefense();
            f.decreaseDurability();
            if(f.getDurability() <= 0){
                f.onDestroy();
            }
        }
        //add money based on total defense points
    }
    public static void buy(){
        //loop through available furniture that they have enough money to buy
        System.out.println();
        System.out.println("Here are the items you can afford:");

        int index = 0;
        ArrayList<Furniture> purchasableFurniture = new ArrayList<>();
        for(Furniture f : yourInventory){
            if(f.getCost() <= cash){
                System.out.println((index+1) + ". " + f);
                purchasableFurniture.add(f);
                index++;
            }
        }
        Scanner sc = new Scanner(System.in);
        if(purchasableFurniture.size() > 0) {
            while (true) {
                System.out.println("Type in index of furniture you want to buy");
                int input = sc.nextInt();
                input--;

                if (input >= 0 && input < purchasableFurniture.size()){
                    //add the furniture to your inventory

                    Furniture f = purchasableFurniture.get(input);
                    if(f instanceof RemysChair) yourInventory.add(new RemysChair());
                    else if(f instanceof WoodenChair) yourInventory.add(new WoodenChair());
                    else if(f instanceof CushionedChair)


                    //take away the costs from their cash
                    cash -= purchasableFurniture.get(input).getCost();
                }
                else{
                    System.out.println("Invalid! Try again");
                }

            }
        }
        else{
            System.out.println("You can't afford any furniture. Day passes.");
        }
    }


}
