# Switch Statements

What if we want to check large amounts of cases quickly? Use switch statements.

```java
import java.util.Scanner;
public class Main {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       System.out.println("enter the month number");
       int month = sc.nextInt();
       switch(month){
           case 1:
               System.out.println("January");
               break;
           case 2:
               System.out.println("February");
               break;
           case 3:
               System.out.println("March");
               break;
           case 4:
               System.out.println("April");
               break;
           case 5:
               System.out.println("May");
               break;
           case 6:
               System.out.println("June");
               break;
           case 7:
               System.out.println("July");
               break;
           case 8:
               System.out.println("August");
               break;
           case 9:
               System.out.println("September");
               break;
           case 10:
               System.out.println("October");
               break;
           case 11:
               System.out.println("November");
               break;
           case 12:
               System.out.println("December");
               break;
           default:
               System.out.println("not valid month");
               break;
       }
   }
}
```

A switch case requires the switch case on the outside with cases inside.

### Fall through cases

Having cases without the break will link the case with the next case, similar to an OR operator.

It allows to run the same code for multiple cases.

For example, if we want to return number of days in a specific month number:

```java
import java.util.Scanner;
public class Main {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       System.out.println("enter the month number");
       int month = sc.nextInt();
       switch(month){
           case 1:
           case 3:
           case 5:
           case 7:
           case 8:
           case 10:
           case 12:
               System.out.println("The month has 31 days");
               break;
           case 4:
           case 6:
           case 9:
           case 11:
               System.out.println("This month has 30 days");
               break;
           case 2:
               System.out.println("This month has 28 or 29 days");
               break;
       }
   }
}
```