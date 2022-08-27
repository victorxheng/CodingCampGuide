package arraysChallenges;

import java.util.Arrays;

public class ArraysReview {
    public static void main(String[] args) {
        //creating an array
        int[] integerArray = new int[15]; //creates new array length 15
        int[] numberArray = {43, 63, 2,4 ,6 }; //creates new array and populates it
        //indexes: [0] = 43, [1] = 63, etc

        //setting and accessing elements
        //Remember: indexes of arrays
        //Indexes are the position along the array
        //The first position is index 0

        int firstNumber = numberArray[0]; //gets the first element of the array, 43
        int lastNumber = numberArray[numberArray.length - 1]; //gives last element, 6
        //REMEMBER: THE LAST ELEMENT IS THE LENGTH OF THE ARRAY - 1
        numberArray[4] = 5; //changes element 4 (which is 6) to 5

        //printing the array
        System.out.println(Arrays.toString(numberArray));//REMEMBER TO IMPORT CLASS
        //Arrays.toString() will convert the array to a string
        String s = Arrays.toString(numberArray);

        //traversing an array: prints out each element of the array
        for(int i = 0; i<numberArray.length; i++){
            System.out.println(numberArray[i]);
        }
        //another way to traverse an array
        for (int element:numberArray) {
            System.out.println(element);
        }

        //Example: increase all elements of an array by 1
        for(int i = 0; i < numberArray.length; i++){
            numberArray[i] = numberArray[i] + 1; //or can just do numberArray[i]++;
        }
    }
}
