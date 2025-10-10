import java.io.*;

class Main
{
    public static void main(String[] args) {
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);

        int a, b, c, d, e1;
        int sum;

        System.out.println("primo numero");
        try{
            String aL = tastiera.readLine();
            a = Integer.parseInt(aL);
        }
        catch(Exception e){
            System.out.println("inserire un numero!");
            return;
        }

        System.out.println("secondo numero");
        try{
            String bL = tastiera.readLine();
            b = Integer.parseInt(bL);
        }
        catch(Exception e){
            System.out.println("inserire un numero!");
            return;
        }

        System.out.println("terzo numero");
        try{
            String cL = tastiera.readLine();
            c = Integer.parseInt(cL);
        }
        catch(Exception e){
            System.out.println("inserire un numero!");
            return;
        }

        System.out.println("quarto numero");
        try{
            String dL = tastiera.readLine();
            d = Integer.parseInt(dL);
        }
        catch(Exception e){
            System.out.println("inserire un numero!");
            return;
        }

        System.out.println("quinto numero");
        try{
            String eL = tastiera.readLine();
            e1 = Integer.parseInt(eL);
        }
        catch(Exception e){
            System.out.println("inserire un numero!");
            return;
        }

        sum = a + b + c + d + e1;
        System.out.println("somma: " + sum);
    }
}
