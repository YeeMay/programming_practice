package patterns;

public class RepeatingAlphabet {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int letter = 65;
		
		for(int i=0; i<=5; i++) {
			for(int j=0; j<=i; j++) {
				System.out.print((char)letter + " ");
			}
			
			letter++;
			System.out.println();
		}

	}

}
