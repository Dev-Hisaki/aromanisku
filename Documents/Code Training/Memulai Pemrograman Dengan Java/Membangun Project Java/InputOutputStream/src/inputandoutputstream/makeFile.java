package inputandoutputstream;

import java.io.File;

public class makeFile {
    public static void main(String[] args) {
        String dirName = "/me/latihanMkdir";
        File buatFile = null;
        String paths[];

        try {
            buatFile = new File(dirName);

            paths = buatFile.list();

            for(String numberOfPaths : paths){
                System.out.println(numberOfPaths);
            }
        } catch (Exception e) {
            // TODO: handle exception
            e.printStackTrace();
        }
    }
}
