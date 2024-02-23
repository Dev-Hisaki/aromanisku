/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

import javax.swing.JOptionPane;

/**
 *
 * @author Akarui
 */
public class LatihanKuisMethod {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
              
        HitungGaji DataGaji = new HitungGaji();
        Karyawan DataKaryawan = new Karyawan ();
        
        String Nama = JOptionPane.showInputDialog(null, "Masukan Nama Anda : ");
        DataKaryawan.NamaKaryawan(Nama);
        
        String JamKerja = JOptionPane.showInputDialog(null,"Masukan Lama Kerja Berapa Tahun :");
        DataKaryawan.LamaKerja(JamKerja);
        int LamaKerja = Integer.parseInt(JamKerja);
        
        String KodeGolongan = JOptionPane.showInputDialog(null, "Masukan Golongan Kerja :");
        DataKaryawan.Golongan(KodeGolongan);
        
        
        
        System.out.println(Nama+JamKerja+KodeGolongan);
        System.out.println(DataGaji.HitungGapok(KodeGolongan));
        System.out.println(DataGaji.HitungTunjangan(LamaKerja));
        
    }
    
}
