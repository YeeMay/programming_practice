package patterns;

public class LeftPascalTriangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i, j, k, row;
		row = 5;
		//top
		for (i=1; i<=row; i++) {
			
			for (j=i; j<row; j++) {
				System.out.print("1");
			}
			
			for (k=1; k<=i; k++) {
				System.out.print("*");
			}
			
			System.out.println();
		}
		//below
		for (i=row; i>=1; i--) {
			
			for (j=i; j<=row; j++) {
				System.out.print("1");
			}
			
			for (k=1; k<i; k++) {
				System.out.print("*");
			}
			
			System.out.println();
		}

	}

}
