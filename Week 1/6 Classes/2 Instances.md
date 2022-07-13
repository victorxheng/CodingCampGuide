# Object Instances

### Instance

A specific creation of an object. It's basically an object that is created, and the instance is that specific object.

### To create a new instance of an object:

```java
class Main{
    public static void main(String[] args) {
        Chair remysChair = new Chair();
        //remysChar is an instance of a Chair
    }
}
```

### Fields

Variables inside an object that make up its state.

```java
class Chair{
    int numberOfLegs; //this is a field
    boolean occupied;//this is another field
}
```
### Instance method

Methods inside an object that operates on the object; object behaviors.

```java
class Chair{
    boolean occupied; //field
    public void pushOccupantOff(){//this is an instance method
        occupied = false;
    }
}
```

### Mutator

It is a type of instance method that changes the state of an object.

`pushOccupantOff()` is a mutator.

### Accessor

It is a type of instance method that returns a state without modifying it.

```java
class Chair{
    private boolean occupied;//state
    public boolean isTheChairOccupied(){
        //this is an accessor method
        return occupied;
    }          
}
```

**Note: `private` means that `occupied` cannot be accessed outside the class. For example, can't do `remysChair.occupied`, we have to do `remysChair.isTheChairOccupied();`. This is called encapuslation (we will get to)**

### `this` word

Gives you the instance of the current object.

```java
class Chair{
    private boolean occupied;//field
    public void setOccupied(boolean occupied){
        this.occupied = occupied;
    }
}
```

### Encapsulation

Hiding the implementation of details of an object from clients of the object

This means making fields private, for example `private boolean occupied`, and then adding accessors and modifiers.

```java
class Chair{
    private boolean occupied;//field
    //accessor aka getters
    public boolean getOccupied(){
        return occupied;
    }
    //modifier aka setters
    public void setOccupied(boolean occupied){
        this.occupied = occupied;
    }
}
```

What we just did above: we took `public boolean occupied` and made it private into `private boolean occupied`.
This hides `occupied` from the client. 

Now we can access `occupied` using `.getOccupied()` and `.setOccupied()`.

```java
class Main{
    public static void main(String[] args) {
        Chair remysChair = new Chair();
        remysChair.setOccupied(true);
        System.out.println(remysChair.getOccupied());
    }
}
```

Encapsulation is just this whole process of making fields hidden.


### Constructors

The method that initializes the state of new objects when they are created.

When you did `Chair remysChair = new Chair();`, the `Chair()` is the constructor being called to create remysChair.

### Creating Constructors

Suppose a chair has a state of occupation and number of legs. How would we set these fields when the object instance is initialized?

```java
class Chair{
    boolean isOccupied;
    int numberOfLegs;
    public Chair(boolean occupation, int legs){
        isOccupied = occupation;
        numberOfLegs = legs;
    }
}
```
How do we use this constructor to set chair values?

```java
class Main{
    public static void main(String[] args) {
        Chair remysChair = new Chair(false, 4);
    }
}
```

Doing this sets the `remysChair` instance to have `isOccupied = false` and `numberOfLegs = 4`

`System.out.println(remysChair.getOccupied());`

Prints out `false`.

