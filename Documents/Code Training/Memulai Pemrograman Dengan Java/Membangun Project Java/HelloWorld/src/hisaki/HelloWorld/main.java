package hisaki.HelloWorld;

import hisaki.HelloWorld.kendaraan.*;
import hisaki.HelloWorld.mobil.mobil;
import hisaki.HelloWorld.string.materiString;
import java.io.IOException;
import java.sql.Date;

import org.apache.commons.lang3.time.DateUtils;

public class main {
    public static void main(String[] args) throws InterruptedException, IOException {

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); // For clearing cmd

        mobil.car();
        motor.jumlahBan();
        kereta.jumlahBan();
        sepeda.jumlahBan();

        Date today = new Date(0);
        System.out.println("Hari ini : " + today);
        java.util.Date tomorrow = DateUtils.addDays(today, 1);
        System.out.println("Besok : " + tomorrow);

        materiString.materi();
    }
}
