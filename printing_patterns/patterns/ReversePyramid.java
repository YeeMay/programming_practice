package patterns;

public class ReversePyramid {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int row = 5;
		int i,j,k;
		
		for (i=0; i<row; i++) {
			
			for (j=0; j<=i; j++) {
				System.out.print("1");
			}
			
			for (k=1; k<=row-i; k++) {
				System.out.print("* ");
			}
			
			System.out.println();
		}

	}

}
