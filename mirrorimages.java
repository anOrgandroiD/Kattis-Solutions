import java.util.*;

public class Main
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int cases = Integer.parseInt(scan.nextLine());
        if (cases > 100) return;
        char[][][] output = new char[cases][][];
        for (int i = 0; i < cases; i++)
        {
            String commands[] = scan.nextLine().split(" ");
            char[][] matrix = new char[Integer.parseInt(commands[0])][Integer.parseInt(commands[1])];
            char[][] mirrorMatrix = new char[Integer.parseInt(commands[0])][Integer.parseInt(commands[1])];
            for (int j = 0; j < matrix.length; j++)
            {
                matrix = InsertIntoMatrix(matrix, scan.nextLine(), j);
            }
            for (int j = 0; j < mirrorMatrix.length; j++)
            {
                mirrorMatrix = InsertIntoMirrorMatrix(mirrorMatrix, matrix, j);
            }
            output[i] = mirrorMatrix;
        }
        for (int i = 0; i < cases; i++)
        {
            System.out.println("Test " + (i + 1));
            for (int j = 0; j < output[i].length; j++)
            {
                for (int k = 0; k < output[i][j].length; k++)
                {
                   System.out.print(output[i][j][k]); 
                }
                System.out.println();
            }
        }
    }
    
    private static char[][] InsertIntoMatrix(char[][] matrix, String input, int rowPos) {
        for (int k = 0; k < matrix[rowPos].length; k++)
        {
            matrix[rowPos][k] = input.charAt(k);
        }
        return matrix;
    }
    
    private static char[][] InsertIntoMirrorMatrix(char[][] mirrorMatrix, char[][] matrix, int rowPos) {
        for (int k = 0; k < matrix[rowPos].length; k++)
        {
            mirrorMatrix[rowPos][k] = matrix[matrix.length - 1 -rowPos][matrix[rowPos].length - 1 -k];
        }
        return mirrorMatrix;
    }
}
