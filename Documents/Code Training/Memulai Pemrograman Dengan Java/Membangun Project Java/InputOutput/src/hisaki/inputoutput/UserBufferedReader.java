package hisaki.inputoutput;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class UserBufferedReader {
    public static void main(String[] args) {
        InputStreamReader streamReader = new InputStreamReader(System.in);  // Membaca input dari keyboard
        BufferedReader bufferedReader = new BufferedReader(streamReader);   // Memasukan input pada system

        System.out.println("Program Penjumlahan sangat sederhana");
        int val = 0;
        int val2 = 0;

        try {
            System.out.println("Masukan Angka Pertama : ");
            val = Integer.parseInt(bufferedReader.readLine());
            System.out.println("Masukan Angka Kedua : ");
            val2 = Integer.parseInt(bufferedReader.readLine());
        } catch (IOException e) {
            // TODO: handle exception
            e.getStackTrace();
        }

        int hasil = val + val2;
        System.out.println("Hasil : " + hasil);
    }
}
