/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Akarui
 */
public class HitungGaji {

    int hasil;
    int gapok = 0;
    String gapok2;

    String HitungGapok(String RumusGapok) {

        

        if ("A".equals(RumusGapok)) {
            gapok = 3500000;
        } else if ("B".equals(RumusGapok)) {
            gapok = 5000000;
        } else if ("C".equals(RumusGapok)) {
            gapok = 8000000;
        }

        String hasil = Integer.toString(gapok);
        gapok2 = RumusGapok;
        return hasil;
    }

    int HitungTunjangan (int RumusTunjangan){
        
        if (RumusTunjangan > 25) {
            int nilai = Integer.parseInt(HitungGapok(gapok2));
        } else {
            gapok = 5000000;
        }
        return 0;
    }

    int TotalGaji(int RumusTotalGaji) {
        return RumusTotalGaji;
    }

}
