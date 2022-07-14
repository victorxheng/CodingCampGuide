# Polymorphism!

Remember doing `Object c = new Chair();`? Polymorphism is a powerful way to treat different objects part of the same superclass the same way.

### Polymorphism (Definition)

The ability for the same code to be used with several different types of objects and for the code to behave differently depending on the actual type of object used.

### Polymorphism (In real life)

Occuring in several different forms.

In java, these objects of a superclass can occur in different forms, but we want them to have the same method names that behave differently.

### Examples

```java
class Furniture{ //superclass
    int durability = 100;
    public void destroy(){
        durability = 0;
    }
    
    //availible to all furniture
    public void buildFurniture(){
        durability = 150;
    }
}
class Chair extends Furniture{ //subclass of Furniture
    @Override
    public void destroy(){
        durability = 50;
    }
    
    //only availible to Chair objects
    public void buildChair(){
        durability = 100;
    }
}
class Table extends Furniture{ //subclass of Furniture
    @Override
    public void destroy(){
        durability = 25;
    }
    
    //only availible to Table objects
    public void buildTable(){
        durability = 50;
    }
}
```

Now, for the client class to implement polymorphism:

```java
class Main{
    public static void main(String[] args) {
        Furniture c = new Chair(); //Furniture thats created as a Chair
        Furniture t = new Table(); //Furniture thats created as a Table
        //This is polymorphism!
        
        //WHAT CAN C AND T DO????
        c.buildChair(); //CANNOT DO: WILL NOT WORK, ONLY FOR CHAIR OBJECTS
        c.destroy(); //destroys to 50 because it uses overridden .destroy()
        t.buildTable(); //DOES NOT WORK! ONLY FOR TABLE OBJECTS, NOT FURNITURE
        t.destroy(); //destroys to 25 because Table overrides .destroy()
    }
}
```

### Constructors in polymorphism

Constructors are not polymorphic; `Furniture c = new Chair()`, the `Chair` constructor is the one being called, not `Furniture`



