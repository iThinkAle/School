package src03_11;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        //primo esercizio
        primo_esercizio primo = new primo_esercizio();

        System.out.println("inserire primo intero");
        int a_primo = Integer.parseInt(tastiera.readLine());
        System.out.println("inserire secondo intero");
        int b_primo = Integer.parseInt(tastiera.readLine());
        System.out.println("prodotto tra a e b: " + primo.prod(a_primo, b_primo));


        //secondo esercizio
        secondo_esercizio secondo = new secondo_esercizio();

        System.out.println("inserire raggio");
        double r_secondo = Double.parseDouble(tastiera.readLine());

        System.out.println("area del cerchio con raggio " + r_secondo + ": " + secondo.area(r_secondo));


        //terzo esercizio
        terzo_esercizio terzo = new terzo_esercizio();

        for(int i = 0; i < terzo.n; i++){
            System.out.println("inserire nome " + (i+1));
            String nome = tastiera.readLine();
            System.out.println("inserire età");
            int eta = Integer.parseInt(tastiera.readLine());

            terzo.getNomiEta(nome, eta);
        }
        
        System.out.println("nome del più giovane: " + terzo.returnNomeMin());


        //quarto esercizio
        quarto_esercizio quarto = new quarto_esercizio();

        for(int i = 0; i < 5; i++){
            System.out.println("inserire età");
            int n = Integer.parseInt(tastiera.readLine());

            quarto.getInteri(n);
        }

        System.out.println("media: " + quarto.med);

    }
}
