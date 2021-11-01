package patterns;

public class NumberPatternThree {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i, j, n=8, number;
		
		for(i=0; i<n; i++) {
			number=1;
			System.out.printf("%" + (n-i)*2 + "s", "");
			
			for(j=0; j<=i; j++) {
				System.out.printf("%4d", number);
				number = number*(i-j)/(j+1);
			}
			
			System.out.println();
		}

	}

}
