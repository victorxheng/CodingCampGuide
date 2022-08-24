# ArrayLists! Usage and Implementation

ArrayLists can be thought of like a normal list. You can add to an ArrayList, you can remove, replace, and do other operations.

However, all of these are implemented underneath using expanding arrays.

```java
public class Main{
    public static void main(String[] args) {
        ArrayList<Integer> name = new ArrayList<>();//how to create an arraylist
        //Creating: ArrayList, type: <Integer> or <String> etc, name, 
        // equals sign, new, ArrayList<>, constructor ()
        ArrayList<String> words = new ArrayList<>(List.of("Hello", "World"));
        //populating arrayList
        words.add("!");
        words.add(0, "Woohoo!");
        words.set(1, "Worlds");
        words.remove(0);
        System.out.println(words.get(0));
        System.out.println(words.indexOf("Hello"));//gets index
        words.forEach(System.out::println); //prints out each element on seperate lines
    }
}
```

