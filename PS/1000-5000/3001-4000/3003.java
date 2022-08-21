import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int[] cnt = new int[6];
		int[] arr = new int[]{1, 1, 2, 2, 2, 8};
		for (int i = 0; i < 6; i++) {
		    cnt[i] = scanner.nextInt();
		}
		
		for (int i = 0; i < 6; i++){
		    System.out.printf("%d ", arr[i] - cnt[i]);
		}
		
 	}
}