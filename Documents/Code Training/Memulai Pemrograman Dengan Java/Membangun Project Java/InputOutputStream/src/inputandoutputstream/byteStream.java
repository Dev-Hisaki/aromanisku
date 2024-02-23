package inputandoutputstream;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class byteStream {
    public static void main(String[] args) {
        FileInputStream in = null;
        FileOutputStream out = null;

        try {
            in = new FileInputStream("C://Users//ASUS//Documents//Code Training//Memulai Pemrograman Dengan Java//LatihanInput.txt");
            out = new FileOutputStream("C://Users//ASUS//Documents//Code Training//Memulai Pemrograman Dengan Java//LatihanOutput.txt");
            int c;

            while((c = in.read()) != -1){
                out.write(c);
            }

            System.out.println("LatihanInput.txt Found!!!");

        } catch (IOException e) {
            // TODO: handle exception
            e.printStackTrace();
        } finally {
            try {
                if(in != null){
                    in.close();
                }
                if (out != null) {
                    out.close();
                }

                System.out.println("LatihanOuput.txt Found!!!");

            } catch (Exception e) {
                // TODO: handle exception
                e.printStackTrace();

            }
        }
    }
}
