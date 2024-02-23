package datetime;

import java.util.Calendar;

public class ExampleCalendar {
    public static void main(String[] args) {
        Calendar kalender = Calendar.getInstance();

        // Summon date on Calendar
        System.out.println("Hari ini : " + kalender.getTime());
    }
}
