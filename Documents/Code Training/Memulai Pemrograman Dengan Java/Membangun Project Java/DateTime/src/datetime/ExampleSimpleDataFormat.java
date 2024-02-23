package datetime;

import java.text.SimpleDateFormat;
import java.util.Date;

public class ExampleSimpleDataFormat {
    public static void main(String[] args) {
        SimpleDateFormat tanggalSimple = new SimpleDateFormat("DD/MM/YYYY");
        String formatTanggal = tanggalSimple.format(new Date());

        System.out.println("Format tanggal sebelum di simplifikasi : " + new Date());
        System.out.println("Format tanggal setelah simplifikasi " + formatTanggal);
    }
}
