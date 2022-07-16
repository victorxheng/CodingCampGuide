package furnitureStore;

import java.util.ArrayList;

public abstract class Couch implements Furniture{
    protected int durability;
    protected int cost;
    protected int defense;
    protected ArrayList<String> occupants;

    public Couch(int durability, int cost, int defence, ArrayList<String> occupants) {
        this.durability = durability;
        this.cost = cost;
        this.defense = defence;
        this.occupants = occupants;
    }

    public int getCost(){
        return cost;
    }
    public int getDurability(){
        return durability;
    }
    public int getDefense(){
        return defense;
    }
    public void decreaseDurability(){
        durability--;
    }
    public void onDestroy(){
        defense = 0;
    }
    @Override
    public String toString() {
        return getClass().getSimpleName() + ":"
                + "\n  Cost: " + cost
                + "\n  Durability: " + durability
                + "\n  Defense: " + defense;
    }
}