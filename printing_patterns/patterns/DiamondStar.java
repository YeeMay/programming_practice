package patterns;

public class DiamondStar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i, j, k;
		int row = 5;
		
		for (i=1; i<=row; i++) {
			
			for (j=row; j>i; j--) {
				System.out.print("1");
			}
			
			System.out.print("*");
			
			for (k=1; k<2*(i-1); k++) {
				System.out.print("2");
			}
			
			if (i==1) {
				System.out.println();
			}
			
			else {
				System.out.println("*");
			}
		}
		
		for (i=row-1; i>=1; i--) {
			
			for (j=row; j>i; j--) {
				System.out.print("3");
			}
			System.out.print("*");
			
			for (k=1; k<2*(i-1); k++) {
				System.out.print("4");
			}
			
			if (i==1) {
				System.out.println();
			}
			
			else {
				System.out.println("*");
			}
		}

	}

}
