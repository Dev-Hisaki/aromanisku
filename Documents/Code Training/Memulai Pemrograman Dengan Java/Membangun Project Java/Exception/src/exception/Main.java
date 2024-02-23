package exception;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.sql.SQLException;

public class Main {
    public static void main(String[] args) {
        try {
            String fileLocation = "D://namafile.txt";
            File getFile = new File(fileLocation);
            FileReader fileReader = new FileReader(getFile);
            System.out.println("Ketemu");
        } catch (IOException e) {
            // TODO: handle exception
            System.out.println(e.getMessage());
        } catch (Exception er) {
            System.out.println(er.getMessage());
        }
    }
}
