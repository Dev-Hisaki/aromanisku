package datetime;

public class ExampleSystemCurrentMilis {
    public static void main(String[] args) {
        long timeNow = System.currentTimeMillis();

        System.out.println("Waktu menunjukkan pukul " + timeNow + " WIB (dalam milisecond)");
    }
}
