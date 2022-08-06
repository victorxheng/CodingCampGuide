package javaCollections.arrayListImplementation;

public class MyArrayList {
    int[] myArray;
    int currentIndex = 0;

    public MyArrayList(){
        myArray = new int[8];
    }

    public MyArrayList(int initialCapacity){
        myArray = new int[initialCapacity];
    }

    public void add(int element){
        if(currentIndex == myArray.length){
            //array is too small, expand array
            int[] tempArray = new int[myArray.length * 2];
            System.arraycopy(myArray, 0, tempArray, 0, currentIndex);
            myArray = tempArray;
        }
        myArray[currentIndex] = element;
        currentIndex++;
    }
    public int get(int index){
        return myArray[index];
    }
}
