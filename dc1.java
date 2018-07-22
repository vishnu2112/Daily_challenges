import java.util.Scanner;
import java.util.*;
import java.lang.*;
import java.io.*;

public class main {
	
	public static void main (String args[]) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		
        
      
        int fibo[]=new int[n+1];
        fibo[0] = 0;
        fibo[1] = 1;      
        int sum = fibo[0] + fibo[1];
        
        for (int i=2; i<=n; i++)
        {
            fibo[i] = fibo[i-1]+fibo[i-2];
            sum += fibo[i];
        }
        
        System.out.println(sum);
      

	}
}
