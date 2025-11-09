//Scrivere il programma che prende in input il nome e l'età di 5 alunni e stampa il nome del più giovane
package src03_11;

import java.io.*;

public class terzo_esercizio {
    public final int n = 5;
    public int etaMin = 10000000;
    public String nomeMin = "";
    public String[] nomi = new String[n];
    public int[] arrayEta = new int[n];

    public void getNomiEta(String nome, int eta){
        for(int i = 0; i < n; i++){
            nomi[i] = nome;
            arrayEta[i] = eta;

            if(eta < etaMin){
                nomeMin = nome;
                etaMin = eta;
            }
            else{
                continue;
            }
        }
    }
    
    public String returnNomeMin(){
        return nomeMin;
    }
}