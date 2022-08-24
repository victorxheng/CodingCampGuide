# Collections interface

ArrayList is part of the Collections framework. We also have data structures such as sets, queues, stacks, and more. We will get to all of these.

### Collection

A collection is any group of individual objects which are represented as a single unit.

In Java, there is a Collection framework that holds all the different collection classes and interfaces, such as sets, queues, stacks, etc.

There are two main root interfaces: Collections and Maps.

![img.png](img.png)

### Collection Interface Useful Methods

All Collections have these methods.

`add(element)` adds an element to the collection

`addAll(collection)` adds all elements from a collection to this collection

`clear()` clears collection

`contains(element)` returns true if collection contains the element

`remove(element)` removes the element

`size()` returns the size of the collection

`toArray()` returns an array with all collection elements


### Different Collections you will use 

`ArrayList<>` resizeable array

`LinkedList` Stores a list of elements in object containers called Nodes, which are linked together

`HashSet<>` Set implementation that uses a Hash Table to look up values instantly, however, order is not held (no indexes). They store unique values

`TreeSet<>` A set that is implemented using a binary search tree. Not indexed, but has order.

`HashMap<>`  Maps use a key to lookup a value. Hashmaps use Hash tables to store these maps.

`TreeMap<>` Map that is implemented using a binary search tree.

### Node

A single element of a structure such as a LinkedList. Each node contains one data value.

### Hash

A function that converts one value to another. The output of the Hash function is smaller than the input (allowing you to store it.)

HashMaps store strings by converting the string into numbers that can be used for lookup.

We use hashing to instantaneously lookup values, converting non-numerical values into numerical lookup values.

