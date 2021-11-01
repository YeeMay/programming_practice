package patterns;

public class DiamondShape {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int row, i, j, space = 1;
		row = 5;
		space = row - 1;
		
		for (i=1; i<=row; i++) {
			for (j=1; j<=space; j++) {
				System.out.print("0");
			}
			space--;
			
			for (j=1; j<=2*i-1; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
		
		space=1;
		for (i=1; i<=row-1; i++) {
			for (j=1; j<=space; j++) {
				System.out.print("2");
			}
			space++;
			
			for(j=1; j<=2*(row-i)-1; j++) {
				System.out.print("*");
			}
			System.out.println();
		}

	}

}
