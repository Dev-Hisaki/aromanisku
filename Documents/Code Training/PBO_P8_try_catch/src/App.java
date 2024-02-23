public class App {
    public static void main(String[] args) throws Exception {
        try {
            throw  new IndexOutOfBoundsException("NOT FOUND!!!");
        } catch (Exception e) {
            // TODO: handle exception
        }
    }
}
