package furnitureStore;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class FurnitureMain {
    //furnitureStore package: credit to Aaron Wang

    private static int cash = 100;
    private static ArrayList<Furniture> inventory = new ArrayList();
    private static ArrayList<Furniture> store = new ArrayList<>();
    public static void main(String[] args) {
        store = new ArrayList<>(List.of(new RenyChair(), new WoodenChair(), new CushionChair(), new WorkTable(), new FoodTable(), new ProgrammingCouch(), new RecliningCouch()));
        int numberOfDays = 100;
        for (int i = 0; i < numberOfDays; i++) {
            System.out.println("Day " + (i+1));
            System.out.println("Your cash: $" + cash);
            System.out.println("Your Furniture: ");
            inventory.forEach(System.out::println);
            while (true){
                Scanner sc = new Scanner(System.in);
                System.out.println("Do you want to work or buy");
                String input = sc.nextLine();
                if (input.equalsIgnoreCase("work")){
                    work();
                    break;
                }
                else if(input.equalsIgnoreCase("buy")){
                    buy();
                    break;
                }
                else{
                    System.out.println("Invalid Input");
                }
            }
        }
        System.out.println("You earned " + cash + " cash in " + numberOfDays + " days.");
    }
    public static void work(){
        for(Furniture f:inventory){
            cash += f.getDefense();
            f.decreaseDurability();
            if(f.getDurability() <= 0){
                f.onDestroy();
            }
        }
    }
    public static void buy(){
        System.out.println();
        System.out.println("Here are the item(s) you can afford");

        int index = 0;
        ArrayList<Furniture> purchasableFurniture = new ArrayList<>();
        for(Furniture f : store){
            if(f.getCost() <= cash){
                System.out.println((index+1) + ". " + f);
                purchasableFurniture.add(f);
                index++;
            }
        }
        Scanner sc = new Scanner(System.in);
        if(purchasableFurniture.size() > 0) {
            while (true) {
                System.out.println("Type in the index of furniture you want to buy");
                int input = sc.nextInt();
                input--;
                if (input >= 0 && input < purchasableFurniture.size()) {

                    Furniture f= purchasableFurniture.get(input);
                    if(f instanceof RenyChair) inventory. add(new RenyChair());
                    else if(f instanceof WoodenChair) inventory.add(new WoodenChair());
                    else if(f instanceof CushionChair) inventory.add(new CushionChair());
                    else if(f instanceof FoodTable) inventory.add(new FoodTable());
                    else if(f instanceof WorkTable) inventory.add(new WorkTable());
                    else if(f instanceof RecliningCouch) inventory.add(new RecliningCouch());
                    else if(f instanceof ProgrammingCouch) inventory.add(new ProgrammingCouch());
                    cash -= purchasableFurniture.get(input).getCost();
                    break;
                }
                else {
                    System.out.println("Invalid! Try again");
                }
            }
        }
        else {
            System.out.println("You can't afford any furniture. Day passes.");

        }
    }
}
