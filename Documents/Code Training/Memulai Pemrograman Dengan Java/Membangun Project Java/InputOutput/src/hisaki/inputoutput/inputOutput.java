package hisaki.inputoutput;

import java.util.Scanner;

public class inputOutput {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Program penjumalahan sangat sederhana");
            System.out.print("Masukan Angka pertama : ");
            int value = scanner.nextInt();
            System.out.print("Masukan Angka kedua : ");
            int anotherValue = scanner.nextInt();
            int result = value + anotherValue;
            System.out.println("Hasilnya adalah : " + result);
            System.out.println("Masukan kata-kata : ");
            String value3 = scanner.next();
            System.out.println("This is your word(s) : " + value3);
        }
    }
}
