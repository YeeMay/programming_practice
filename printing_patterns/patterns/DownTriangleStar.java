package patterns;

public class DownTriangleStar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i, j, k, row;
		row = 5;
		
		for (i=row; i>=1; i--) {
			
			for (j=i; j<row; j++) {
				System.out.print("1");
			}
			
			for (k=1; k<=2*i-1; k++) {
				
				if (k==1 || i==row || k==2*i-1) {
					System.out.print("*");
				}
				
				else {
					System.out.print("2");
				}
			}
			System.out.println();
		}

	}

}
