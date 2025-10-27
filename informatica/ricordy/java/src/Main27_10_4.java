//Dato un array di 5 interi, popolarlo e poi stampare il minimo
package javas.main.src;

import java.io.*;

public class Main27_10_4{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));
        int L = 5;
        int min = 10000000;

        for(int i = 0; i < L; i++){
            int temp = 0;
            try {
                System.out.println("inserire numero");
                temp = Integer.parseInt(tastiera.readLine());
            } catch (Exception e) {
                System.out.println(e);
            }
            if(temp < min){
                min = temp;
            }
        }

        System.out.println("il minimo è " + min);

    }
}