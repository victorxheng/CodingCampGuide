# Object Inheritance

What is inheritance?

Well, objects are not a singular object; they can share features with other objects as well.

For example, you may have `Furniture` class.

And a `Chair` may share `Furniture` behaviours.

For example, both don't move. And both can be broken.

As `Chair` is part of  `Furniture `, `Chair` inherits `Furniture`.

`Furniture` can also have `Desk` or `Drawer`, which inherits `Furniture`.

### Inheritance

A programming technique that allows a derived class to extend the functionality of a base class, inheriting all of its states and behaviours.

Use the `extend` keyword to show inheritance, shown below:

Use   `protected` instead of `private` to allow a private variable to be accessible in the subclass.
```java
class Furniture{
    protected int durability = 100;
    public void destroy(){
        durability = 0;
    }
}
class Chair extends Furniture{
    //chair inherits durability and now has durability
    //Chair inherits destroy() and now can be destroyed
    public int getDurability(){
        return durability;//exists due to inheritance
    }
}
```

Now, lets use this in a client.

```java
class Main{
    public static void main(String[] args) {
        Furniture f = new Furniture();
        //creates a new Furniture with durability 100
        f.destroy(); //destroys that instance of furniture
        
        Chair c = new Chair();
        c.destroy();
        System.out.println(c.getDurability());
        //destroys chair prints durability of 0
        //Chair inherits all of Furniture (all fields and methods)
    }
}
```

### Superclass

The parent class in an inheritance relationship.

In the example above, `Furniture` is the superclass.

### Subclass

The child, or derived, class in an inheritance relationship.

In the example above, `Chair` is the subclass.

# Method Overriding

What if we want to modify an inherited behavior, like the `destroy()` method? We override the method!

### Override

To implement a new version of a method to replace code that would otherwise have been inherited from a superclass.

To override a method, add `@Override` right before the method:

```java
class Furniture{
    protected int durability = 100;
    public void destroy(){
        durability = 0;
    }
}
class Chair extends Furniture{
    //chair inherits durability and now has durability
    
    //we want to override the destroy() method
    
    @Override
    public void destroy(){//must have same parameters as the method
        durability -= 50; //chairs are more durable compared to other furniture
    }
}
```

The `destroy()` method is now overridden with our new method.

```java
class Main{
    public static void main(String[] args) {
        Furniture f = new Furniture();
        f.destroy(); //durability of f is 0
        Chair c = new Chair();
        c.destroy(); //durability of c is now 50
        //this is because we overrode destroy() in chair to take away 50 durability instead
    }
}
```

### Super keyword

The super keyword lets you call a constructor or method from the superclass.

Example:

```java
// let's assume all furniture have legs
public class Furniture {
    int numberOfLegs;
    int health;
    public Furniture(int numberOfLegs, int health) {
        // pretend this is super complicated and you don't
        // want to type this again
        this.numberOfLegs = numberOfLegs;
        this.health = health;
    }
    
    public void destroy() {
        health -= 50;
        numberOfLegs = 0;
    }
}

public class Chair extends Furniture {
    boolean isOccupied;
    public Chair(int numberOfLegs, int health, boolean isOccupied) {
        // this calls the Furniture(int numberOfLegs) constructor first
        // super must be the first statement
        super(numberOfLegs, health);
        // initialize other stuff here
        this.isOccupied = isOccupied;
    }
    
    @Override
    public void destroy() {
        // calling a method from the superclass
        super.destroy();
        isOccupied = false;
    }
}
```

### `Object` class

Everything inherits the `Object` class!

```java
class Main {
    //paramether Object o means that any object can be the passed as a parameter
    public static void myMethod(Object o) {
        //...
    }
}
```

Everything technically extends the `Object` class.

Everything has `.toString()`, etc, because `Object` has it.