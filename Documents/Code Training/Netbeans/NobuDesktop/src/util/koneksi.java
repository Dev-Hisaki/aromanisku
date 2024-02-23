/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package util;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.DriverManager;

/**
 *
 * @author muhar
 */
public class koneksi {
    private Connection koneksi;
    public Connection getKoneksi(){
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
        } catch (ClassNotFoundException e) {
            
        }
        try {
            koneksi = DriverManager.getConnection("jdbc:mysql://localhost:3306/nobu?zeroDateTimeBehavior=CONVERT_TO_NULL", "root", "");
            if(koneksi != null){
                System.out.println("Berhasil Koneksi Lagi");
            }
        } catch (SQLException e) {
            System.out.println("Gagal menyambung : " + e.getMessage());
        }
        return koneksi;
    }
}
