# Input Output

In Competitive Programming, you need to take in input data
and you solve questions by outputting output data.

## Input

The data that your code uses for a problem.

### Example

The problem is asking you to find the sum of all input numbers.

The input is:

`1 2 3 4 5`

Your job is to take in this input data, process it, and output 
the sum.

In this case, you output `15`

Previously, we used scanners to input in data:
```java
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //process sum
        int sum = 0;
        for(int i = 0; i < 5; i++){
            sum += sc.nextInt();
        }
        //output
        System.out.println(sum);
        
    }
}
```

### However, THIS IS SLOW!!! 

Instead, we use BufferedReader and StringTokenizer to process inputs.

We will also use PrintWriter to process output.

## The input output template

```java
import java.io.BufferedReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;
import java.io.*;

class Template {
    public static void main (String [] args) throws IOException {
        //this bufferedReader processes from a file called test.in
        //used for old USACO problems and for file processing
        //BufferedReader f = new BufferedReader(new FileReader("test.in"));
        
        //this buffered reader is for standard System input
        //used for USACO problems, CSES, etc
        BufferedReader f = new BufferedReader(new InputStreamReader(System.in));
        
        //this printwriter is for writing to a file.
        //used for old USACO output and testing on an actual file
        //PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("test.out")));
        
        //this printerwriter is for outputting to the console
        //used for USACO, CSES, etc
        PrintWriter out = new PrintWriter(new PrintStream(System.out));
        
        //buffered reader only reads line by line
        //use StringTokenizer to read each line of a buffered reader
        //and extracts the integers
        StringTokenizer st = new StringTokenizer(f.readLine());
        
        //do st.nextToken() to get the next data value
        //it is in the form of a string, must convert to int
        int N = Integer.parseInt(st.nextToken());
        
        //prints output to the PrintWriter
        out.println("Solution");
        //closes the PrintWriter for submission
        out.close();
    }
}
```

*Use this template to start off each problem*!

Copy and paste this template into your code.

## Input Processing

The code `BufferedReader f = new BufferedReader(new InputStreamReader(System.in));`
declares a buffered reader, which reads line by line.

The code  `StringTokenizer st = new StringTokenizer(f.readLine());`
takes in the bufferedReader's line by using `f.readLine()` and
splitting data up by spaces.

Use  `st.nextToken()` to get the next data point value. Remember
to convert to int/long.

## Output

The code `PrintWriter out = new PrintWriter(new PrintStream(System.out));`
creates a print writer object for output.

Type `out.println(2)` prints 2 to the output. Works the same way
as `System.out.println(2)` but is a lot faster.

Use `out.close()` to close the PrinterWriter at the end.


## Example

Suppose we want to output the sum of a series of numbers.

The input's line is one number that gives us how many numbers
to sum up.

The input's second line is a series of numbers separated by spaces.

Output the sum.

Input:

```
4
1 3 5 2
```

Output

`11`

Code for input/output (use template):


```java
import java.io.BufferedReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;
import java.io.*;

class Example {
    public static void main (String [] args) throws IOException {
        //reads input
        BufferedReader f = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(new PrintStream(System.out));

        //tokenizes first line of buffered reader
        StringTokenizer st = new StringTokenizer(f.readLine());
        //N represents first line, which is how many numbers we will process
        int N = Integer.parseInt(st.nextToken());
        
        //we want to process the second line of input (1 3 5 8 2)
        st = new StringTokenizer(f.readLine());
        int sum = 0;
        for(int i = 0; i < N; i++){
            sum += Integer.parseInt(st.nextToken());
        }
        
        out.println(sum);
        out.close();
    }
}
```
