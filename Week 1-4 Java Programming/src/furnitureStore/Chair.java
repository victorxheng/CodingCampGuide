package furnitureStore;

public abstract class Chair implements Furniture {
    protected int defense;
    protected int durability;
    protected int cost;
    protected String occupant;

    public Chair(int defence, int durability, int cost, String occupant) {
        this.defense = defence;
        this.durability = durability;
        this.cost = cost;
        this.occupant = occupant;
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
