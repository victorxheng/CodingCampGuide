# Objects

### Object-Oriented Programming (OOP)

Reasoning about a program as a set of objects rather than actions.

### Object

A programming entity that contains state (data) and behavior (methods).

### State

A set of values (internal data) stored in an object

```java
class Chair{
    int numberOfLegs;
    boolean hasCushion;
    String nameOfPersonSittingOnTheChair;
    boolean isThisChairBroken;
}
```

### Behavior

Set of actions an object can perform, often reporting or modifying its internal state.

```java
class Chair {
    int numberOfLegs;//this is a state
    
    //these are behaviors
    public void breakChair(){
        numberOfLegs = 0;
    }
    public void growChair(){
        numberOfLegs = 4;
    }
}
```

### Client

The code that interacts with the class/objects of the class.

Think of this:
Chair is the class.
Each chair you create is the object.

Basically, classes are the blueprints, objects are what you make from the blueprints.

```java
class Main{
    public static void main(String[] args) {
        Chair remysChair = new Chair();
        Chair aaronsChair = new Chair();//different chair
        remysChair.growChair();
        aaronsChair.growChair();
        remysChair.breakChair();
        System.out.println("Aaron's chair has " + aaronsChair.legs + "legs");
        System.out.println("Remy's chair has " + remysChair.legs + "legs");
    }
}
```

