# If Statements

What if we want to run code under a true/false condition? We would use if statements

### Conditional

A condition of either being true or false.

### If statement

Runs code if the conditional (true or false) is true.

```java
class Main{
    public static void main(String[] args) {
        if(true){
            System.out.println("The code runs this statement");
        }
        int i = 5;
        if(i > 0){
            System.out.println("i is greater than 0");
        }
    }
}
```

### Else statement

If the conditional in the initial if statement is not true, the else statement is run. Requires an if-statement before it.


```java
class Main{
    public static void main(String[] args) {
        int grade = 95;
        if(grade > 90){
            System.out.println("Your grade is above an A");
        }
        else{ //else statement is run
            System.out.println("Your grade is below an A");
        }
    }
}
```

### Else if statement

If the if-statement conditional is not true, an else if statement can be called after, which will run code
based on another defined conditional. 

Else-if statements must follow other else-if statements or if-statements. Else-statements cannot go in front of
else-if statements.


```java
class Main{
    public static void main(String[] args) {
        int grade = 95;
        if(grade >= 90){
            System.out.println("Your grade is an A");
        }
        else if(grade >= 80){
            System.out.println("Your grade is a B");
        }
        else if(grade >= 70){
            System.out.println("Your grade is a C");
        }
        else{ //else statement is run
            System.out.println("Your grade is below a C");
        }
    }
}
```

### Single line if statements

If you only want to run one line of code after your if statement, you do not need to define a scope using curly brackets (`{}`).


```java
class Main{
    public static void main(String[] args) {
        int grade = 95;
        if(grade >= 90) System.out.println("Your grade is an A");
        else if(grade >= 80) System.out.println("Your grade is a B");
        else if(grade >= 70) System.out.println("Your grade is a C");
        else System.out.println("Your grade is below a C");
    }
}
```

### Case

Each if statement can be called a case. For example, if the grade is above 90, this is a case. Many if statements
together form multiple cases.