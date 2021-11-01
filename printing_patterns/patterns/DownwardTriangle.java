package patterns;

public class DownwardTriangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int row = 9;
		
		for (int i=row; i>0; i--) {
			
			for (int j=1; j<=i; j++) {
				System.out.print("* ");
			}
			
			System.out.println();
		}
		

	}

}
