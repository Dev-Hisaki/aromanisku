package casting;

public class Main {
    public static void main(String[] args) {
        Kucing anggora = new Kucing();

        Hewan hewan = anggora;          // Implicit Upcasting
        hewan = (Hewan) anggora;        // Explicit Upcasting

        Hewan hewan2 = new Kucing();
        ((Kucing) hewan2).meow();       // Downcast hewan ke kucing
    }
}
