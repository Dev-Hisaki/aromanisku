package hisaki.accessmodifier;

public class kelasA {
    private int memberA = 5;
 
    public char memberB = 'A';
    public double memberC = 1.5;
 
    private int functionA() {
        return memberA;
    }
 
    public int functionB() {
        // Pemanggilan private member dan private function
        int hasil = functionA() + memberA;
        return hasil;
    }
    
    protected void methodC(){
        System.out.println("Percobaan access modifier!!!");
    }
}
