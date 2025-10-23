//Date due matrici 2x2 inizializzate con numeri casuali, calcoli la matrice somma.
//Ogni elemento della matrice somma corrisponde alla somma degli elementi, nella stessa posizione, delle due matrici di partenza.

public class Main26_10 {
    public static void main(String[] args) {
        int l = 2;
        int[][] matr1;
        int[][] matr2;
        int[][] matrsom = new int[l][l];

        Main26_10_randMatr retMatr = new Main26_10_randMatr();
        Main26_10_matrOps matrOps = new Main26_10_matrOps();

        matr1 = retMatr.randMatr();
        System.out.println();
        matr2 = retMatr.randMatr();

        matrOps.printMatr(matr1);
        System.out.println();
        matrOps.printMatr(matr2);

        matrsom = matrOps.sum(matr1, matr2);

        System.out.println();
        matrOps.printMatr(matrsom);

    }
}
