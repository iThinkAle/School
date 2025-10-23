public class Main26_10_randMatr {
    private final int l = 2;

    public int[][] randMatr() {
        int[][] matrTemp = new int[2][2];
        for (int riga = 0; riga < l; riga++) {
            for (int col = 0; col < l; col++) {
                matrTemp[riga][col] = (int) (Math.random() * 10);
            }
        }
        return matrTemp;
    }



}
