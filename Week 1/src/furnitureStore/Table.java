package furnitureStore;

public abstract class Table implements Furniture{
    protected int defense;
    protected int durability;
    protected int cost;
    protected int numberOfLaptops;

    public Table(int defence, int durability, int cost, int numberOfLaptops) {
        this.defense = defence;
        this.durability = durability;
        this.cost = cost;
        this.numberOfLaptops = numberOfLaptops;
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
