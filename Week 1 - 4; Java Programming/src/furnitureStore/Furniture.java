package furnitureStore;
public interface Furniture {
    int getCost();
    int getDurability();
    int getDefense();
    void decreaseDurability();
    void onDestroy();
}