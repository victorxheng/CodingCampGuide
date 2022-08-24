# Java Overloading

### Overloading

You have the same method name but different parameters.

```java
class Chair{
    public int numberOfLegs;
    public void addLeg(){
        numberOfLegs++;
    }
    public void addLeg(int amount){
        numberOfLegs += amount;
    }
}
```

It is used for different forms of the same method. So someone can either `addLeg()` or `addLeg(4)` if they want to add more than 1 leg.

```java
class Main{
    public static void main(String[] args) {
        Chair c = new Chair();
        c.numberOfLegs = 5;
        c.addLeg(); //adds one leg
        c.addLeg(4); //adds four legs
    }
}
```

### Method Overloading

Methods with the same name but different parameters.

Example is above.

### Constructor Overloading

Having multiple constructors with different parameters.

```java
class Chair{
    private int numberOfLegs;
    private boolean isOccupied;
    
    public Chair(){//constructor 1
        numberOflegs = 4;
        isOccupied = false;
    }
    public Chair(int legs){//constructor 2
        numberOfLegs = legs;
        isOccupied = false;
    }
    public Chair(int legs, boolean occupied){//constructor 3
        numberOfLegs = legs;
        isOccupied = occupied;
    }
}
```

Now, we can use these multiple constructors to create Chairs in different ways.

```java
class Main{
    public static void main(String[] args) {
        Chair c1 = new Chair();//uses constructor 1
        //c1: numberOfLegs = 4, isOccupied = false
        Chair c2 = new Chair(2);//uses constructor 2
        //c2: number of legs = 2, isOccupied = false
        Chair c3 = new Chair(3, true);//uses constructor 3
        //c3: number of legs = 3, isOccupied = true
    }
}
```