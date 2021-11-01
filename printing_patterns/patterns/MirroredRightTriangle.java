package patterns;

public class MirroredRightTriangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n = 5;
		int i, j, k;
		
		for (i=0; i<=n; i++) {
			
			for (j=1; j<=n-i; j++) {
				System.out.print("1");
			}
			
			for (k=0; k<=i; k++) {
				System.out.print("*");
			}
			
			System.out.println();
		}

	}

}
