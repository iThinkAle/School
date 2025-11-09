package src10_11;

public class ContoCorrente {
    private double saldo;

    public void versa(double importo){
        saldo += importo;
    }

    public void preleva(double importo){
        saldo -= importo;
    }

    public double getSaldo(){
        return saldo;
    }

    public void stampaSaldo(){
        System.out.println("Saldo: " + saldo);
    }
}
