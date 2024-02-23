package inputandoutputstream;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class characterStream {
    public static void main(String[] args) {
        FileReader in = null;
        FileWriter out = null;

        try {
            in = new FileReader(
                    "C://Users//ASUS//Documents//Code Training//Memulai Pemrograman Dengan Java//LatihanInput.txt");
            out = new FileWriter(
                    "C://Users//ASUS//Documents//Code Training//Memulai Pemrograman Dengan Java//LatihanOutput.txt");
            int c;
            while ((c = in.read()) != -1) {
                out.write(c);
            }
        } catch (IOException e) {
            // TODO: handle exception
            e.printStackTrace();
        } finally {
            try {
                if (in != null) {
                    in.close();
                }
                if (out != null) {
                    out.close();
                }
            } catch (IOException e) {
                // TODO: handle exception
                e.printStackTrace();
            }
        }
    }
}
