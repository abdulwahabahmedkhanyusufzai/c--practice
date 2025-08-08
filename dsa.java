import java.util.Scanner;

public class dsa {
    public static int printAverage(int a,int b,int c){
        int average = (a+b+c)/3; 
        return average;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Prompt for first number
        System.out.print("Enter the first number: ");
        int a = sc.nextInt();

       
        sc.close();
        int result = printAverage(a,b,c);
        System.out.println(result);
    }

}
