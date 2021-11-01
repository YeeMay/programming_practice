package patterns;
import java.util.*;
public class AlphabetStar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i, j, n=5;
		
		for(i=0; i<=n; i++) {
			for(j=0; j<=n/2; j++) {
				if ((j==0 || j==n/2) && i!=0 || i==0 && j!=n/2 || i==n/2) {
					System.out.print("*");}
					else {
						System.out.print("1");
					}
				
			}
			System.out.println();
		}

	}

}
