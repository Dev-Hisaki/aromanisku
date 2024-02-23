package datetime;

import java.util.Calendar;

public class ExampleSpecificCalendar {
    public static void main(String[] args) {
        Calendar kalender = Calendar.getInstance();

        System.out.println("waktu sekarang adalah " + kalender.getTime());
        
        kalender.add(Calendar.DATE, -14);
        System.out.println("Menampilkan tanggal 2 minggu yang lalu : " + kalender.getTime());

        kalender.add(Calendar.MONTH, 4);
        System.out.println("Menampiilkan 4 bulan kedepan : " + kalender.getTime());

        kalender.add(Calendar.YEAR, 2);
        System.out.println("Menampilkan 2 tahun kedepan : " + kalender.getTime());
    }
}
