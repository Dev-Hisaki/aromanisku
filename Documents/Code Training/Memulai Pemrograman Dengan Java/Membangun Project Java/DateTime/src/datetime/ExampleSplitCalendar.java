package datetime;

import java.util.Calendar;

public class ExampleSplitCalendar {
    public static void main(String[] args) {
        Calendar kalender = Calendar.getInstance();
        System.out.println("Menampilkan waktu secara default : " + kalender.getTime());

        System.out.println("Tanggal : " + kalender.get(Calendar.DATE));
        System.out.println("Bulan   : " + kalender.get(Calendar.MONTH));
        System.out.println("Tahun   : " + kalender.get(Calendar.YEAR));
    }
}
