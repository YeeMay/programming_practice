package patterns;

public class RightPascalTriangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i, j, row;
		row = 5;
		
		for (i=0; i<row; i++) {
			
			for (j=0; j<=i; j++) {
				System.out.print("* ");
			}
			
			System.out.println();
		}
		
		for (i=row-1; i>0; i--) {
			
			for (j=0; j<i; j++) {
				System.out.print("* ");
			}
			
			System.out.println();
		}

	}

}
