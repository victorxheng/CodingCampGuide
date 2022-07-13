package objectOrientedProgramming;

public class Chair
{
    //Credit: Matthew
    private int numberOfLegs;
    private boolean isOccupied;
    private double cost;

    public int getNumberOfLegs() {
        return numberOfLegs;
    }

    public boolean isOccupied() {
        return isOccupied;
    }

    public double getCost() {
        return cost;
    }

    public void setNumberOfLegs(int numberOfLegs) {
        this.numberOfLegs = numberOfLegs;
    }

    public void setOccupied(boolean occupied) {
        isOccupied = occupied;
    }

    public void setCost(double cost) {
        this.cost = cost;
    }

    public Chair(int legs, boolean occupation, double price){
        isOccupied = occupation;
        numberOfLegs = legs;
        cost = price;
    }
    public boolean canIBuy(double money){
        if(money>=cost){
            return true;
        }
        else{
            return false;
        }
    }
    public void destroyChair(){
        cost = 0;
        numberOfLegs = 0;
        isOccupied = false;
    }
    public void removeOccupant(){
        numberOfLegs = 2;
        isOccupied = false;
    }
}