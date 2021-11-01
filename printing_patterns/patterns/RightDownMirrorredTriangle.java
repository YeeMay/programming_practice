package patterns;

public class RightDownMirrorredTriangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i, j, k, row;
		
		row = 5;
		
		for (i=row; i>=1; i--) {
			
			for (j=row; j>i; j--) {
				System.out.print("1");
			}
			
			for (k=1; k<=i; k++) {
				System.out.print("*");
			}
			
			System.out.println();
		}

	}

}
