//data una squadra di 10 giocatori, calcolare e stampare gli attaccanti

import java.io.*;

class Main15_10{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        int n = 10;
        int att = 0;
        String ruolo = "";

        for(int i = 0; i < n;i++){
            System.out.println("inserisci un ruolo (att, cc, dc, por)");
            try {
                ruolo = tastiera.readLine();
            } catch (Exception e) {
                System.out.println("inserisci un valido ruolo");
                break;
            }

            if(ruolo.equals("att")){
                att = att + 1;
            }
            else{
                continue;
            }
        }

        System.out.println("gli attaccanti sono " + att);

    }
}