import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int x = scan.nextInt();
		int n = scan.nextInt();
		
		for(int i = 0; i < n; i++)
		{
		    int a = scan.nextInt();
		    int b = scan.nextInt();
		    
		    x -= (a * b);
		}
		
		if(x == 0)
		    System.out.print("Yes");
		else
		    System.out.print("No");
	}
}