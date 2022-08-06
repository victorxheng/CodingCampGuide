package javaCollections.setsAndMaps;

import java.lang.reflect.Array;
import java.util.*;

public class SetsAndMapsChallenge {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(List.of(1,2,3,2,3,2,4,5,5,6,6,7,3,2,4));
        printUnique(list);
        printRepeatingAmounts(list);
        printSortedUnique(list);
        printSortedRepetitions(list);
    }
    public static void printUnique(ArrayList<Integer> l){
        HashSet<Integer> set = new HashSet<>(l);
        System.out.println(set);
    }
    public static void printRepeatingAmounts(ArrayList<Integer> l){
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int element : l){
            if(map.containsKey(element)){
                map.put(element, map.get(element) + 1);
            }
            else{
                map.put(element,1);
            }
        }
        System.out.println(map);
    }
    public static void printSortedUnique(ArrayList<Integer> l){
        TreeSet<Integer> set = new TreeSet<>(l);
        System.out.println(set);
    }
    public static void printSortedRepetitions(ArrayList<Integer> l){
        TreeMap<Integer,Integer> map = new TreeMap<>();
        for(int element : l){
            if(map.containsKey(element)){
                map.put(element, map.get(element) + 1);
            }
            else{
                map.put(element,1);
            }
        }
        System.out.println(map);
    }
}
