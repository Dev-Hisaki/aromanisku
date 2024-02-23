package studiKasus2;

import java.util.Scanner;

public class vokalKonsonan {
    public static void main(String[] args) {
        Scanner inputUScanner = new Scanner(System.in);
        System.out.println("Masukan kata : ");
        String inputString = inputUScanner.nextLine();
        String downCase = inputString.toLowerCase();

        int vokal = num_vokal(downCase);
        int konsonan = num_konsonan(downCase);

        System.out.println("Jumlah huruf vokal      : " + vokal);
        System.out.println("Jumlah huruf konsonan   : " + konsonan);
        inputUScanner.close();
    }

    public static int num_vokal(String word){
        int jumlah_vokal = 0;

        for (int i = 0; i < word.length(); i++) {
            if(word.charAt(i) == 'a' || word.charAt(i) == 'i' || word.charAt(i) == 'u' || word.charAt(i) == 'e' || word.charAt(i) == 'o'){
                jumlah_vokal++;
            }
        }
        return jumlah_vokal;
    }

    public static int num_konsonan(String word){
        int jumlah_konsonan = 0;

        for (int i = 0; i < word.length(); i++) {
            if(word.charAt(i) != 'a' && word.charAt(i) != 'i' && word.charAt(i) != 'u' && word.charAt(i) != 'e' && word.charAt(i) != 'o'){
                jumlah_konsonan++;
            }
        }
        return jumlah_konsonan;
    }
}
