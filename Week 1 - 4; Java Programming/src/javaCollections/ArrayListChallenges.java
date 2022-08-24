package javaCollections;

import java.util.ArrayList;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ArrayListChallenges {
    //CREDIT: Jan
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        ArrayList<String> same1Array = new ArrayList<>(List.of("White", "Black", "zero", "Red", "Green", "5"));
        ArrayList<String> same2Array = new ArrayList<>(List.of("White", "Black", "zero", "Red", "Green", "5"));
        addColors(list);
        printEach(list);
        insertNumber(list, "5");
        replaceNumber(list, 3, "zero");
        System.out.println(findValue(list, "Green"));
        reverseArray(list);
        System.out.println(compareArrays(same1Array, same2Array));
    }

    public static void addColors(ArrayList<String> list) {
        list.add("Green");
        list.add("Red");
        list.add("Blue");
        list.add("Black");
        list.add("White");
        System.out.println(list);
    }

    public static void printEach(ArrayList<String> list) {
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
    }

    public static void insertNumber(ArrayList<String> list, String j) {
        list.add(0, j);
        System.out.println(list);
    }

    public static void replaceNumber(ArrayList<String> list, int index, String value) {
        list.remove(index);
        list.add(index, value);
        System.out.println(list);
    }

    public static int findValue(ArrayList<String> list, String value) {
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).equals(value)) {
                return i;
            }
        }
        return -1;
    }
    public static void reverseArray(ArrayList<String> list){
        ArrayList<String> reversedArray = new ArrayList<>();
        for(int i = list.size() - 1; i >= 0; i--){
            reversedArray.add(list.get(i));
        }
        System.out.println(reversedArray);
    }
    public static boolean compareArrays(ArrayList<String> sameArray1, ArrayList<String> sameArray2){
        if(sameArray1.size() != sameArray2.size()){
            return false;
        }
        for(int i = 0; i < sameArray1.size(); i++){
            if(!(sameArray1.get(i).equals(sameArray2.get(i)))) {
                return false;
            }
        }
        return true;
    }
}