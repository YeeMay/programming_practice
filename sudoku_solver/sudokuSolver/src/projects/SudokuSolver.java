package projects;
import java.util.*;

public class SudokuSolver {

	public static boolean canBePlaced(int x, int y, int[][] box, int n) {
		//check each row and column
		for (int i = 0; i < n; i++) {
			if ((box[x][i] == box[x][y]) && i!=y) {
				return false;
			}
			
			if ((box[i][y] == box[x][y]) && i!=x) {
				return false;
			}			
		}
		
		//check each squared box
		int sqrt_n = (int)Math.sqrt(n);
		int starting_row = (x/sqrt_n) * sqrt_n;
		int starting_col = (y/sqrt_n) * sqrt_n;
		
		for (int i = starting_row; i < starting_row + sqrt_n; i++) {
			for (int j = starting_col; j < starting_col + sqrt_n; j++) {
				if ( ((i != x)||(j != y)) && box[i][j] == box[x][y]) {
					return false;
					
				}
			}
		}
		
		return true;
	}
	
	public static boolean solvingSudoku(int x, int y, int[][] box, int n) {
		//all "levels" or rows cleared 
		if (x == n) {
			return true;
		}
		
		//in case the box contains a value
		if (box[x][y] != 0) {
			if (y == n-1) {
				y = -1;
				x += 1;
			}
			
			if (!solvingSudoku(x, y+1, box, n)) {
				return false;
			}
			
			return true;
		}
		
		else {
			for (int i = 1; i <= n; i++) {
				box[x][y] = i;
				
				if (!canBePlaced(x, y, box, n)) {
					box[x][y] = 0;
					continue;
				}
				
				int next_x = x;
				int next_y = y;
				
				if (y == n-1) {
					next_y = -1;
					next_x += 1;
				}
				
				if (!solvingSudoku(next_x, next_y +1, box, n)) {
					box[x][y] = 0;
					continue;
				}
				
				return true;
			}
		}
		
		return false;
	}
	
	public static void displaySudokuBoard (int[][] box, int n) {
		System.out.println();
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				// %nd read decimal integer at least n character(s) width
				System.out.printf("| %2d |", box[i][j]);
			}
			
			System.out.println();
		}
		
		System.out.println();
	}
	
	public static void insertQuestion(int[][] box, int n) {
		int container = 1;
		
		while (container != 0) {
			Scanner scanInput = new Scanner(System.in);
			System.out.print("\n Row:");
			int x = scanInput.nextInt();
			System.out.print("\n Column:");
			int y = scanInput.nextInt();
			System.out.print("\n Value:");
			int val = scanInput.nextInt();
			
			if ( x > n || y > n || val > n || x < 1 || y < 1 || val < 1) {
				System.out.println("Wrong row, wrong column, or wrong value.");
			}
			
			else {
				box[x-1][y-1] = val;
				
				if (!canBePlaced(x-1, y-1, box, n)) {
					box[x-1][y-1] = 0;
					System.out.println("Value cannot be placed.");
				}
				
				else {
					displaySudokuBoard(box, n);
				}
			}
			
			System.out.println("Enter 0 to exit or any other integer to enter again.");
			container = scanInput.nextInt();
		}
	}
	
	public static void main(String[] args) {
		Scanner scan_n = new Scanner(System.in);
		System.out.print("Insert any number that can be square rooted: ");
		int n = scan_n.nextInt();
		
		int box[][] = new int[n][n];
		
		displaySudokuBoard(box, n);
		insertQuestion(box, n);
		
		if (solvingSudoku(0, 0, box, n)) {
			System.out.println("Sudoku solved!");
			displaySudokuBoard(box, n);
		}
		
		else {
			System.out.println("No solution found.");
			displaySudokuBoard(box, n);
		}
		
		scan_n.close();

	}

}
