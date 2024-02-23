package hisaki.HelloWorld.string;
public class materiString {
    public static void materi() {
        // String Study
        System.out.println("Hello, World!!!");
        char[] dicodingChars = {'d', 'i', 'c', 'o', 'd', 'i', 'n', 'g'};
        String dicodingStrings = "this is string dicoding";
        System.out.println(dicodingStrings);
        for (int i = 0; i < dicodingChars.length; i++) {
            System.out.print(dicodingChars[i]);
        }

        int panjanghuruf = dicodingStrings.length();
        System.out.println("\nJumlah huruf dari " + dicodingStrings + " adalah " + panjanghuruf);

        System.out.println(dicodingStrings.charAt(3));
    }
}
