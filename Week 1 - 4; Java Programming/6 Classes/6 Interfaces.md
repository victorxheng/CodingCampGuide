# Interfaces

What if you want a superclass's subclass to have to override a method? In otherwords, `Furniture`'s `destroy()` method must be overridden by all subclasses?

These requirements are called `interface`s.

### Interface

A type that consists of a set of method declarations.

When classes promise to implement an interface, you can treat those classes similarly in your code.

So if `Furniture` was an interface, it would consist only of method declarations that `Chair` and `Table` must implement.

```java
public interface Furniture{
    void destroy();
    void build();
    void print();
    int getLegs();
    int getDurability();
}
```

So subclasses will have to implement all interface method declarations:
(Uses `implements` keyword)

```java
class Chair implements Furniture{
    int durability = 100;
    int numberOfLegs = 4;
    public void destroy(){
        durability = 0;
    }
    public void build(){
        durability = 100;
    }
    public void print(){
        System.out.println(durability + " " + numberOfLegs);
    }
    public int getLegs(){
        return numberOfLegs;
    }
    public int getDurability(){
        return durability;
    }
}
class Table implements Furniture{
    //code down here must also implement all Furniture interface methods
}
```

### Benefits of interfaces

When classes implement an interface, a type of hierarchy similar to inheritance is formed. 
The interface serves as a parent class with requirements subclasses implement.

A major benefit is that we can use them to achieve polymorphism. 

```java
class Main{
    public static void main(String[] args) {
        Furniture[] furnitures = new Furniture[4];
        furnitures[0] = new Chair();
        furnitures[1] = new Table();
        furnitures[2] = new Drawer();
        furnitures[3] = new Bed();
        printCatalog(furnitures);
    }
    public static void printCatalog(Furniture[] catalog){
        System.out.println("Catalog is: ");
        for(int i = 0; i < catalog.length; i++){
            System.out.println(catalog[i]);//will print out each item in the catalog
        }
    }
}
```
Chairs, tables, Drawers, Beds, must all implement required interface methods from `Furniture`.

If `Furniture` requires a `.destroy()` method, we know that `Chair` (which implemenets `Furniture`) has `.destroy()`:

```java
public static void destroyCatalog(Furniture[] catalog){
    for(int i = 0; i< catalog.length; i++){
       catalog[i].destroy(); //we know Furniture objects have .destroy()  
    }
}        
```

