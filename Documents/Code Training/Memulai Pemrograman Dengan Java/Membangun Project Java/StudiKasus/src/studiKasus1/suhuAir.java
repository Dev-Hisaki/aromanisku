package studiKasus1;

import java.util.Scanner;

public class suhuAir {
    public static void main(String[] args) {
        int temperature;

        System.out.println("Silahkan masukan input suhu dalam integer : ");

        Scanner inputUser = new Scanner(System.in);
        temperature = inputUser.nextInt();

        if(temperature < 0){
            System.out.println("BEKU");
        }
        if(temperature >= 0 && temperature <= 100){
            System.out.println("CAIR");
        }
        if(temperature > 100) {
            System.out.println("NGAGOLAK");
        }

        inputUser.close();
    }
}
