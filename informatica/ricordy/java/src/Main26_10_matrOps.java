public class Main26_10_matrOps {
    private final int l = 2;
    public int[][] matrsom = new int[l][l];

    public int[][] sum(int[][] matr1, int[][] matr2) {
        for(int riga = 0; riga < l; riga++){
            for(int col = 0; col < l; col++){
                matrsom[riga][col] = matr1[riga][col] + matr2[riga][col];
            }
        }
        return matrsom;
    }

    public void printMatr(int[][] matr){
        for(int i = 0; i < matr.length; i++){
            for(int j = 0; j < matr[0].length; j++){
                System.out.print(matr[i][j] + " ");
            }
            System.out.println();
        }
    }

}
