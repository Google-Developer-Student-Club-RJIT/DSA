import java.util.Scanner;
public class largestofthreenum 
{  
public static void main(String[] args)   
{  
int n1, n2, n3, largest, temp;  

Scanner sc = new Scanner(System.in);  
//reading input from the user  
System.out.println("Enter number 1");  
n1 = sc.nextInt();  
System.out.println("Enter number 2");  
n2 = sc.nextInt();  
System.out.println("Enter number 3");  
n3 = sc.nextInt();   
temp=n1>n2?n1:n2;  

largest=n3>temp?n3:temp;  
System.out.println("The largest number is: "+largest);  
}  
}  
