# Abstract Classes

Suppose we want our interface `Furniture` to have its own methods and fields as well for all our furniture to use!

Instead of an interface, we use an Abstract Class.

### Abstract Class

A Java class that cannot be instantiated, but instead serves as a superclass to hold common code and declare abstract behavior

In other words:

It's like a combination between interfaces and classes: You can declare methods
that subclasses are required to implement, but you can ALSO create its own methods.

For example, if `Furniture` is no longer an interface but an `abstract class`, it has the ability to have its own methods and fields.

However, you cannot do `Furniture f = new Furniture()` anymore as abstract classes cannot be instantiated. But, you can do `Furniture c = new Chair()`.

### Implementing an Abstract Class:

Let's make `Furniture` into an  `abstract class`

```java
public abstract class Furniture{
    protected int durability;
    protected int numberOfLegs;
    
    //we want different furniture to lose different durability on destroy
    public abstract void destroy();
    
    public void burn(){
        //burning furniture has negative durability for all furniture
        durability = -50;
    }
    
    public abstract void removeLegs(); //remove different legs for each subclass
    
    public void removeAllLegs(){
        numberOfLegs = 0;
    }
}
```

A few notes:

We must say `public abstract class` to make an abstract class.

We use `protected` to allow subclasses to access fields (but other classes can't).

We use `public abstract` in order to require a method for subclasses to implement.

We can create normal methods for `Furniture` as well that subclasses inherit.

```java
public class Chair extends Furniture{
    public Chair(int durability, int numberOfLegs){
        this.durability = durability;
        this.numberOfLegs = numberOfLegs;
    }
    public void destroy(){
        durability -= 10;
    }
    public void removeLegs(){
        numberOfLegs -= 2;
    }
}

public class Table extends Furniture {
    public Table(int durability, int numberOfLegs){
        this.durability = durability;
        this.numberOfLegs = numberOfLegs;
    }
    public void destroy(){
        durability -= 30;
    }
    public void removeLegs(){
        numberOfLegs -= 3;
    }
}
```

Now, let's use a main class to implement our classes.

```java
class Main{
    public static void main(String[] args) {
        Furniture[] onDisplay = new Furniture[4];
        onDisplay[0] = new Chair(100, 6);
        onDisplay[1] = new Table(50, 4);
        onDisplay[2] = new Chair(200, 12);
        onDisplay[3] = new Table(80, 2);
        
        for(int i =0; i< onDisplay.length; i++){
            onDisplay[i].destroy();
            onDisplay[i].burn();
            onDisplay[i].removeLegs();
            onDisplay[i].removeAllLegs();
            //we know all Furniture subclasses have these methods
            //because they are either required or inherited
        }
    }
}
```

That is the magic of abstract classes!
