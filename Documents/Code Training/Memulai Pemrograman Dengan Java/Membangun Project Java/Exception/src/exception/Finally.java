package exception;

public class Finally {
    public static void main(String[] args) {
        int[] a = new int[5];
        try {
            System.out.println("Akses elemen ke 4 : " + a[5]);
        } catch (ArrayIndexOutOfBoundsException e) {
            // TODO: handle exception
            System.out.println("Throw exception " + e);
        } finally {
            a[4] = 10;
            System.out.println("Nilai elemen terakhir " + a[4]);
        }
    }
}
