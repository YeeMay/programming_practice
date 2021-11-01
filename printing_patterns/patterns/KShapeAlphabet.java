package patterns;

public class KShapeAlphabet {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int alphabet = 65;
		for(int i=3; i>=0; i--) {
			//int alphabet = 65;
			for(int j=0; j<=i; j++) {
				System.out.print((char)(alphabet + j) + " ");
			}
			System.out.println();
		}
		
		for(int i=0; i<=3; i++) {
			//int alphabet = 65;
			for(int j=0; j<=i; j++) {
				System.out.print((char)(alphabet + j) + " ");
			}
			System.out.println();
		}

	}

}
